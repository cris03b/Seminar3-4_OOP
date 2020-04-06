#pragma once
#include "Auto.h"
#include <string>
using namespace std;

class PKW: public Auto
{
private:
	string Echipare;

public:
	PKW(string echipare, int id, string marke, string modell);
	~PKW();
};

