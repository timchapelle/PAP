#include <iostream>

using namespace std;

int main() {
	
	int nb,somme=0;
	
	cout << "Entrez un entier : " << endl; cin >> nb;
	
	while (nb >= -10 && nb <= 10)
	{
		somme=somme+nb;
		cout << "Entrez un entier : " << endl; cin >> nb;
	}
	
	cout << "La somme des entiers entre -10 et 10 vaut : " << somme;
	
	return 0;
}

