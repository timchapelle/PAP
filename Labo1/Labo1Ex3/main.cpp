#include <iostream>

using namespace std;

int main()
{
    int nb1, nb2, nb3, perm;

    cout << "Entrez 3 entiers :" << endl;
    cin >> nb1 >> nb2 >> nb3;

    cout << "Avant la permutation, le 1er entier = " << nb1 << " et le 2eme entier = " << nb2 << " et le 3eme entier = " << nb3 << endl;

    // Version 1 :
    perm=nb2;
    nb2=nb1;
    nb1=nb3;
    nb3=perm;

    // Version 2 :
    perm=nb3;
    nb3=nb1;
    nb1=nb2;
    nb2=perm;

    cout << "Apres la permutation, le 1er entier = " << nb1 << " et le 2eme entier = " << nb2 << " et le 3eme entier = " << nb3 << endl;

    return 0;
}
