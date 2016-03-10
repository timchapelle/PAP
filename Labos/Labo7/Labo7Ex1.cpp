/* EXO1 Remplir 2 tables de réels de même dimension variable (max 20).
Faire la somme des éléments correspondants de ces 2 tables dans une 3ème et afficher cette 3ème table. */

#include <iostream>
using namespace std;

int main() {

	double tab1[20], tab2[20], tab3[20];
	int nbElem;
	
	cout << "Nombre d'éléments : " << endl;
	cin >> nbElem;
	for (int i = 0; i < nb; i++)
	{
		cout << "Entrez un réel (tableau 1) : " << endl;
		cin >> tab1[i]
	}
	for (int i = 0; i < nbElem; i++)
	{
		cout << "Entrez un réel (tableau 2) : " << endl;
		cin >> tab2[i];
		tab3[i] = tab1[i] + tab2[i];
	}
	for (int i = 0; i < nbElem; i++)
	{
		cout << "tab3[" << i << "] = " << tab3[i] << endl;
	}
	return 0;	
}
