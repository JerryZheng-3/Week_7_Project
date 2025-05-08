//
// Created by respe on 5/7/2025.
//

#ifndef MYSTRING_H
#define MYSTRING_H



class Mystring {
public:
    Mystring(); // default constructor, may need to work on this later Mystring90=default;
    Mystring(const char* sz); // new will be here
    ~Mystring(); // destructor needs to manually delete[]

    // getters
    const char* GetString() const;

    // setters
    void SetString(const char* sz);
private:
    char* _sz;
};



#endif //MYSTRING_H
