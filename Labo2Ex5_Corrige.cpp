#include <iostream>
using namespace std;

int main()
{
    int surf_ha, surf_a, surf_ca, nb; // Définition des variables utilisées pour le calcul

    cout << "Entrez une surface (m\xFD) \x85 convertir : " << endl << endl;
    cin >> nb;
    cout << endl;
	if (nb > 0)
    {
    surf_ha =    nb / 10000;
    surf_a  =  ((nb%10000)/100);
    surf_ca =  (nb%100);

    
    cout << nb << " m\x8Atres carr\x82s = " << surf_ha << " hectare(s) " << surf_a << " are(s) " << surf_ca << " centiare(s) " << endl << endl;
	}
    else
        cout << "Veuillez rentrer un nombre positif !";
    return 0;
}

