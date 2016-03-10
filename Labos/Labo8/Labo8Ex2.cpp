/* EXO2 Calcul du PGCD de 2 entiers par une F/P.
a) Méthode d’Euclide (voir labo 5).
b) Méthode avec les formules (voir labo 5 exo 6). */
#include <iostream>
using namespace std;
// Prototypes
int pgcd (int a,int b);
void permutation(int x,int y);
// Main
int main() {
	int nb1, nb2;
	while (nb1 <= 1 || nb2 <= 1 )
	{
		cout << "Entrez 2 entiers supérieurs à 1" << endl;
		cin >> nb1 >> nb2 ; 
	}
	permutation(nb1,nb2);
	cout << "PGCD : " << pgcd(nb1,nb2);
}
// Fonction - Procédure
void permutation(int x, int y) {
	int tmp;
	if (y > x)
	{
		tmp=x;
		x=y;
		y=tmp;
	}
}
int pgcd (int a, int b) { 
	int reste(1),resultat;
	if (a % b == 0) {
		resultat=b;
	}
	else {
		while (reste != 0)
		{
			reste=a%b;
			a=b;
			b=reste;
		}
		resultat=a;
	}
	return resultat;
}
