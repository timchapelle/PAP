/* EXO1 Remplir 2 tables de réels de même dimension variable (max 20).
Faire la somme des éléments correspondants de ces 2 tables dans une 3ème et afficher cette 3ème table. */

#include <iostream>
using namespace std;

int main() {

	double tab1[20], tab2[20], tab3[20], nb1, nb2;
	int nb;
	
	cout << "Nombre d'éléments : " << endl;
	cin >> nb;
	for (int i = 0; i < nb; i++)
	{
		cout << "Entrez un réel (tableau 1) : " << endl;
		cin >> nb1;
		tab1[i] = nb1;
	}
	for (int j = 0; j < nb; j++)
	{
		cout << "Entrez un réel (tableau 2) : " << endl;
		cin >> nb2;
		tab2[j] = nb2;
		tab3[j] = tab1[j] + tab2[j];
	}
	for (int k = 0; k < nb; k++)
	{
		cout << "tab3[" << k << "] = " << tab3[k] << endl;
	}
	return 0;	
}
