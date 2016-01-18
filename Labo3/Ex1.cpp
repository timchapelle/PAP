#include <iostream>

using namespace std;

int main() {
	
	int nb1, nb, somme;
	
	cout << "Entrez un entier : " << endl; cin >> nb1;
	cout << "Entrez un entier : " << endl; cin >> nb;
	somme=0;

	while ( nb > nb1 )
	{	
		somme=somme + nb;
		cout << "Entrez un entier : " << endl; cin >> nb;
		
	}
	

	
	cout << "La somme des entiers supérieurs à " << nb1 << " vaut : " << somme;
	
	return 0;
}
