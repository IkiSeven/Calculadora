#ifndef OP_H
#define OP_H

class op {
    private:
        float numberOne;
        float numberTwo;
        float resultNumber;

    public:
        void setNumberOne(float setNewNumber);
        void setNumberTwo(float setNewNumber);
        float getNumberOne();
        float getNumberTwo();
        float sum(float newNumberOne, float newNumberTwo);
        float subtract(float newNumberOne, float newNumberTwo);
        float multiply(float newNumberOne, float newNumberTwo);
        float divide(float newNumberOne, float newNumberTwo);
};

#endif // OP_H