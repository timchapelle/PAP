#include <iostream>

using namespace std;

int main()
{
    int nb1, nb2, nb3;

    cout << "Entrez 3 entiers :" << endl;
    cin >> nb1 >> nb2 >> nb3;

//Version 1
    cout << "Somme des deux premiers = " << nb1 + nb2 << endl;
    cout << "Multiplication des deux derniers = " << nb2 * nb3 << endl;
//Version 2
    cout << "Somme de " << nb1 << " et " << nb2 << " vaut " << nb1 + nb2 << endl;
    cout << "Multiplication de " << nb2 << " et " << nb3 << " vaut " << nb2 * nb3 << endl;
//Version 3
    cout << nb1 << " + " << nb2 << " = " << nb1 + nb2 << endl;
    cout << nb2 << " * " << nb3 << " = " << nb2 * nb3 << endl;

    return 0;
}
