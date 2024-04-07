#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    Date(int pDay, int pMonth, int pYear) : day{ pDay }, month{ pMonth }, year{ pYear } {
        cout << "Date Parametrized constructor\n";
    }

    Date(const Date& other) : day{ other.day }, month{ other.month }, year{ other.year } {
        cout << "Date Copy constructor\n";
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    Date getNewer(const Date& other) {
        if (year > other.year)
            return *this;
        else if (year < other.year)
            return other;
        else {
            if (month > other.month)
                return *this;
            else if (month < other.month)
                return other;
            else {
                if (day >= other.day)
                    return *this;
                else
                    return other;
            }
        }
    }
};

int main() {
    Date date1(12, 6, 2008);
    Date date2(7, 4, 2024);
    Date newerDate = date1.getNewer(date2);
    cout << "Newer date is: " << newerDate.getDay() << "/" << newerDate.getMonth() << "/" << newerDate.getYear() << endl;
    return 0;
}