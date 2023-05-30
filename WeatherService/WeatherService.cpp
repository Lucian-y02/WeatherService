#include "Service.h"
#include "JsonService.h"
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
}
