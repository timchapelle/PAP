#include <iostream>
using namespace std;
/*  Remplir les éléments d’un vecteur de 10 entiers avec les entiers 1, 2, … , 10 p */
int main() {
	int tab[10];
	for (int i = 0; i <= 9; i++)
	{
		tab[i] = i + 1;
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}
	return 0;
}

/* LDA : 
 * ---
 * bloc
 * 	VAR tab : table de 10 entier
 * 	      i : entier
 *  pour i de 0 à 9 faire 
 * 		tab[i] <--- i 
 *  fpour
 * 	ECRIRE "on a "
 *  pour i de 0 à 9 faire
		ECRIRE "tab[", i, "] = ", tab[i]
	fpour
   fbloc
*/
