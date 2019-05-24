#pragma once


#include "formen.h"

// Gleichseitiges Dreieck
class Dreieck : public Formen
{
public:

	double seiteA;

	Dreieck();
	~Dreieck();

	double berechneFlaeche();
	double berechneUmfang();
	void zeichneForm();
};