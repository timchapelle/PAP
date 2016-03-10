/* EXO4 Reprendre les F/P précédentes et les utiliser dans un programme principal.
a) F/P pour le calcul du PGCD de 2 entiers
b) F/P pour simplifier 2 entiers par leur PGCD
c) Programme principal qui permet d’entrer 2 fractions, les affiche simplifiées et affiche leur somme
simplifiée.
Rappel : a/b + c/d = (a.d + b.c ) / (b.d)
Exemple d’exécution : 4/6 + 10/15 = 2/3 + 2/3 = 12/9 = 4/3 */
#include <iostream>
using namespace std;
// Prototypes
int pgcd(int a,int b);
void simplif(int &x,int &y);
// Main
int main() 
{
	int nb1,nb2,nb3,nb4,tmp1,tmp2;
	while (nb1 <= 0 || nb2 <= 0 || nb3 <= 0 || nb4 <= 0) 
	{
		cout << "Entrez 2 fractions (4 entiers)" << endl;
		cin >> nb1 >> nb2 >> nb3 >> nb4;
	}
	cout << nb1 << " / " << nb2 << " + " << nb3 << " / " << nb4 << " = ";
	simplif(nb1,nb2);
	cout << nb1 << " / " << nb2 << " + " ;
	simplif(nb3,nb4);
	cout << nb3 << " / " << nb4 <<" = ";
	tmp1=(nb1*nb4+nb2*nb3);
	tmp2=nb2*nb4;
	simplif(tmp1,tmp2);
	cout << tmp1 << " / " << tmp2 << endl;
}
// Fonction - Procédure
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
void simplif(int &x,int &y) 
{
	int tmp;
	tmp=x;
	x /= pgcd(x,y);
	y /= pgcd(tmp,y);
	
}
