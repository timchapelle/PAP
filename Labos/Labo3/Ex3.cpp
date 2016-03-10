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
