#pragma once
#include "kunde.h"
#include "Auto.h"
#include <vector>
using namespace std;

class Rental
{
private:
	vector<Kunde> clients;
	vector<Auto> autos;

public:
	void addClient(Kunde c);
	void deleteClient(Kunde c);
	void updateClient(Kunde& c, string newName);
	void addAuto(Auto a);
	void deleteAuto(Auto a);

	int size_auto() { return autos.size(); }
	int size_client() { return clients.size(); }


};

