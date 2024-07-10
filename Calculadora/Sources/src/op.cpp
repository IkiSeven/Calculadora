#include "../../Headers/Include/op.h"
#include <string>
#include <iostream>

using namespace std;

void op::setNumberOne(float setNumber) {
    this->numberOne = setNumber;
}

void op::setNumberTwo(float setNumber) {
    this->numberTwo = setNumber;
}

float op::getNumberOne() {
    return this->numberOne;
}

float op::getNumberTwo() {
    return this->numberTwo;
}

// Aqui começam as funções com operações matematicas
float op::sum(float numberOne, float numberTwo) {
    this->resultNumber = numberOne + numberTwo;
    return this->resultNumber;
}

float op::subtract(float numberOne, float numberTwo) {
    this->resultNumber = numberOne - numberTwo;
    return this->resultNumber;
}

float op::multiply(float numberOne, float numberTwo) {
    this->resultNumber = numberOne * numberTwo;
    return this->resultNumber;
}

float op::divide(float numberOne, float numberTwo) {
    if (numberTwo == 0) {
        cout << "Cannot divide by zero" << endl;
        return 0;
    }
    this->resultNumber = numberOne / numberTwo;
    return this->resultNumber;
}