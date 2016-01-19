#include <iostream>

using namespace std;

int main()
{
    char lettre;
    cout << "Entrez un et un seul caractere : " << endl;
    cin >> lettre;

    if (lettre >= 'a' && lettre <= 'z')
        cout << lettre << " est une minuscule";
    else if (lettre >= 'A' && lettre <= 'Z')
        cout << lettre << " est une majuscule";
    else if (lettre >= '0' && lettre <= '9')
        cout << lettre << " est un chiffre";

    return 0;
}
