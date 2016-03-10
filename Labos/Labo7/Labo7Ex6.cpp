/* EXO6 Remplir une table d’entiers à dimension variable (max 20).
1°) Réaliser une permutation symétrique de tous les éléments (sans utiliser de 2ème table).
2°) Afficher la table avant et après la permutation. */
#include <iostream>
using namespace std;

int main() {
	int tab[20];
	int tmp(0),nbElem;
	cout << "Combien d'élements ? (max. 20)" << endl;
	cin >> nbElem;
	while (nbElem <= 0 || nbElem > 20)
	{
		cout << "Combien d'éléments ? (Je répète : max. 20)" << endl;
		cin >> nbElem;
	}
	cout << "Entrez vos entiers : " << endl;
	for (int i = 0; i < nbElem; i++)
	{
		cin >> tab[i];
	}
	cout << endl << "AVANT PERMUTATION : " << endl << endl;
	cout << "\t POSITION \t || \t VALEUR" << endl;
	cout << "\t ================================" << endl;
	for (int i = 0; i < nbElem; i++)
	{
		cout << "\t   tab[" << i << "] \t || \t    " << tab[i] << endl;
	}
	// Permutation symétrique : 
	// Cas 1 : si le nombre d'éléments est impair :
	tmp=tab[nbElem-1];
	for (int i = nbElem; i < 0; i--)
	{	
		tab[i] = tab[nbElem-i];
	}
	tab[0]=tmp;
	
	cout << endl << "APRES PERMUATION : " << endl << endl;
	cout << "\t POSITION \t || \t VALEUR" << endl;
	cout << "\t ================================" << endl;
	for (int i = 0; i < nbElem; i++)
	{
		cout << "\t   tab[" << i << "] \t || \t    " << tab[i] << endl;
	}
	return 0;
}

