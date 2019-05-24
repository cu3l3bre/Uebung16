#pragma once


#include "formen.h"


class Quadrat : public Formen
{
public:

	double seiteA;

	Quadrat();
	~Quadrat();

	double berechneFlaeche();
	double berechneUmfang();
	void zeichneForm();
};