/*********************
Name: William Hammel
Coding 04: Stacks Practice
Purpose: : In this assignment you will
create a stack object that will work with
a struct data type called Data. The struct
data type contains an int called id and a
string called information.
**********************/

#ifndef STACKS_MAIN_H
#define STACKS_MAIN_H

// you probably need all these,
// but if you don't get rid of what you don't need
#include <stdlib.h>   /* srand, rand */
#include <time.h>     /* time */
#include <iostream>   /* cout, endl */
#include <string>     /* string */
#include "functions.h"
using std::cout;
using std::endl;

/*
 * additional directives here
 * 
 */
// adding stack.h
#include "stack.h"
// adding multiplier
#define MULTIPLIER 1.5 // used to test overflow and underflow
#define RANDOM_MULTIPLIER 10 // for random testing
#define CHOICES 6 // used to pick random operations

#endif /* STACKS_MAIN_H */
