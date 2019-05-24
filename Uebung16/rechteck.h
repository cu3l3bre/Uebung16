#pragma once


#include "formen.h"


class Rechteck : public Formen
{
public:

	double seiteA;
	double seiteB;

	Rechteck();
	~Rechteck();

	double berechneFlaeche();
	double berechneUmfang();
	void zeichneForm();
};