//
// Created by Frodo on 2023/11/08.
//
#include <iostream>

using namespace std;

/**
 * 함수의 기초
 */
const float PIE = 3.14;
void cheers(int n);
float circle(int x);
void chapter_22() {
    cout << "chapter_22" << endl;
    int a;
    cout << "하나의 수를 입력하십시오." << endl;
//    cin >> a;
    cheers(a);
    int b;
    cout << "원의 반지름 길이를 입력하십시오." << endl;
//    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << " 입니다." << endl;
}

void cheers(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cheers!" << endl;
    }
}

float circle(int x) {
    return x * x * PIE;
}

/**
 * 매개변수와 전달인자
 */
void helloCPP(int, int);
void chapter_23() {
    cout << "chapter_23" << endl;
    int times = 2, times2 = 5;
    cout << "정수를 입력하십시오." << endl;
//    cin >> times;
    cout << "정수를 한번 더 입력하십시오." << endl;
//    cin >> times2;
    helloCPP(times, times2);
}

void helloCPP(int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << "Hello" << endl;
    }
    for (int i = 0; i < m; i++) {
        cout << "C++!" << endl;
    }
}

/**
 * 함수와 배열
 */
int sumArr(int*, int);
int sumArr2(int*, int*);
void chapter_24() {
    cout << "chapter_24" << endl;
    const int SIZE = 8;
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    cout << "size of arr " << sizeof arr << endl;
    int sum = sumArr(arr, SIZE);
    cout << "함수의 총 합은 " << sum << " 입니다." << endl;
    sum = sumArr2(arr, arr + SIZE);
    cout << "함수의 " << SIZE << "까지의 합은 " << sum << " 입니다." << endl;
    sum = sumArr2(arr, arr + 3);
    cout << "함수의 세번째 인덱스까지의 합은 " << sum << " 입니다." << endl;
}

int sumArr(int* arr, int n) {
    cout << "size of arr " << sizeof arr << endl;
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int sumArr2(int* begin, int* end) {
    int total = 0;
    int* pt;
    for (pt = begin; pt != end; pt++) {
        total += *pt;
    }
    return total;
}

/**
 * 함수와 구조체
 */
struct Time {
    int hours;
    int mins;
};
const int minsPerHr = 60;
Time sum(Time*, Time*);
void showTime(Time);
void chapter_25() {
    cout << "chapter_25" << endl;
    Time day1 = { 5, 45 };
    Time day2 = { 4, 55 };
    Time total = sum(&day1, &day2);
    cout << "이틀간 소요시간 : ";
    showTime(total);
}

Time sum(Time* t1, Time* t2) {
    Time total;
    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;
    return total;
}

void showTime(Time t1) {
    cout << t1.hours << "시간, " << t1.mins << "분 입니다." << endl;
}

/**
 * 재귀함수와 함수를 지시하는 포인터
 */
void countDown(int);
int func(int);
void chapter_26() {
    cout << "chapter_26" << endl;
    countDown(1);
    cout << func << endl; // 버전이 달라서 함수의 주소를 출력하지 않음
    int (*pf)(int);
    pf = func;
    cout << (*pf)(3) << endl;
}

void countDown(int n) {
    cout << "Counting..." << n << endl;
    if (n > 0) {
        countDown(n - 1);
    }
    cout << n << "번째 재귀함수" << endl;
}

int func(int n) {
    return n + 1;
}

int main() {
    chapter_22();
    chapter_23();
    chapter_24();
    chapter_25();
    chapter_26();
    return 0;
}

