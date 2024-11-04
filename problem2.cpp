

//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;

#include <cmath>
using namespace std;

void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}


// Problem 2
//swap_values
void swap_values(double &a, double &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

