#ifndef SERVICE_H
#define SERVICE_H

#include <string>
using namespace std;

class Service {
protected:
    string serviceName;
    int durationMinutes;
    double basePrice;
    string appointmentTime;

public:
    Service(string name, int duration, double price, string appTime = "");
    virtual ~Service();

    void setAppointmentTime(string time);
    string getAppointmentTime() const;
    string getServiceName() const;
    int getDuration() const;
    double getBasePrice() const;

    virtual double calculateFinalPrice() const;
    virtual void displaySummary() const = 0; // pure virtual
};

#endif