/* Labo 5 - Exo 8 : 
 * Calculer le minimum de 10 entiers pairs lus au clavier */

#include <iostream>
using namespace std;

int main() {
	
	int nb,nbMin,cpt=0;
		
	while (cpt < 10) {
		
		cout << "Entrez un entier pair : " << endl ; cin >> nb;
		
		if ( nb%2 == 0 )
		{
			if ( cpt == 0 )
			{
				nbMin=nb;
			}
						
			else if ( nb < nbMin )
			{
				nbMin=nb;
			}
			cpt++;
		}
		else
		{
			cout << "L'entier doit être pair ! Recommence ! " << endl;
		}
				
} // fin de while cpt <= 10
	
	cout << "Minimum : " << nbMin;
	
} // fin du main()
