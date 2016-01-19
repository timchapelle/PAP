/**
Exercice cours d'algo et programmation 8/12/2015 : convertir une surface
en mètres carrés vers hectares, ares et centiares.
Exemple : 21435 m² = 2 hectares 14 ares 35 centiares.
**/

#include <iostream>
using namespace std;

int main()
{
    // 1. En-tête du programme :

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
    cout << "+                                                      -" << endl;
    cout << "-  CONVERTISSEUR METRES CARRES / MESURES AGRAIRES      +" << endl;
    cout << "+                                                      -" << endl;
    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl << endl;

    // 2. Déclaration des variables

    int surf_ha, surf_a, surf_ca, nb; // Définition des variables utilisées pour le calcul
    char Sortie='O';
    // 3. Calcul
    while (Sortie =='o' || Sortie == 'O')
    {
        do
        {
            cout << "Entrez une surface (m\xFD) \x85 convertir : " << endl << endl;
            cin >> nb;
        }
        while (nb < 0);

        cout << endl;

        surf_ha =  nb / 10000;
        surf_a  = (nb%10000)/100;
        surf_ca =  nb%100;

        cout << nb << " m\x8Atres carr\x82s = " << surf_ha << " hectare(s) " << surf_a << " are(s) " << surf_ca << " centiare(s) " << endl << endl;

        cout << "Voulez-vous convertir une autre surface ? O/N" << endl;
        cin >> Sortie;

    }
    return 0;
}

