/* Labo 5 - Exo4 : Entrer des entiers strictements positifs 
 * et afficher leur maximum */

#include <iostream>
using namespace std;

int main() {

int nb=1, nbmax=0;

cout << "Entrez un entier strictement positif (0 ou négatif pour sortir) "<< endl;

while (nb > 0)
{
	cin >> nb;
	if (nb > nbmax)
	{
		nbmax=nb;
	}
cout << "Nombre maximum : " << nbmax << endl;
}

cout << "Bye bye";
return 0;

}
