/*EXO1 Faire la table de multiplication d’un entier lu au clavier entre 1 et 20 obligatoirement.
Faire les calculs de 1 à 10 fois. Puis, demandez à l’utilisateur s’il veut recommencer une autre table.
Ex : Table de quel entier entre 1 et 20 : 34
Cette valeur n’est pas entre 1 et 20, recommencez : -2
Cette valeur n’est pas entre 1 et 20, recommencez : 3
Table de 3
1 X 3 = 3
. . .
10 X 3 = 30
Voulez-vous faire une autre table ( - O(ui) - N(on) - ) t
Répondez O(ui) ou N(on) J
Répondez O(ui) ou N(on) O */

#include <iostream>
using namespace std;

int main() {

	char choix='o';
	int nb;

	while (choix == 'o' || choix == 'O')
	{ 
		do {
		cout << "Entrez un entier entre 1 et 20 : " << endl;
		cin >> nb;
		} while (nb <= 1 || nb >= 20) ;
	  
		for (int i = 1; i <= 10; i++)
		{
		  cout << i << "*" << nb << " = " << i * nb << endl;
		}
	
		do
		{
		cout << "Voulez-vous afficher une autre table (O)ui/(N)on ?" << endl;
		cin >> choix;
		} while (choix != 'o' && choix != 'O' && choix != 'n' && choix != 'N') ;
	}
	return 0;
}
