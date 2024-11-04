

//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;

#include <cmath>
using namespace std;

void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}


// Problem 5
//decimalToBinary

int decimalToBinary(int n){
    if (n==0) return 0;
    int binary = decimalToBinary(n/2);
    return (binary*10)+(n%2);

}

