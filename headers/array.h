#include "number.h"
#include "iostream"

#ifndef ARRAY_H
#define ARRAY_H

class Array{
private:
    int length;
    number *array;
public:
    Array(int length = 0);
    void fill(int n);
    ~Array();
    void changeLength(int length);
    void add();
    void printArray();
    double average();
    double sko();
    void sortIncrease();
    void sortDecrease();
    void changeElem(int elem, int value);

};

#endif // ARRAY_H