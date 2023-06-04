#include <iostream>
#include "Weather.h"
#include "XmlService.h"
#include <string>

using namespace std;

void main() {

	setlocale(LC_ALL, "ru");

	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

	cout << w;

}