/*********************
Name: William Hammel
Coding 04: Stacks Practice
Purpose: : In this assignment you will
create a stack object that will work with
a struct data type called Data. The struct
data type contains an int called id and a
string called information.
**********************/

#ifndef STACKS_FUNCTIONS_H
#define STACKS_FUNCTIONS_H

#define MAXSTRSIZE 8

#include <stdlib.h>   /* srand, rand */
#include <time.h>     /* time */
#include <string>     /* string */
#include <cstring>

void rand_string(std::string*);
bool is_positive_integer(char*);

#endif /* STACKS_FUNCTIONS_H */