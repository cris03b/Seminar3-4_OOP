#pragma once
#include "AutoInMemoryRepository.h"

class AutoController
{
private:
	AutoInMemoryRepository repo;

public:
	Auto findAutoById(int id) { return repo.findOne(id); }
	vector<Auto> findAll() { return repo.findAll(); }
	Auto saveAuto(Auto a) { return repo.save(a); }
	Auto updateAuto(Auto a) { return repo.update(a); }
	Auto deleteAuto(int id) { return repo.del(id); }
};

