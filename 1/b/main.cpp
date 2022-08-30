#include <iostream>
#include <fstream>

void read_temperatures(double temperatures[], int length);

int main(int, char**) {
    const int length = 5;
    double temperatures[length];

    std::cout << "Leser inn de " << length << " første temperaturene fra filen." << std::endl;
    read_temperatures(temperatures, length);

    int under10 = 0;
    int between10and20 = 0;
    int over20 = 0;

    for (int i = 0; i < length; i++) {
        double temperature = temperatures[i];
        if (temperature < 10) {
            under10++;
        } else if (temperature <= 20) {
            between10and20++;
        } else {
            over20++;
        }
    }

    std::cout << "Antall under 10 er " << under10 << std::endl;
    std::cout << "Antall mellom 10 og 20 er " << between10and20 << std::endl;
    std::cout << "Antall over 20 er " << over20 << std::endl;
}

void read_temperatures(double temperatures[], int length) {
    std::ifstream file("temps.txt");
    if (!file) {
        std::cerr << "Feil ved åpning av fil" << std::endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; i++) {
        if (!(file >> temperatures[i])) {
            std::cerr << "Uforventet filslutt. Forventet minst " << length << " verdier - fikk " << i << "." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    file.close();
}
