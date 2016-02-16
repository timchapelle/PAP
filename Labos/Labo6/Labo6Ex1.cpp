#include <iostream>
using namespace std;
/*  Remplir les éléments d’un vecteur de 10 entiers avec les entiers 1, 2, … , 10 p */
int main() {
	int tab[10];
	
	for (int i = 1; i <= 10; i++)
	{
		tab[i] = i;
	
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}
	return 0;
}
