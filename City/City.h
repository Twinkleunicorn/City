#pragma once
#include <iostream>
using namespace std;
class City
{
	char*name;
	int population;
	int cityFoundationYear;
public:
	City(const char*name, int population, int cityFoundationYear);


	void operator()() {

	}
	City(const City&obj);
	City(City&&obj) {
		cout << "move";
		/*-this->name = obj.name;
		this->cityFoundationYear = obj.cityFoundationYear;
		this->population = obj.population;
		obj.name = nullptr;*/
		swap(this->name, obj.name);
		swap(this->cityFoundationYear, obj.cityFoundationYear);
		swap(this->population, obj.population);
	}
	City& operator=(City&&obj) {
		swap(this->name, obj.name);
		swap(this->cityFoundationYear, obj.cityFoundationYear);
		swap(this->population, obj.population);
	}
	City& operator=(const City&obj);
	~City();

};


