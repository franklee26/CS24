// words2.cpp - implements class Words
// made by Frank Lee; 26/10
// Dynamic allocation implementation (note: namespace is defined as lab03_2 instead of lab04_2?)

#include <cassert>
#include <string>
#include "words2.h"

using std::string;

namespace lab03_2
{
    Words::Words(unsigned int initial_capacity) {
        capacity=initial_capacity;
        used=0;
        data=new string[capacity];
    }

    Words::Words(const Words &source){
        unsigned int i=0;
        capacity=source.size();
        data=new string[capacity];

        while (i<capacity){
            data[i]=source[i];
            i++;
        }
        used=i;
    }
    
    Words::~Words() {
        delete [] data;
    }

    Words& Words::operator=(const Words &source){
        if (this==&source){
            return *this;
        } else{
            delete [] data;
            unsigned int sourcesize=source.size();
            data=new string[sourcesize];
            unsigned int i=0;
            while (i<sourcesize){
                data[i]=source[i];
                i++;
            }
            used=i;
            capacity=source.get_capacity();
            return *this;
        }
    }

    void Words::append(string word) {
        if (used==capacity){
            string* copydata=data;
            unsigned int orglen=used;
            delete [] data;
            capacity=capacity*2;
            data=new string[capacity];
            unsigned int i=0;
            while (i<orglen){
                data[i]=copydata[i];
                i++;
            }
           used=orglen;
           data[used]=word;
           used++;
        } else{
            data[used] = word;
            ++used;
        }
    }
    
    string& Words::operator[] (unsigned int index) {
        assert(index < used);
        return data[index];
    }
    
    unsigned int Words::size() const {
        return used;
    }
    
    unsigned int Words::get_capacity() const {
        return capacity;
    }
    
    string Words::operator[] (unsigned int index) const {
        assert(index < used);
        return data[index];
    }
    
}
