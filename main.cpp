//ex1
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string nume, prenume;

    cout << "Introduceti numele: ";
    cin >> nume;
    cout << "Introduceti prenumele: ";
    cin >> prenume;

    string nume_complet = nume + " " + prenume;

    cout << "Salut, " <<nume_complet<< "!" << endl;
    cout << "Numarul de caractere din numele complet: " << nume_complet.length() << endl;
    return 0;
}

//ex2
#include <iostream>
using namespace std;

struct Kundendaten{
    int nummer{};
    string name;
    int postleitzahl{};
    string ortsname;
} liste[10];

int main2()
{
    liste[0].nummer = 1;
    liste[0].name = "Gigel";
    liste[0].postleitzahl = 77700;
    liste[0].ortsname = "undeva";

    cout << liste[0].nummer << liste[0].name << liste[0].postleitzahl << liste[0].ortsname;

    return 0;
}

//ex3
