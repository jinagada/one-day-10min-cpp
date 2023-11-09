//
// Created by Frodo on 2023/11/09.
//

#ifndef ONE_DAY_10MIN_CPP_STOCK_H
#define ONE_DAY_10MIN_CPP_STOCK_H

#include <iostream>

using namespace std;

class Stock {
private:
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total() { total_val = shares * share_val; }
public:
    void acquire(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock &topval(Stock&);
    Stock();
    Stock(string co, int n, float pr);
    ~Stock();
};

#endif //ONE_DAY_10MIN_CPP_STOCK_H
