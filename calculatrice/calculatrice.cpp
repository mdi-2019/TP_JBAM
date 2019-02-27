﻿// calculatrice.cpp : définit le point d'entrée de l'application.
//

#include "calculatrice.h"
#include "../dependencies/termcolor/include/termcolor/termcolor.hpp"
#include "CalculatriceNormale.h"
#include "CalculatriceScientifique.h"



using namespace std;


int main()
{
	cout << termcolor::red << "Choisissez le mode :" << endl
	<< "1 - Mode normal" << endl
	<< "2 - Mode scientifique" << endl;

	int saisie;
	cin >> saisie;
	while (saisie!=1 && saisie!= 2) {
		cout << termcolor::red << "Erreur de saisie. Veuillez resaisir le mode:" << endl
		<< "1 - Mode normal" << endl
		<< "2 - Mode scientifique" << endl;
		cin >> saisie;
	}

	switch (saisie) {
		case 1:
			CalculatriceNormale calculatrice;
			break;
		case 2:
			CalculatriceScientifique calculatrice;
			break;
	}


	return 0;
}
