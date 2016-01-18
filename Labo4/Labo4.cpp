/* Principes algorithmiques et programmation
 * ISFCE - Informatique de Gestion
 * Niveau 1 - Soir
 * Mme de Henau
 * 
 * Labo 4 - 12/01/2016
 * Exercices 1 à 4 
 * Timothée Chapelle */
 
 // Exo1 :

#include <iostream>
#include <cmath>
using namespace std;

int main() {

int a,b,c;
double delta;

cout << "Entrez 3 entiers :" << endl; cin >> a >> b >> c ;
delta=(pow(b,2))-4*a*c;

if (a != 0)
{
	if (delta > 0)
	{
		cout << "Résultat 1 = " << (-b+sqrt(delta))/(2*a) << endl;
		cout << "Résultat 2 = " << (-b-sqrt(delta))/(2*a) << endl;
	}
	
	else if ((delta = 0)) 
	{
		cout << "Résultat = " << -b/(2*a) << endl;
	}
	
	else cout << "Cette équation n'est pas du second degré" ;
}

else cout << "Cette équation n'est pas du second degré";

return 0;

}

// Exo2 :

#include <iostream>
#include <cmath>
using namespace std;

int main() {

int nb;

cout << "Entrez un entier : " << endl; cin >> nb;

while (nb < 1 || nb > 20)
{
	cout << "Entrez un entier : " << endl; cin >> nb;
}	
		if ((nb%2) == 0)
		{
			cout << nb << " est pair" << endl;
		}
		else 
		{
			cout << nb << " est impair" << endl;
		}
	
return 0;

}

// Exo3 : 

#include <iostream>
using namespace std;

int main() {

int nb;

cout << "Entrez un entier : " << endl; cin >> nb;

if (nb >= 1 && nb <= 20)
{
	if ((nb%2) == 0)
	{
		cout << nb << " est pair" << endl;
	}
	else 
	{
		cout << nb << " est impair" << endl;
	}
}
return 0;
}

// Exo4 :

#include <iostream>
using namespace std;

int main() {
	
double nb, somme, total;
int moyenne;

total = 0;

cout << "Entrez un entier : " ; cin >> nb;

while (nb != 0)
{
	total=total+1;
	somme=somme+nb;
	cout << "Entrez un entier : " ; cin >> nb;
}

moyenne=somme/total;
cout << "Moyenne = " << moyenne;

return 0;

}





