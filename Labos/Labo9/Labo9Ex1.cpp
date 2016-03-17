/* EXO1
Soit une table de maximum 20 entiers et afficher sa moyenne.
a) F/P pour remplir la table.
b) F/P pour calculer sa moyenne (et la renvoyer). */
#include <iostream>
using namespace std;
// Prototypes
void remplir(int t[],int a);
double moyenne(const int t[], int a);
// Bloc
int main() 
{	
	int table[20], dim(0);
	while (dim <= 0 || dim > 20)
	{	
		cout << "Nombre d'éléments (max. 20) : " << endl;
		cin >> dim;
		if (dim <= 0)
		{
			cout << "Ca va être juste ! Min. 1 élément svp !" << endl;
		}
		else if (dim > 20)
		{
			cout << "Maximum 20, vous avez entré " << dim << " ! " << endl;
		}
	}
	remplir(table,dim);
	cout << "Moyenne : " << moyenne(table,dim) << endl;
}
// Procédure
void remplir(int t[],int a) 
{
	cout << "C'est parti ! " << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> t[i];
	}	
}
// Fonction
double moyenne (const int t[], int a)
{
	double somme(0.0);
	for (int i = 0; i < a ; i++)
	{
		somme += t[i];
	}
	return somme/a;
}
