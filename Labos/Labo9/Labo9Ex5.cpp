/* EXO5
On définit la relation d’ordre sur 2 tables t1, t2 de même dimension de la façon suivante :
on dit que : t1 < t2 ssi ∀ i : t1(i) < t2(i)
Soit 3 tables U, V, W de même dimension variable (maximum 20), signalez si U < V < W ou non.
a) F/P pour remplir les tables
b) F/P pour vérifier cette relation pour 2 tables de même dimension. */
#include <iostream>
using namespace std;
// Prototypes
void remplir(int u[], int v[], int w[], int &b);
void verifier(int u[],int v[],int w[], int dim);
// Bloc
int main() {
	int tab1[20],tab2[20],tab3[20],dim(0);
	remplir(tab1,tab2,tab3,dim);
	cout << "Résultat : "  << endl;
	verifier(tab1,tab2,tab3,dim);
	return 0;
}
// Fonction pour remplir les tables
void remplir(int u[], int v[], int w[], int &b)
{
	int dim(0);
	while (dim <= 0 || dim > 20)
	{
		cout << "Dimension ? (max 20)" << endl;
		cin >> dim;
	}
	cout << "Table U : " << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> u[i];
	}
	cout << "Table V : " << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> v[i];
	}
	cout << "Table W : " << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> w[i];
	}
	b=dim;
}
void verifier(int u[],int v[],int w[], int dim)
{
	bool ok=false;
	for (int i = 0; i < dim; i++)
	{
		if (u[i]<v[i] && v[i]<w[i])
		{
			ok=true;
		}
		else 
		{
			break;
		}
	}
	if (ok)
	{
		cout << "U < V < W se vérifie" << endl;
	}
	else
	{
		cout << "U < V < W ne se vérifie pas" << endl;
	}	
}
