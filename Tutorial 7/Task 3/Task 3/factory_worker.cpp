#include "factory-worker.h"
#include <iostream>
#include <string>

string factoryWorker::getJobTitle(void) { return m_jobTitle; }
void factoryWorker::setJobTitle(string job) { m_jobTitle = job; }
float factoryWorker::getHourlyWage(void) { return m_hourlyWage; }
void factoryWorker::setHourlyWage(float wage) { m_hourlyWage = wage; }

float factoryWorker::getWeeklyWage(float hourlyWage) { return hourlyWage*40; }