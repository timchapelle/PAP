#include <iostream>

using namespace std;

int main()
{
    int annee;
    cout << "Entrez une annee :" << endl;
    cin >> annee;

    if ((annee%100) == 0)
    cout << annee << " est un siecle" << endl;
    else
    cout << annee << " n'est pas un siecle" << endl;

    return 0;
}
