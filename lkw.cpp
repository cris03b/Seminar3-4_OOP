#include "lkw.h"

LKW::LKW(int id, string marke, string modell, double gesamtGewicht, string bezeichnung) :Auto(id, marke, modell) {
	/*
	LKW l(0, "marca", "model", 23, "Descriere")
	*/
	Gesamtgewicht = gesamtGewicht;
	Bezeichnung = bezeichnung;

}

void LKW::load(double x) {
	Gesamtgewicht += x;
}

void LKW::unload(double x) {
	Gesamtgewicht -= x;
}

LKW::~LKW() {}