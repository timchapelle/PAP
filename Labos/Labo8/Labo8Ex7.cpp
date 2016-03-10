/* EXO7 Utiliser les 2 F/P précédentes pour afficher les coefficients du binôme de Newton de degré n.
Rappel : Les coefficients du binôme de Newton de degré n sont : Cn 0 Cn 1 … Cn n
(Ce sont les coefficients du produit remarquable de (a+b)n)
Exemple d’exécution : Les coefficients du binôme de Newton de degré 3 sont 1 3 3 1 */

#include <iostream>
using namespace std;
// Prototypes
int factorielle(int a);
int combinaisons(int a, int b);
void binome(int a);
// Main
int main() 
{
	int degre(-1);
	while (degre<0)
	{
		cout << "Entrez le degré du binôme (entier positif) : " << endl;
		cin  >> degre;
	}
	cout << "Coefficients de degré " 
		 << degre 
		 << " : " ;
	binome(degre);
	return 0;
}
// Fonctions - Procédures
int factorielle(int a) 
{	
	int fact(a);
	if (a>=1)
	{
		for (int i = 1; i < a; i++)
		{
			fact *= a-i;
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
void binome (int a)
{
	for (int i = 0; i < a+1; i++)
	{
		cout << combinaisons(i,a) << " ";
	}
}
