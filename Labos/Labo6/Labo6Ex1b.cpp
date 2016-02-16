#include <iostream>
using namespace std;
//Même chose mais remplir avec les entiers 10, 9, … , 1.
int main() {
	
	int tab[10];
	
	for (int i = 0; i <= 9 ; i++)
	{
		tab[i] = 10-i;
		
		cout << "tab [" << i << "] = " << tab[i] << endl;
	}
	return 0;
}
