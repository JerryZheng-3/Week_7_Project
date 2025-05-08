#include "Mystring.h"

#include <string.h>

Mystring::Mystring() {
    _sz = nullptr; // this is necessary when you have a pointer in your data member;
}

Mystring::Mystring(const char *sz) {
    // ensure there are enough room to make the copy
    _sz = new char[strlen(sz) + 1]; // +1 is caused by the "/0" IDE automatically adds
    //copy
    strcpy(_sz, sz);
}

Mystring::~Mystring() {
    delete[] _sz;
}

const char* Mystring::GetString() const {

    return _sz;
}

void Mystring::SetString(const char *sz) {

    // check whether before this moment, a new char have already declared. if so, delete[]
    if (_sz == nullptr) {
        delete[] _sz;
    }
    // ensure there are enough room to make the copy
    _sz = new char[strlen(sz) + 1]; // +1 is caused by the "/0" IDE automatically adds
    //copy
    strcpy(_sz, sz);
}