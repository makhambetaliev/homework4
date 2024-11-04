

void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}

// Problem 1

template <typename T>
int floorFunction(T a) {
    return(int(a));
}

template <typename T>
int ceilingFunction(T a) {
    return(int(a)+1);
}

