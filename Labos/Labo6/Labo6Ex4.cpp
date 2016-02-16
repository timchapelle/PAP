/* EXO4 Remplir une table de 15 entiers puis introduire un entier recherché.
Afficher le nombre de fois que l’entier recherché est dans la table (c’est-à-dire l’occurrence de
l’entier). */
#include <iostream>
using namespace std;

int main() {

	int tab[15], nb, occurrence=0;
	cout << "Entrez 15 entiers : " << endl;
	for (int i = 0; i < 15; i++)
	{
		cin >> tab[i];
	}
	cout << "Entrez un entier à rechercher : " << endl;
	cin >> nb;
	for (int i = 0; i < 15; i++)
	{
		if (tab[i] == nb)
		{
			occurrence++;
		}
	}
	cout << "Occurrence : " << occurrence << endl;
	return 0;
}
