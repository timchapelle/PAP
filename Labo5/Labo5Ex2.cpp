// Exo 2 : calculer le minimum et le maximum de 30 entiers entrés au clavier
#include <iostream>
using namespace std;

int main() {

	int nbmin, nbmax, nb;

	cout << "Entrez un entier : " << endl;
	cin >> nb;
	
	nbmin=nb;
	nbmax=nb;

	for (int i=0; i<=28;i++)
	{
		cout << "Entrez un entier : " << endl;
		cin >> nb;
			
		if (nbmin > nb)
		{
			nbmin=nb;
		}
		else if (nbmax < nb)
		{
			nbmax=nb;
		}
	}
	cout << "Nombre minimum = " << nbmin << endl;
	cout << "Nombre maximum = " << nbmax << endl;
	
	return 0;
}
