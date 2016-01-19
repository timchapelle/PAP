#include <iostream>
using namespace std;

int main() {

char choix='o';
int nb;

while (choix == 'o' || choix == 'O')
	{ 
	do {
	cout << "Entrez un entier entre 1 et 20 : " << endl;
	cin >> nb;
	   } while (nb <= 1 || nb >= 20) ;
	  
	  for (int i = 0; i <= 10; i++)
	  {
		  cout << i << "*" << nb << " = " << i * nb << endl;
	  }
	
	do
	{
	cout << "Voulez-vous afficher une autre table (O)ui/(N)on ?" << endl;
	cin >> choix;
	} while (choix != 'o' && choix != 'O' && choix != 'n' && choix != 'N') ;
}
return 0;
}
