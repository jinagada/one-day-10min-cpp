//
// Created by Frodo on 2023/11/09.
//

#ifndef ONE_DAY_10MIN_CPP_TIME_H
#define ONE_DAY_10MIN_CPP_TIME_H

#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int mins;
public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time&);
    Time operator*(int);
    virtual void show();
    virtual ~Time();
    int getHours() { return hours; }
    int getMins() { return mins; }
    friend Time operator*(int n, Time& t) {
        return t * n;
    }
    friend ostream& operator<<(ostream&, Time&);
};

class NewTime : public Time {
private:
    int day;
public:
    NewTime();
    NewTime(int, int, int);
    void print();
    void show();
};

#endif //ONE_DAY_10MIN_CPP_TIME_H
