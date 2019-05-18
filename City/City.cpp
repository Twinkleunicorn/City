#include "City.h"





City::City(const char * name,
	int population, int cityFoundationYear)
	:population(population),
	cityFoundationYear(cityFoundationYear)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

City::City(const City & obj)
{
	cout << "Copy\n";
	this->name = new char[strlen(obj.name) + 1];

	this->cityFoundationYear = obj.cityFoundationYear;
	this->population = obj.population;
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
}

City & City::operator=(const City & obj)
{
	if (this == &obj)
		return *this;
	if (strlen(this->name) != strlen(obj.name))
	{
		delete[]this->name;
		this->name = new char[strlen(obj.name) + 1];
	}
	this->cityFoundationYear = obj.cityFoundationYear;
	this->population = obj.population;
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
}

City::~City()
{
	delete[]name;
}

