
#include "rechteck.h"



Rechteck::Rechteck()
{}


Rechteck::~Rechteck()
{}


double Rechteck::berechneFlaeche()
{
	double flaeche = seiteA * seiteB;
	return flaeche;
}


double Rechteck::berechneUmfang()
{
	double umfang = (2*seiteA) + (2*seiteB);
	return umfang;
}


void Rechteck::zeichneForm()
{
	cout << "---------------------------------------------------------" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|                                                       |" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << endl << endl;
}