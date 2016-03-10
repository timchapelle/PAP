/*EXO4 Remplir une table d’entiers à dimension variable (max 20).
1°) Sauver dans une 2ème table les indices des éléments pairs de la 1ère table.
2°) Afficher tous les indices trouvés / s’il n’y en a pas.*/
#include <iostream>
using namespace std;

int main() {

	int tab[20],tabIndices[20],nbElem,cpt(0);
	cout << "Combien d'éléments ?" << endl;
	cin >> nbElem;
	cout << "Entrez " << nbElem << " éléments : " << endl;
	
	for (int i = 0; i < nbElem; i++)
	{	cin >> tab[i];
		if ((tab[i] % 2) == 0)
		{
			tabIndices[cpt] = i;
			cpt++;
		}
	}
	if (cpt == 0)
	{
		cout << "Il n'y a pas de nombres pairs" << endl;
	}
	else
	{
		for (int i = 0; i < cpt; i++)
		{
			cout << "Indice pair : " << tabIndices[i] << endl;
		}
	}
	return 0;
}

	
	
