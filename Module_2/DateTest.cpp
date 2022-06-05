#include <iostream>
#include "Date.h"

int main() {
    Date currentDate(2022, 5, 19);

    currentDate.displayDate();

    currentDate.setDay(20);
    currentDate.setMonth(7);
    currentDate.setYear(2025);

    currentDate.displayDate();
}