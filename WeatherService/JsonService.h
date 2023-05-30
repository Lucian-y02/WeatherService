#pragma once

#include "Service.h"
#include "Weather.h"

class JsonService : public Service
{
public:

	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {}
};

