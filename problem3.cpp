


// Problem 3

int multiply(int n, int m) {
    if (m==1) {
        return n;
    }
    else {
        return n+multiply(n, m-1);
    }
}

