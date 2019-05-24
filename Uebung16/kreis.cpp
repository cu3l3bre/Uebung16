
#include "kreis.h"



Kreis::Kreis()
{}


Kreis::~Kreis()
{}


double Kreis::berechneFlaeche()
{
	double flaeche = radius * radius * 3.14;
	return flaeche;
}


double Kreis::berechneUmfang()
{
	double umfang = 2 * radius * 3.14;
	return umfang;
}


void Kreis::zeichneForm()
{
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "           Kreis ------->  O                            " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << "                                                        " << endl;
	cout << endl << endl;
}