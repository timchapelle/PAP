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
