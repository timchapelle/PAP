#include <iostream>

using namespace std;

int main()
{
    double nb1, nb2;
    int choix;

    cout << "Entrez 2 reels : " << endl;

    cin >> nb1 >> nb2;

    cout << "Votre choix ?" << endl;
    cout << "1. Soustraire " << nb1 << " de " << nb2 << endl;
    cout << "2. Soustraire " << nb2 << " de " << nb1 << endl;

    cin >> choix;

    switch(choix)
    case 1 :
        {
            // Version 1 :
        cout << "La soustraction demandee = " << nb2 - nb1;
            // Version 2 :
        cout << nb2 << " - " << nb1 << " = " << nb2 - nb1;
        break;

    case 2 :
            // Version 1 :
        cout << "La soustraction demandee = " << nb1 - nb2;
            // Version 2 :
        cout << nb1 << " - " << nb2 << " = " << nb1 - nb 2;
        break;
        }

        return 0;
}
