//
// Created by Frodo on 2023/11/09.
//
#include "time.h"

/**
 * 연산자 오버로딩
 */
void chapter_35() {
    cout << "chapter_35" << endl;
    Time day1(1, 40);
    Time day2(2, 30);
    day1.show();
    day2.show();
    Time total;
    total = day1.operator+(day2);
    Time total2;
    total2 = day1 + day2;
    total.show();
    total2.show();
}

/**
 * 프렌드
 */
void chapter_36() {
    cout << "chapter_36" << endl;
    Time t1(1, 20);
    Time t2;
    t2 = 3 * t1;
    t2.show();
    t2 = t1 * 3;
    t2.show();
}

/**
 * << 연산자 오버로딩
 */
void chapter_37() {
    cout << "chapter_37" << endl;
    Time t1(3, 34);
    t1.show();
    cout << t1;
}

int main() {
    chapter_35();
    chapter_36();
    chapter_37();
    return 0;
}
