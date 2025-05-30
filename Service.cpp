#include "Service.h"
#include <iostream>
using namespace std;

Service::Service(string name, int duration, double price, string appTime)
    : serviceName(name), durationMinutes(duration), basePrice(price), appointmentTime(appTime) {}

Service::~Service() {}

void Service::setAppointmentTime(string time) {
    appointmentTime = time;
}

string Service::getAppointmentTime() const {
    return appointmentTime;
}

string Service::getServiceName() const {
    return serviceName;
}

int Service::getDuration() const {
    return durationMinutes;
}

double Service::getBasePrice() const {
    return basePrice;
}

double Service::calculateFinalPrice() const {
    return basePrice;
}