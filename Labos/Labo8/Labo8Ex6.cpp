/* EXO6 F/P qui calcule Cj i (nombre de combinaisons de i objets parmi j), Cj i = j!/(i! .(j-i)!) 
 * en appelant la F/P de l’exercice précédent. */
#include <iostream>
using namespace std;
// Prototypes
int combinaisons(int a, int b);
int factorielle(int n);
// Main
int main() {
	int nb1(-1),nb2(-1);
	while (nb1 < 0 || nb2 < 0)
	{
		cout << "Entrez deux entiers positifs :" << endl;
		cin >> nb1 >> nb2;
	}
	cout << "Nombre de combinaisons : " << combinaisons(nb1,nb2) << endl;
}
// Fonctions
int factorielle(int n) 
{	
	int fact(n);
	if (n>=1)
	{
		for (int i = 1; i < n; i++)
		{
			fact *= n-i;
		}
	}
	else
	{
		fact = 1;
	}	
	return fact;
}
int combinaisons(int a, int b) 
{	
	int tmp, nbComb;
	if (b<a)
		{
			tmp=a ; a=b ; b=tmp ;
		}
		nbComb = factorielle(b)/(factorielle(a)*factorielle(b-a));
		return nbComb;
}
