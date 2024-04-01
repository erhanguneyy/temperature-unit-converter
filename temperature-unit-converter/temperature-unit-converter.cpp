#include <iostream>

int main()
{
    int islem;
    float derece;
    float sonuc;
    std::cout << "************************************\n";
    std::cout << "Yapilacak islemi secin.\n";
    std::cout << "************************************\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Celsius to Kelvin\n";
    std::cout << "3. Fahrenheit to Celsius\n";
    std::cout << "4. Fahrenheit to Kelvin\n";
    std::cout << "5. Kelvin to Celsius\n";
    std::cout << "6. Kelvin to Fahrenheit\n";
    std::cout << "************************************\n";
    std::cout << "Islem:";
    std::cin >> islem;
    std::cout << "************************************\n";
    std::cout << "Havanin kac derece oldugunu girin:";
    std::cin >> derece;

    if (islem == 1) {
        sonuc = (derece * 9 / 5) + 32;
        std::cout << derece <<"°C " << sonuc<< "°F degerine esittir.";
    }
    else if (islem == 2) {
        sonuc = derece + 273.15;
        std::cout << derece <<  "°C " << sonuc << "K degerine esittir.";
    }
    else if (islem == 3) {
        sonuc = (derece - 32) * 5 / 9;
        std::cout << derece << "°F " << sonuc << "°C degerine esittir.";
    }
    else if (islem == 4) {
        sonuc = (derece - 32) * 5 / 9 + 273.15;
        std::cout << derece << "°F " << sonuc << "K degerine esittir.";
    }
    else if (islem == 5) {
        sonuc = derece - 273.15;
        std::cout << derece << "K " << sonuc << "°C degerine esittir.";
    }
    else if (islem == 6) {
        sonuc = (derece - 273.15) * 9 / 5 + 32;
        std::cout << derece << "K " << sonuc << "°F degerine esittir.";
    }
    else {
        std::cout << "Hatalı işlem yaptınız.";
    }

}

