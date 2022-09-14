#include <string>
#include <iostream>
#include <sstream>

int main() {
    std::string word1, word2, word3;

    // a)
    std::cout << "Skriv inn 3 ord (linjeskift etter hvert ord):" << std::endl;
    std::cin >> word1 >> word2 >> word3;

    // b)
    std::stringstream ss;
    ss << word1 << " " << word2 << " " << word3 << ".";
    std::string sentence = ss.str();
    std::cout << sentence << "\n";

    // c)
    std::cout << "\n" << "Lengder:" << "\n"
        << "Første ord: " << word1.length() << "\n"
        << "Andre ord: " << word2.length() <<  "\n"
        << "Tredje ord: " << word3.length() << "\n"
        << "Hele setningen: " << sentence.length() << "\n";

    // d)
    std::string sentence2 = sentence;

    // e)
    if (sentence2.length() >= 12) { 
        sentence2.replace(10, 3, "xxx");
    } else {
        std::cout << "Kan ikke bytte ut tegn 10-12, ettersom strengen ikke er lang nok.";
    }
    std::cout << sentence << "\n" << sentence2 << "\n";

    // f)
    std::string sentence_start = sentence.substr(0, 5);
    std::cout << sentence << "\n" << sentence_start << "\n"; 

    // g)
    size_t halloIndex = sentence.find("hallo");
    if (halloIndex != std::string::npos) {
        std::cout << "Posisjon til hallo: " << sentence.find("hallo") << "\n";
    } else {
        std::cout << "Posisjon til hallo: finnes ikke" << "\n";
    }
    
    // h)
    size_t index = 0;
    std::cout << "Posisjoner til 'er': ";
    while ((index = sentence.find("er", index)) != std::string::npos) {
        std::cout << index;
    }
    std::cout << "\n";
}
