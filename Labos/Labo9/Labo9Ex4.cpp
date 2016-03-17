/* EXO4 : 
Soit 2 tables de réels de dimensions variables différents. Soustraire les éléments de la plus petite à celle
de la plus grande.
a) F/P pour remplir les tables.
b) F/P pour faire le calcul. */
#include <iostream>
using namespace std;
// Prototypes
void remplir(double a[], int &b);
double calcul(double a[], int b, double c[], int d);
// Bloc
int main() 
{
	double tab1[25],tab2[25];
	int dim1(0),dim2(0);
	remplir(tab1,dim1);
	remplir(tab2,dim2);
	cout << "Résultat de la soustraction : " << calcul(tab1,dim1,tab2,dim2) << endl;
}
// Procédure
void remplir(double a[], int &b)
{
	int dim(0);
	while (dim <= 0 || dim > 25)
	{
		cout << "Dimension ? (max 25)" << endl;
		cin >> dim;
	}
	cout << "Go !" << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> a[i];
	}
	b=dim;
}
// Fonction
double calcul(double a[], int b, double c[], int d)
{
	double somme1(0.0),somme2(0.0),total(0.0);
	for (int i = 0; i < b; i++)
	{
		somme1 += a[i];
	}
	for (int i = 0; i < d; i++)
	{
		somme2 += c[i];
	}
	if (b > d)
	{
		total = somme1-somme2;
	}
	else total = somme2-somme1;
	return total;
}
