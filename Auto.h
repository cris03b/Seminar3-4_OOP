#pragma once
#include <string>
using namespace std;
class Auto
{
protected:
	int id;
	string marke;
	string modell;

public:
	Auto(int id, string marke, string modell);
	Auto() {
	}
		// getters
	int getId();
	string getMarke();
	string getModell();

	// setters
	void setId(int newId);
	void setMarke(string newMarke);
	void setModell(string newModell);

};

