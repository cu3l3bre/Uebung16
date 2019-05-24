
#include <iostream>
#include <vector>

#include "formen.h"
#include "rechteck.h"
#include "kreis.h"
#include "dreieck.h"
#include "quadrat.h"


using namespace std;


int main()
{
	cout << "Programm zu Uebung16" << endl << endl;


	Rechteck rechteck1;
	rechteck1.name = "Rechteck";
	rechteck1.seiteA = 2;
	rechteck1.seiteB = 3;


	Kreis kreis1;
	kreis1.name = "Kreis";
	kreis1.radius = 1;


	Dreieck dreieck1;
	dreieck1.name = "Dreieck";
	dreieck1.seiteA = 1;


	Quadrat quadrat1;
	quadrat1.name = "Quadrat";
	quadrat1.seiteA = 2;


	vector<Formen*> formen;
	
	formen.push_back(&rechteck1);
	formen.push_back(&kreis1);
	formen.push_back(&dreieck1);
	formen.push_back(&quadrat1);



	// Berechnen des Flaecheninhaltes
	for (int i = 0; i < formen.size(); i++)
	{
		cout << "Flaeche " << formen[i]->name << ": " << formen[i]->berechneFlaeche() << endl;
	}

	cout << endl;

	// Berechnen des Umfangs
	for (int i = 0; i < formen.size(); i++)
	{
		cout << "Umfang " << formen[i]->name << ": " << formen[i]->berechneUmfang() << endl;
	}

	cout << endl;

	// Zeichnen der Formen
	for (int i = 0; i < formen.size(); i++)
	{
		formen[i]->zeichneForm();
	}
	

	system("pause");
	return 0;
}
