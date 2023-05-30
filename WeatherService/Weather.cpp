#include "Weather.h"

#include <iostream>
#include <string>

using namespace std;

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather,
	double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}
