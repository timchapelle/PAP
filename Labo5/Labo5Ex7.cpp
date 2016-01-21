/* EXO7 Calculer le PGCD de 2 entiers en utilisant les formules ci-dessous.
(rappel : Le calcul du PGCD n’est possible que pour des entiers > 1.)
- pgcd(a , b) = pgcd(a-b , b) si a > b
- pgcd(a , b) = pgcd(a , b-a) si a < b
- pgcd(a , b) = a = b         si a = b         */

#include <iostream>
using namespace std;

int pgcd (int a, int b) {       // Fonction pgcd
	int tmp;
	if ( b > a )
		{tmp=a;a=b;b=tmp;}
	int reste;
	while ( reste != 0 )
	{
		reste=a % b;
		a=b;
		b=reste;
	}
return b;
}

int main() {

int x, y, resultat;

while (x <= 1 || y <= 1 )
{ cout << "Entrez 2 entiers supérieurs à 1" << endl;
	cin >> x >> y ; }
	
if (x == y)
{
	resultat=x;
}
else if (x > y)
{
	resultat=pgcd((x-y),y);
}
else if (x < y)
{
	resultat=pgcd(x,(y-x));
}

cout << "Résultat : " << resultat ;

}
