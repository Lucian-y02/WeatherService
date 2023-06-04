#include "Service.h"
#include "JsonService.h"
#include "XmlService.h"
#include "Weather.h"

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    JsonService service;
    cout << service.getWeather("../Data/weather.json") << endl;

	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	cout << w;
}
