//
// Created by Frodo on 2023/11/09.
//
#include "../section-08/time.h"

/**
 * 상속 기본
 */
void chapter_38() {
    cout << "chapter_38" << endl;
    NewTime temp1();
    NewTime temp2(3, 30, 2);
    temp2.print();
}

/**
 * Public 다형 상속
 */
void chapter_39() {
    cout << "chapter_39" << endl;
    Time temp1(30, 2);
    NewTime temp2(3, 30, 2);
    temp1.show();
    temp2.show();
}

/**
 * 동적결합
 */
const int MAX = 3;
void chapter_40() {
    cout << "chapter_40" << endl;
    Time* times[MAX];
    int day;
    int hours;
    int mins;
    for (int i = 0; i < MAX; i++) {
        cout << i + 1 << "번째 원소를 정의합니다." << endl;
        cout << "시간을 입력하십시오." << endl;
        cin >> hours;
        cout << "분을 입력하십시오." << endl;
        cin >> mins;
        char check;
        cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
        cin >> check;
        if (check == '0') {
            times[i] = new Time(hours, mins);
        } else {
            cout << "일을 입력하십시오." << endl;
            cin >> day;
            times[i] = new NewTime(hours, mins, day);
        }
    }
    for (int i = 0; i < MAX; i++) {
        cout << i + 1 << "번째 정보입니다." << endl;
        times[i]->show();
    }
    for (auto & time : times) {
        delete time;
    }
}

int main() {
    chapter_38();
    chapter_39();
    chapter_40();
    return 0;
}
