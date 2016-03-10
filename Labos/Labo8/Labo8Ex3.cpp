/* EXO3 F/P pour simplifier 2 entiers par leur PGCD en appelant une des F/P de l’exercice précédent. */
#include <iostream>
using namespace std;
// Prototypes
int pgcd(int a,int b);
void permutation(int x,int y);
// Main
int main() {
	int nb1,nb2,tmp;
	cout << "Entrez 2 entiers" << endl;
	cin >> nb1 >> nb2;
	tmp=nb1;
	nb1 /= pgcd(nb1,nb2);
	nb2 /= pgcd(tmp,nb2);
	cout << "Nb1 simplifié : " << nb1 << endl << "Nb2 simplifié : " << nb2 ;
}
// Fonction - Procédure
int pgcd(int a,int b)
{
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

