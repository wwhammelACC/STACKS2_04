/*********************
Name: William Hammel
Coding 04: Stacks Practice
Purpose: : In this assignment you will
create a stack object that will work with
a struct data type called Data. The struct
data type contains an int called id and a
string called information.
**********************/

// each cpp includes ONLY it's header directly
#include "stack.h"

/*
 * write all your stack methods here
 */

Stack::Stack(int userSize){
    top = -1;
    if(userSize <= DEFAULT){
        size = userSize;
    }else{
        size = DEFAULT;
    }
    stack = new Data *[size];
}

Stack::~Stack(){
    for(int i=top; i>=0; i--){
        delete stack[i];
    }
    delete[] stack;
}

//PUSH METHOD/FUNCTION
bool Stack::push(int id, string *str) {
    bool flag = false;
//    cout << "Push Test Line " << endl;
    if (top < size - 1) {
        if(id > 0 && !str->empty()){
            // pointer to data struct
            Data *myData;
            //allocate data structure
            myData = new Data;
            myData->id = (id);
            myData->information = *str;
            stack[++top] = myData;
            flag = true;
        }
    }
    return flag;
}

//POP METHOD/FUNCTION
bool Stack::pop(Data* ref){
    bool flag = false;
//    cout << "Pop Test Line " << endl;
    if(!isEmpty()){     // if not empty
        //getting info from top of stack and putting it in data struct
        ref->id = stack[top]->id;
        ref->information = stack[top]->information;
        //delete allocated memory
        delete stack[top];
        //decrement stack
        top--;
        flag = true;
    }else{
        //fill passed data struct with -1, empty string
        ref->id = -1;
        ref->information = "";
    }
    return flag;
}

//PEEK METHOD/FUNCTION
bool Stack::peek(Data* ref){
    bool flag = false;
    cout << "Peek Test Line " << endl;
    return flag;
}

//ISEMPTY METHOD/FUNCTION
bool Stack::isEmpty(){
    //The process for isEmpty() is to return
    // true or false based on the top being -1 or not.
    return top < 0;
}