/*  Remplir une table d’entiers à dimension variable (max 20) puis introduire un entier recherché.
a) Afficher où se trouve l’entier la 1ère fois dans la table / s’il n’est pas dedans.
b) Afficher où se trouve l’entier la dernière fois dans la table / s’il n’est pas dedans
 * */
#include <iostream>
using namespace std;
int main() {

	int tab[20],indiceMin=0,indiceMax=0, nbElem, nb1, cpt=0;
	cout << "Combien d'éléments ? " << endl;
	cin >> nbElem;
	cout << "Entrez " << nbElem << " entiers : " << endl;
	for (int i = 0; i < nbElem; i++)
	{
		cin >> tab[i];
	}
	cout << "Entrez un entier à rechercher : " << endl;
	cin >> nb1;
	while (tab[cpt] != nb1 && cpt < nbElem)
	{
		cpt++;
	}
	if (tab[cpt] == nb1)
	{
		indiceMin = cpt;
	}
	else
	{
		cout << nb1 << " n'est pas dans le tableau ." << endl;
	}
	cpt=nbElem;	
	while (tab[cpt] != nb1 && cpt <= nbElem)
	{
		cpt--;
	}
	if (tab[cpt] == nb1)
	{
		indiceMax = cpt;
	}
	else
	{
		cout << nb1 << " n'est pas dans le tableau." << endl;
	}
	cout << "Indice de la 1ère occurrence de " << nb1 << " : " << indiceMin << endl; // a)
	cout << "Indice de la dernière occurrence de " << nb1 << " : " <<  indiceMax << endl; // b)
	return 0;
}
