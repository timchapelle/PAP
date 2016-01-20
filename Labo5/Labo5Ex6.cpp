/* LABO 5 - EXO6 Calculer le PGCD de 2 entiers selon la méthode d’Euclide.
Le calcul du PGCD n’est possible que pour des entiers > 1.
Méthode d’Euclide :
- Diviser le plus grand par le plus petit.
- Si le reste n’est pas 0, diviser le diviseur par le reste. (Et toujours, ainsi)
- Si le reste = 0, le PGCD est le diviseur. */

#include <iostream>
using namespace std;

int main() {

int dividende, diviseur, tmp, reste=1;

while ( dividende <= 1 || diviseur <= 1 || dividende == diviseur )
{
	cout << "Entrez 2 entiers > 1, différents l'un de l'autre : " << endl; cin >> dividende >> diviseur;
}	
	
if ( diviseur > dividende )
{tmp=dividende;dividende=diviseur;diviseur=tmp;} // permutation du dividende et du diviseur pour toujours avoir dividende > diviseur
	
if ( dividende % diviseur == 0 )

	cout << diviseur << " est le PGCD de " << dividende << " et " << diviseur << endl;
	
else 
{
	while ( reste != 0 )
	{
		reste=dividende % diviseur;
		dividende=diviseur;
		diviseur=reste;
	}
	
	cout << "PGCD : " << dividende << endl;
} 

return 0;

}// fin du main
