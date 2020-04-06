#include "kunde.h"
#include <string>
using namespace std;

Kunde::Kunde(int id, string name) {
	this->id = id;
	this->name = name;
}

// getters
int Kunde::getId() { return this->id; }
string Kunde::getName() { return this->name; }

// setters
void Kunde::setId(int newId) { this->id = newId; }
void Kunde::setName(string newName) { this->name = newName; }
