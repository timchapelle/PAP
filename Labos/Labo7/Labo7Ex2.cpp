/*EXO2 Remplir une table d’entiers à dimension variable (max 20) puis introduire un entier recherché.
Afficher le nombre de fois que l’entier recherché est dans la table (c’est-à-dire l’occurrence de
l’entier). */

#include <iostream>
using namespace std;

int main() {
	
	int tab[20], nb, nb1, occurrence=0;

	cout << "Combien d'éléments ? " << endl;
	cin >> nb;
	
	cout << "Entrez " << nb << " entiers : " << endl;
	for (int i = 0; i < nb; i++)
	{
		cin >> tab[i];
	}
	
	cout << "Entrez un entier à rechercher : " << endl;
	cin >> nb1;
	for (int i = 0; i < nb; i++)
	{
		if (tab[i] == nb1)
		{
			occurrence++;
		}
	}
	cout << "Occurrence : " << occurrence << endl;
	return 0;
}
