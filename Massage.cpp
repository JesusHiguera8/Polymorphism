#include "Massage.h"
#include <iostream>
#include <iomanip>
using namespace std;

Massage::Massage(string name, int duration, double price)
    : Service(name, duration, price), isReturningClient(false) {}

Massage::Massage(string name, int duration, double price, string appTime)
    : Service(name, duration, price, appTime), isReturningClient(false) {}

Massage::Massage(string name, int duration, double price, string appTime, bool returningClient)
    : Service(name, duration, price, appTime), isReturningClient(returningClient) {}

Massage::~Massage() {}

void Massage::setIsReturningClient(bool returning) {
    isReturningClient = returning;
}

bool Massage::getIsReturningClient() const {
    return isReturningClient;
}

double Massage::calculateFinalPrice() const {
    double finalPrice = basePrice;

    if (durationMinutes > 60)
        finalPrice += 200;

    if (isReturningClient)
        finalPrice *= 0.9;

    return finalPrice;
}

void Massage::displaySummary() const {
    cout << fixed << setprecision(2);
    cout << "Service: " << serviceName << endl;
    cout << "Duration: " << durationMinutes << " minutes" << endl;
    cout << "Base Price: $" << basePrice << endl;
    cout << "Time: " << appointmentTime << endl;

    if (durationMinutes > 60)
        cout << "Note: Duration exceeds 60 minutes. Surcharge applied: $200" << endl;

    if (isReturningClient)
        cout << "Note: Returning client discount applied: 10%" << endl;

    cout << "Final Price: $" << calculateFinalPrice() << endl;
    cout << "Booking Confirmed" << endl;
    cout << "=========================================" << endl;
}