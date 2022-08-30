#include <iostream>

int main(int argc, char** argv) {
    const int length = 5;

    int under10 = 0;
    int between10and20 = 0;
    int over20 = 0;

    std::cout << "Du skal skrive inn 5 temperaturer." << std::endl;
    for (int i = 1; i <= length; i++) {
        double temperature;
        std::cout << "Temperatur nr " << i << ": ";
        std::cin >> temperature;
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
