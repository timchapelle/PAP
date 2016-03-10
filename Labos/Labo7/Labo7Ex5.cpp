#include <iostream>
using namespace std;

int main() {
	int tab[20];
	int tmp,nbElem;
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
	tmp = tab[nbElem-1];
	for (int i = nbElem-1; i >=1; i--)
	{	
		tab[i]=tab[i-1];
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
