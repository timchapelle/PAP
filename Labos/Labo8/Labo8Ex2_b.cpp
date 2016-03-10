/* EXO2 Calcul du PGCD de 2 entiers par une F/P.
a) Méthode d’Euclide (voir labo 5).
b) Méthode avec les formules (voir labo 5 exo 6). */
#include <iostream>
using namespace std;
// Prototype
int pgcd (int a,int b);
// Main
int main() {
	int x, y;
	while (x <= 1 || y <= 1 )
	{
		cout << "Entrez 2 entiers supérieurs à 1" << endl;
		cin >> x >> y ; 
	}
	cout << "PGCD : " << pgcd(x,y);
}
// Fonction
int pgcd (int a, int b) { 
	int resultat;
	bool ok=false;
	while ( ok != true ) 
	{
		if (a > b) 
		{
			a = a-b; 
		} 
		else if (a < b) {
			b = b-a; 
		} 
		else {
			resultat = a;
			ok = true;
		}
	}
	return resultat;
}
