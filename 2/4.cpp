int main(int, char**) {
    int a = 5;
    int &b = a; // en referanse må være initialisert
    int *c;
    c = &b;
    a = b + *c; // kan ikke dereferensere en ikke-peker
    b = 2; // kan ikke skrive til en peker
}
