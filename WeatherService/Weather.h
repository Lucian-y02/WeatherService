#pragma once

#include "../json-develop/include/nlohmann/json.hpp"

#include <string>
#include <iostream>

class Weather
{
private:

	std::string city;
	double lon;
	double lat;
	double temperature;
	std::string weather;
	double windSpeed;
	int clouds;

public:
	
	Weather(std::string city, double lon, double lat, double temperature, std::string weather,
		double windSpeed, int clouds);

	friend std::ostream& operator<<(std::ostream& out, Weather weather);
};

