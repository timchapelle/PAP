/* EXO2
Soit une table de 10 entiers et une autre table de maximum 5 entiers.
a) F/P pour remplir les tables
b) F/P pour multiplier chaque élément de la 1ère table par chaque élément de la 2ème.
c) F/P pour afficher une table (appelée 3 fois pour afficher la 1ère table, la 2ème table et la 1ère à
nouveau après modification). */
#include <iostream>
using namespace std;
// Prototypes
void remplir(int t[], int a);
void multip(int a[],int b[], int c);
void afficher(int a[], int c);
// Bloc
int main() {
	int tab1[10],tab2[5], dim(0);
	while (dim > 5 || dim <= 0)
	{	
		cout << "Nombre d'éléments de la 2ème table ? (max. 5) : " << endl;
		cin >> dim;
		if (dim <= 0)
		{
			cout << "Ca va être juste ! Min. 1 élément svp !" << endl;
		}
		else if (dim > 5)
		{
			cout << "Maximum 5, vous avez entré " << dim << " ! " << endl;
		}
	}
	remplir(tab1,10);
	remplir(tab2,dim);
	cout << "Avant multiplication : table 1" << endl;
	afficher(tab1, 10); // 1er appel
	cout << "Avant multiplication : table 2" << endl;
	afficher(tab2, dim); // 2ème appel
	// Multiplication
	multip(tab1,tab2,dim);
	cout << "Après multiplication : table 1" << endl;
	afficher(tab1, 10); // 3ème appel
}
// Procédure pour remplir un tableau
void remplir(int t[],int a) 
{
	cout << "Veuillez introduire " << a << " éléments : "<< endl;
	for (int i = 0; i < a; i++)
	{
		cin >> t[i];
	}	
}
// Procédure pour multiplier les tableaux entre eux
void multip(int a[], int b[], int c) 
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < c; j++) 
		{
			a[i] *= b[j];
		}
	}
}
// Procédure pour afficher un tableau
void afficher(int a[], int c)
{
	cout << "Table de " << c << " éléments "<< endl << "--------------------" << endl;
	for (int i = 0; i < c; i++)
	{
		cout << a[i] << endl;
	}
	cout << ".........." << endl;
}
