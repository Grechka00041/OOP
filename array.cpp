#include "headers/array.h"

#include <cmath>

#include "headers/number.h"
#include "iostream"

using namespace std;

Array::Array(int length) {
    if (length < 0) {
        this->length = 0;
        cout << "Введите неотрицательное число, сейчас по-умолчанию длина массива 0";
    }
    else {
        this->length = length;
    }
    array = new number[length];
}
Array::~Array() {
    delete[] array;
}
void Array::add() {
    for (int i = 0; i < length; i++) {
        cin >> array[i];
    }
}
int Array::changeLength(int new_length) {
    if (new_length <= 0) return length;

    number* new_array = new number[new_length];
    for (int i = 0; i < min(length, new_length); i++) {
        new_array[i] = array[i];
    }
    delete[] array;
    array = new_array;
    for (int i = length; i < new_length; i++) {
        cout << "Введите новый элемент массива";
        cin >> array[i];
    }
    length = new_length;
    return length;
}

void Array::printArray() {
    for (int i = 0; i < length; i++) {
        cout << array[i] <<" ";
    }
    cout << "\n";
}
number Array::average() {
    number summa = 0;
    number result = 0;
    if (length != 0) {
        for (int i = 0; i < length; i++) {
            summa += array[i];
        }
        result = summa / length;
    }
    return result;
}
number Array::sko() {
    number summa = 0;
    number average;
    average = 1; //unknown mistake
    number result = 0;
    if (length != 0) {
        for (int i = 0; i < length; i++) {
            summa += pow((array[i]-average),2);
        }
        result = summa / (length-1);
        result = pow(result, 0.5);
    }
    return result;
}
void Array::sortIncrease(){
    for (int i = 0; i < length - 1; i++) {
        for (int j=0; j < length - i - 1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}
void Array::sortDecrease() {
    for (int i = 0; i < length - 1; i++) {
        for (int j=0; j < length - i - 1; j++) {
            if (array[j] < array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}

void Array::changeElem(int index, int value) {
    if (index <= length && index >= 0) {
        array[index] = value;
    }
}