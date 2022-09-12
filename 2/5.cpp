int main(int, char**) {
    double number = 0;
    double *numberPtr = &number;
    double &numberRef = number;

    number = 64;
    *numberPtr = 128;
    numberRef = 256;
}
