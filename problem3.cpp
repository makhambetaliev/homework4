

//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;

#include <cmath>
using namespace std;

void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}


// Problem 3
//multiply

int multiply(int x, int y){
    if (x==0 or y==0) return 0;
    
    if (x <0 or y<0) return x + multiply(x,y+1);
    return x + multiply(x,y-1);
    
}
