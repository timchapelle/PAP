#include <iostream>

using namespace std;

int main()
{
    int nb;

    cout << "Entrez un entier : " << endl;

    cin >> nb;

    if (nb < 0)
        cout << "Valeur absolue : " << -nb;
    else
        cout << "Valeur absolue : " << nb;

    return 0;
}
