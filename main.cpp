/*********************
Name: William Hammel
Coding 04: Stacks Practice
Purpose: : In this assignment you will
create a stack object that will work with
a struct data type called Data. The struct
data type contains an int called id and a
string called information.
**********************/

#include "main.h"

int main(int argc, char **argv) {
    // here for the rand_string() function
    // if you don't use it, get rid of this
    srand(time(NULL));
    
    // between if size >= 2 and the else
    if(argc == 2){
        //borrowed from arrays prog fund2
        bool pos = is_positive_integer(argv[1]);
        int size = atoi(argv[1]);
        if(size >= 2 && pos == true){
            // create stack
            int size = atoi(argv[1]);
            Stack stack(size);
            srand(time(NULL));

            std::cout << std::endl;
            std::cout << "Initial Testing of push, peek, pop and isEmpty" << std::endl;
            std::cout << std::endl;

            //INITIAL PUSH TESTING
            std::string strtemp;
            for(int i=1; i<size; i++) {
                rand_string(&strtemp);
                if(strtemp.empty() || i<0){
                    std::cout << "Error. Int for id must be greater than 0 and string information cannot be empty." << std::endl;
                }
                else if (stack.push(i, &strtemp)) {
                    std::cout << "Pushing: ";
                    std::cout << "Integer ID: " << i << " Info: " << strtemp << std::endl;
                    std::cout << "Pushed Element! " << std::endl;
                }
                else {
                    std::cout << "Overflow Error! " << std::endl;
                }
                std::cout << std::endl;
            }

            // testing isEmpty() on full stack
            if (stack.isEmpty()) {
                std::cout << "stack is empty" << std::endl;
            } else {
                std::cout << "stack is NOT empty" << std::endl;
            }
            std::cout << std::endl;

            //INITIAL PEEK TESTING
            Data *userData; // create variable pointer to empty Data struct
            userData = new Data; // userData is empty struct i think
            std::cout << std::endl;
            std::cout << "Testing peek function.." << std::endl;
            std::cout << "Peeking...." << std::endl;
            if(stack.peek(userData)){
                std::cout << "Integer ID: " << userData->id << " " << " Info: " << userData->information << std::endl;
            }else{
                std::cout << "Peek unsuccessful" << std::endl;
            }
            std::cout << std::endl;

            //INITIAL POP TESTING
            for(int i = 0; i<size; i++){
                //making pointer to an empty data struct to pass to pop and later to peek
                Data *userData; // create variable pointer to empty Data struct
                userData = new Data; // userData is empty struct i think
                std::cout << "Testing pop function.. " << std::endl;
                if (stack.pop(userData)){
                    std::cout << "Pop successful! " << std::endl;
                }else {
                    std::cout << "Underflow error! " << std::endl;
                }
                std::cout << std::endl;
            }
        }else{
            std::cout << std::endl;
            std::cout << "Invalid Input, Enter only 1 positive integer >= 2" << std::endl;
            std::cout << std::endl;
        }
    }else{
        std::cout << std::endl;
        std::cout << "Invalid Input, Enter only 1 positive integer after " << argv[0] << std::endl;
        std::cout << std::endl;
    }

    return 0;
}

