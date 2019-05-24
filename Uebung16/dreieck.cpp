
#include "dreieck.h"



Dreieck::Dreieck()
{}


Dreieck::~Dreieck()
{}


double Dreieck::berechneFlaeche()
{
	double flaeche = ((seiteA * seiteA) / 4) * sqrt(3);
	return flaeche;
}


double Dreieck::berechneUmfang()
{
	double umfang = 3 * seiteA;
	return umfang;
}


void Dreieck::zeichneForm()
{
	cout << "          ^" << endl;
	cout << "         / \\" << endl;
	cout << "        /   \\" << endl;
	cout << "       /     \\" << endl;
	cout << "      /       \\" << endl;
	cout << "     /         \\" << endl;
	cout << "    /           \\" << endl;
	cout << "   /             \\" << endl;
	cout << "  /               \\" << endl;
	cout << " /                 \\" << endl;
	cout << "/                   \\" << endl;
	cout << "----------------------" << endl;
	cout << endl << endl;
}