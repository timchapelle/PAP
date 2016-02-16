#include <iostream>
using namespace std;
/* EXO3 Remplir une table de 12 entiers puis
a) Afficher les éléments pairs du tableau
b) Afficher les indices des éléments pairs du tableau */

int main() {
	
	int tab[12];
	cout << "Entrez 12 entiers : " << endl;
	for (int i = 0; i < 12; ++i) 
	{
		cin >> tab[i];
	}
	for (int i = 0; i < 12; ++i) 
	{
		if ((tab[i]%2)==0)
		{
			cout << "nombre pair : "<< tab[i] << " - Indice : " << i << endl;
		}
	}
	return 0;
}
