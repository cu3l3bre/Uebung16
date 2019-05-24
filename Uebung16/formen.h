#pragma once

#include <iostream>
#include <string>
using namespace std;


// abstrakte Klasse Formen die nur zur Vererbung genutzt wird
class Formen
{
public:

	string name;

	Formen();
	~Formen();

	virtual double berechneFlaeche() = 0;
	virtual double berechneUmfang() = 0;
	virtual void zeichneForm() = 0;
};
