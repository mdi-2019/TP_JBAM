// calculatrice.cpp : définit le point d'entrée de l'application.
//

#include "calculatrice.h"
#include "../dependencies/termcolor/include/termcolor/termcolor.hpp"
#include "CalculatriceNormale.h"
#include "CalculatriceScientifique.h"



using namespace std;

bool UI(CalculatriceNormale* calculatrice) {

	char in;
	bool exit = false;
	bool change = false;

	do {
		cin >> in;



		switch (in)
		{
		case 'q':
			exit = true;
			break;

		case 'c':
			change = true;
			break;
		default:
			break;
		}


	} while (!exit && !change);

	return change;

}

int main()
{


	

	CalculatriceNormale * calculatrice;

	do {
		cout << termcolor::red << "Choisissez le mode :" << endl
			<< "1 - Mode normal" << endl
			<< "2 - Mode scientifique" << endl;

		int saisie;
		cin >> saisie;
		while (saisie != 1 && saisie != 2) {
			cout << termcolor::red << "Erreur de saisie. Veuillez resaisir le mode:" << endl
				<< "1 - Mode normal" << endl
				<< "2 - Mode scientifique" << endl;
			cin >> saisie;
		}
		

		if (saisie == 1) {
			calculatrice = new CalculatriceNormale();


		}
		else {
			calculatrice = new CalculatriceScientifique();

		}

		cout << calculatrice->add(1, 2) << endl;
		cout << calculatrice->sub(1, 2) << endl;
		cout << calculatrice->mult(1, 2) << endl;
		cout << calculatrice->div(1, 2) << endl;


	} while (UI(calculatrice));

	return 0;
}




