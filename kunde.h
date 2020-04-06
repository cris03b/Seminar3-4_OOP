#pragma once
#include <string>
using namespace std;
class Kunde
{
private:
	int id;
	string name;

public:
	Kunde(int id, string name);

	// getters
	int getId();
	string getName();

	// setters
	void setId(int newId);
	void setName(string newName);
};

