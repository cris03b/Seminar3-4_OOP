#pragma once
#include "Auto.h"
#include <string>
using namespace std;

class LKW: public Auto
{
private:
	double Gesamtgewicht;
	string Bezeichnung;

public:
	LKW(int id, string marke, string modell, double gesamtGewicht, string bezeichnung);
		
	void load(double x);
	void unload(double x);
	~LKW();

};

