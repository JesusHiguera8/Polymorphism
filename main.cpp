#include "Massage.h"

int main() {
    Massage m1("Personalized therapeutic massage", 75, 1400, "3:00 PM", false);
    m1.displaySummary();

    Massage m2("Personalized therapeutic massage", 60, 1200, "4:00 PM", true);
    m2.displaySummary();

    return 0;
}