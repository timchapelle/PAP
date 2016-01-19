/* Principes algorithmiques et programmation
 * ISFCE - Informatique de Gestion
 * Niveau 1 - Soir
 * 
 * Labo 3 - Exercices 1 à 4
 * Timothée Chapelle */


//Exo 1 :

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

// Exo 2 :

#include <iostream>

using namespace std;

int main() {
	
	int nb, somme=0;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Entrez un entier : " << endl; cin >> nb;
		somme=somme+nb;
	}
	
cout << "Le total vaut : " << somme ;

return 0;
}

// Exo 3 : 

#include <iostream>

using namespace std;

int main() {
	
	int choix;
	
	cout << "Quelle table voulez-vous afficher ?" << endl; cin >> choix;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " x " << choix << " = " << i * choix << endl;
	}
	
return 0;

}

// Exo 4 : 

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

