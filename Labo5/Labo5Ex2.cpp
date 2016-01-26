// Exo 2 : calculer le minimum et le maximum de 30 entiers entrés au clavier

#include <iostream>
using namespace std;

int main() {

	int cpt, nbmin, nbmax, nb;

	cpt=0;
	nbmin=0;
	nbmax=0;

	cout << "Entrez un entier : " << endl;
	cin >> nb;
	
	nbmin=nb;
	nbmax=nb;

	while (cpt < 29)
	{
		cout << "Entrez un entier : " << endl;
		cin >> nb;
		cpt++;
	
		if (nbmin > nb)
		{
			nbmin=nb;
		}
		if (nbmax < nb)
		{
			nbmax=nb;
		}
	}
	cout << "Nombre minimum = " << nbmin << endl;
	cout << "Nombre maximum = " << nbmax << endl;
	
	return 0;
}
