#include <iostream>
#include <cassert>
#include "AutoUI.h"
#include "AutoController.h"

using namespace std;

void Teste() {

	AutoController cont;
	Auto a1 = Auto(1, "Mazda", "Mazda3");
	Auto a2 = Auto(2, "Porsche", "Taycan");
	Auto a3 = Auto(3, "Renault", "Megane");
	Auto a4 = Auto(4, "Lexus", "LS");
	Auto a5 = Auto(5, "Toyota", "Camry");
	Auto a6 = Auto(6, "Ford", "Focus");
	cont.saveAuto(a1);
	cont.saveAuto(a2);
	cont.saveAuto(a3);
	cont.saveAuto(a4);
	cont.saveAuto(a5);
	assert(cont.findAll().size() == 5);
	assert(cont.findAutoById(1).getMarke() == "Mazda");
	assert(cont.updateAuto(a4).getId() == NULL);
	assert(cont.updateAuto(a6).getId() == 6);
	assert(cont.deleteAuto(6).getId() == NULL);
	assert(cont.deleteAuto(3).getId() == 3);
}

int main() {
	
	Teste();
	AutoUI menu;
	menu.AutoMenu();
}