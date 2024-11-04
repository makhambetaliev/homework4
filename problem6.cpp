

//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;

#include <cmath>
using namespace std;

void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}



// Problem 6
//midValue
template <typename T>
T midValue(T a, T b, T c){
    if ((a>b and a < c) or (a<b and a>c)){
        return a;
    } else if ((b > a and b < c) or (b < a and b > c)) {
        return b;
    } else {
        return c;
    }
}
