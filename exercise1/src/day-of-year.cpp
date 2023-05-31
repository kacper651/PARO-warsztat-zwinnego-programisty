#include "day-of-year.hpp"

int dayOfYear(int month, int MonthDay, int year) {
    int daysInMonth[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    MonthDay += daysInMonth[month - 1];

    // Handle leap years
    if (month > 2 && isLeapYear(year)) {
        MonthDay++;
    }
    return MonthDay;
}

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 != 0) {
        return true;
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}