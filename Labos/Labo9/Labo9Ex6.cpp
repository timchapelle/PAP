/* EXO6
Soit 2 tables d’entiers de même dimension variable. Calculer les pgcd des éléments correspondants des
2 tables et les stocker dans une 3ème table de même dimension.
a) F/P pour remplir les tables.
b) Une des F/P pour le calcul du PGCD de 2 entiers du labo précédent.
c) F/P qui reçoit les 2 premières tables et stocke les pgcd dans la 3ème.
d) F/P pour afficher une table (appelée 3 fois pour afficher les tables à la fin). */
#include <iostream>
using namespace std;

void remplir(int t[],int t1[], int &a);
int pgcd(int a,int b);
void stock(int t[],int t1[], int t2[],int a);
void afficher(int t[], int a);

int main() {
	int tab1[20], tab2[20], tab3[20], dim(0);
	remplir(tab1,tab2,dim);
	stock(tab1,tab2,tab3,dim);
	cout << "Table 1 : " << endl;
	afficher(tab1,dim);	
	cout << "Table 2 : " << endl;
	afficher(tab2,dim);	
	cout << "Table des PGCD : " << endl;
	afficher(tab3,dim);		
}
void remplir(int t[],int t1[], int &a)
{
	int dim(0);
	while (dim <=0 || dim > 20)
	{
		cout << "Dimension ?" << endl;
		cin >> dim;
	}
	cout << "Table 1 : " << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> t[i];
	}
	cout << "Table 2 : " << endl;
	for (int i = 0; i < dim; i++)
	{
		cin >> t1[i];
	}
	a=dim;
}
int pgcd(int a,int b) 
{
	int resultat;
	bool ok=false;
	while ( ok != true ) 
	{
		if (a > b) 
		{
			a = a-b; 
		} 
		else if (a < b) {
			b = b-a; 
		} 
		else {
			resultat = a;
			ok = true;
		}
	}
	return resultat;
}
void stock(int t[],int t1[],int t2[],int a)
{
	for (int i = 0; i < a; i++)
	{
		t2[i]=pgcd(t[i],t1[i]);
	}
}
void afficher(int t[],int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "Tab["<< i <<"] = " << t[i] << endl;
	}
}
