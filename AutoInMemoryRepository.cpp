#include "AutoInMemoryRepository.h"
#include <iostream>

Auto AutoInMemoryRepository::findOne(int id) {
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getId() == id) {
			return cars[i];
		}
	}
	return Auto(NULL, "", "");
}

vector<Auto> AutoInMemoryRepository::findAll() {
	return cars;
}

Auto AutoInMemoryRepository::save(Auto a) {
	bool found = false;
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getId() == a.getId()) {
			found = true;
		}
	}
	if (found || a.getId() == 0 || a.getMarke() == "" || a.getModell() == "") {
		return Auto(NULL, "", "");
	}
	cars.push_back(a);
	return a;
}

Auto AutoInMemoryRepository::del(int id) {
	Auto del_elm;
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getId() == id) {
			del_elm = cars[i];
			cars.erase(cars.begin() + i);
			return del_elm;
		}
	}

	return Auto(NULL, "", "");
}

Auto AutoInMemoryRepository::update(Auto a) {
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getId() == a.getId()) {
			cars[i].setMarke(a.getMarke());
			cars[i].setModell(a.getModell());
			return Auto(NULL, "", "");
		}
	}
	return a;
}