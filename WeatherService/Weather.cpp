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

ostream& operator<<(ostream& out, Weather data)
{
	out << "City: " << data.city << "\nLon: " << data.lon << "\nLat: " << data.lat
		<< "\nTemperature: " << data.temperature << "\nWeather: " << data.weather
		<< "\nWindSpeed: " << data.windSpeed << "Clouds: " << data.clouds;
	return out;
}
