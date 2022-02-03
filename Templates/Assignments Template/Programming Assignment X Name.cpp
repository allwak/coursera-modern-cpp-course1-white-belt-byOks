int Factorial(int x) {
    int i = 1;
    int f = 1;
    while (i <= x) {
        f *= i++;
    }
    return f;
}