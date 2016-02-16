#include <iostream>
using namespace std;
/* EXO2 Calculer le produit scalaire de 2 vecteurs de 5 entiers.
Ex : vecteur1 = 2 3 -1 8 3
vecteur2 = 9 7 4 5 0
Produit scalaire = 75 (obtenu en faisant 2 * 9 + 3 * 7 + (-1) * 4 + 8 * 5 + 3 * 0) */

int main() {
	
	int tab1[5], tab2[5], prodScal=0;
	
	cout << "Entrez les 5 entiers du 1er tableau : " << endl;
	for (int i = 0; i <= 4; i++)
	{
		cin >> tab1[i];
	}
	cout << "Entrez les 5 entiers du 2ème tableau : " << endl;
	for (int i = 0; i <= 4; i++)
	{
		cin >> tab2[i];
	}
	for (int i = 0; i <= 4; i++)
	{
		prodScal = prodScal + tab1[i] * tab2[i];
	}
	cout << "Produit scalaire : " << prodScal << endl;
	return 0;
}
