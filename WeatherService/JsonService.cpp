#include "JsonService.h"
#include "../include/nlohmann/json.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <locale>

using nlohmann::json;
using namespace std;

Weather JsonService::getWeather(std::string s)
{
	setlocale(LC_ALL, "ru");

	ifstream fin(s);
	if (!fin.is_open())
		throw exception("error");

	json j;
	j = json::parse(fin);

	string city = j["name"].get<string>();
	double lon = j["coord"]["lon"].get<double>();
	double lat = j["coord"]["lat"].get<double>();
	double temperature = j["main"]["temp"].get<double>();
	string weather = j["weather"].get<vector<json>>()[0]["main"].get<string>();
	double windSpeed = j["wind"]["speed"].get<double>();
	int clouds = j["clouds"]["all"].get<int>();
	
	/*
	string city = j["name"].get<string>();
	double lon = j["coord"].get<json>()["lon"].get<double>();
	double lat = j["coord"].get<json>()["lat"].get<double>();
	double temperature = j["main"].get<json>()["temp"].get<double>();
	string weather = j["weather"].get<json>()["main"].get<string>();
	double windSpeed = j["wind"].get<json>()["speed"].get<double>();
	int clouds = j["clouds"].get<json>()["all"].get<int>();
	*/

	return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
