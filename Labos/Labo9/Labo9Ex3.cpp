/* EXO3
Soit une table de maximum 25 entiers.
a) F/P pour remplir la table.
b) F/P qui reçoit la table, un indice d'un élément de la table et qui enlève cet élément de la table en
tassant les éléments suivants.
c) F/P pour afficher une table (appelée 2 fois pour afficher la table avant et après modification).
2ème version : b) On ne passe plus l'indice d'un élément mais l'élément qui si il existe est supprimé. */
#include <iostream>
using namespace std;
// Prototypes
void remplir(int t[], int &a);
void afficher(int t[], int a);
void enlever(int t[], int a, int b);
// Bloc
int main() 
{
	int tab[25], dimens(0),indice;
	remplir(tab,dimens);
	cout << "Avant retrait : " << endl;
	afficher(tab,dimens);
	cout << "Indice (max : "<< dimens-1 << ") : " << endl;
	cin >> indice;
	enlever(tab,indice, dimens);
	cout << "Après retrait :" << endl;
	afficher(tab,dimens-1);
}
// Procédure pour remplir le tableau
void remplir(int t[], int &a)
{ 	
	int dim(0);
	while (dim <= 0 || dim > 25)
	{
		cout << "Dimension ? (max 25)" << endl;
		cin >> dim;
	}
	cout << "Go !" << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> t[i];
	}
	a=dim;
}
// Procédure pour afficher un tableau en fonction de sa dimension
void afficher(int t[],int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "Tab[" << i << "] = " << t[i] << endl;
	}
	
}
// Procédure pour "enlever" un élément du tableau
void enlever(int t[], int a, int b)
{
	for (int i = a; i < b; i++)
	{
		t[i] = t[i+1];
	}
}
