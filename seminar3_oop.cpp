#include "rental.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
	Rental r;
	Auto a1(1, "a", "b"), a2(2, "a", "b"), a3(3, "a", "b");
	Kunde k1(1, "nume"), k2(2, "name"), k3(3, "Name");
	r.addAuto(a1);
	r.addAuto(a2);
	r.addAuto(a3);
	assert(r.size_auto() == 3);
	r.deleteAuto(a2);
	assert(r.size_auto() == 2);

	r.addClient(k1);
	r.addClient(k2);
	r.addClient(k3);
	assert(r.size_client() == 3);
	assert(k1.getName() == "nume");
	r.updateClient(k1, "Ana");
	assert(k1.getName() == "Ana");
	r.deleteClient(k2);
	assert(r.size_client() == 2);
	cout << "All good!";
}