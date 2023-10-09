// laboratorium02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    char a;
    int intLiczba;
    //std::cout << "Hello World!\n";
    std::cin >> a;
    //std::cout << int(a);
    if (int(a) >= 48 && int(a) <= 57) {
        intLiczba = (int)a - 48;
    }
    else {
        abort();
    };
    
    int calosc = 10;
    if (intLiczba % 2 == 0) {
        std::cout << double(intLiczba) / double(calosc) * 100;
    }
    else {
        std::cout << ++intLiczba;
    }
    int c;
    std::cin >> c;
    std::cout << c;
    //std::cin.clear();
    //std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
