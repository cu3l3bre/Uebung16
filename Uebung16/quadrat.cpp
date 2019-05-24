
#include "quadrat.h"



Quadrat::Quadrat()
{}


Quadrat::~Quadrat()
{}


double Quadrat::berechneFlaeche()
{
	double flaeche = seiteA * seiteA;
	return flaeche;
}


double Quadrat::berechneUmfang()
{
	double umfang = 4 * seiteA;
	return umfang;
}


void Quadrat::zeichneForm()
{
	cout << "----------------------------" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "|                           |" << endl;
	cout << "-----------------------------" << endl;
	cout << endl << endl;
}