#pragma once


#include "formen.h"


class Kreis : public Formen
{
public:

	double radius;

	Kreis();
	~Kreis();

	double berechneFlaeche();
	double berechneUmfang();
	void zeichneForm();
};