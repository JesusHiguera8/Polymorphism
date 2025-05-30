#ifndef MASSAGE_H
#define MASSAGE_H

#include "Service.h"

class Massage : public Service {
private:
    bool isReturningClient;

public:
    Massage(string name, int duration, double price);
    Massage(string name, int duration, double price, string appTime);
    Massage(string name, int duration, double price, string appTime, bool returningClient);
    ~Massage();

    void setIsReturningClient(bool returning);
    bool getIsReturningClient() const;

    double calculateFinalPrice() const override;
    void displaySummary() const override;
};

#endif