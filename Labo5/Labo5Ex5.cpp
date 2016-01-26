/* Labo 5 - Exo 5 : Entrer 2 entiers et calculer 
la somme de tous les entiers pairs entre ces 2 entiers 
(ceux-ci éventuellement compris).
Ex : Pour 10 et 14, il affichera 36
	 Pour 10 et 5, il affichera 24 */

#include <iostream>
using namespace std;

int main() {

	int nb1, nb2, somme=0;

	cout << "Entrez 2 entiers : " << endl;
	cin >> nb1 >> nb2;

	if ( nb1 < nb2 )
	{
		for (int i = nb1; i <= nb2; i++)
		{
			if ((i%2)==0)
			{ 
				somme=somme+i;
			}
			else 
			{
				cout << "impair";
			}
		} // fin de for
	} // fin de if nb1 < nb2

	else if ( nb1 > nb2 ) 
	{
		for (int i = nb2; i <= nb1; i++)
		{
			if ((i%2)==0) 
			{
				somme=somme+i;
			}
		} // fin de for
	} // fin de if nb1 > nb2

	cout << "Somme : " << somme ;
	return 0;
}
