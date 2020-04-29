#pragma once
#include "Auto.h"
#include <string>
#include <vector>
using namespace std;

template <class E>

class CrudRepository {
public:
	virtual E findOne(int id) = 0;
	virtual vector <E> findAll() = 0;
	virtual E save(E entity) = 0;
	virtual E del(int id) = 0;
	virtual E update(E entity) = 0;
	virtual ~CrudRepository() {};

};

class AutoInMemoryRepository : public CrudRepository<Auto>
{
private:
	vector<Auto> cars;
public:
	Auto findOne(int id);
	vector<Auto> findAll();
	Auto save(Auto entity);
	Auto del(int id);
	Auto update(Auto entity);
};

