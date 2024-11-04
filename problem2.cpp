
void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}



// Problem 2
template <typename T>
void swap_values(T &a,T &b) {
    a+=b;
    b = a-b;
    a-=b;
}

