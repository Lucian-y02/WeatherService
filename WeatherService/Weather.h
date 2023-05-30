#pragma once

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

	friend std::ostream& operator<<(std::ostream& out, Weather data)
	{
		out << "City: " << data.city << "\nLon: " << data.lon << "\nLat: " << data.lat
			<< "\nTemperature: " << data.temperature << "\nWeather: " << data.weather
			<< "\nWindSpeed: " << data.windSpeed << "Clouds: " << data.clouds;
		return out;
	}
};

