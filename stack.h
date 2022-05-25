/*********************
Name: William Hammel
Coding 04: Stacks Practice
Purpose: : In this assignment you will
create a stack object that will work with
a struct data type called Data. The struct
data type contains an int called id and a
string called information.
**********************/

#ifndef STACK_H
#define STACK_H

/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include "data.h"
#include <iostream>
#include <string>       /* string */
using std::cout;
using std::endl;

class Stack {

public:

    /* 
     * write all your public method prototypes here
     * this includes you constructor and destructor
     */

    //constructor
    Stack();
    //destructor
    ~Stack();
    bool push(int, string*);
    bool pop(Data*);
    bool peek(Data*);
    bool isEmpty();
    
private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need.
    // do not modify them or add any other attributes
    int top;
    int size;
    Data **stack;
};

#endif //STACK_H
