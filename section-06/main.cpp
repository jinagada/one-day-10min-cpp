//
// Created by Frodo on 2023/11/09.
//
#include <iostream>

using namespace std;

/**
 * 인라인 함수와 디폴트 매개변수
 */
inline float square(float x) { return x * x; }
const int SIZE = 8;
int sumArray(int*, int n = 1);
void chapter_27() {
    cout << "chapter_27" << endl;
    int a = 5;
    cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
    float b = square(a);
    cout << b << endl;
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
    int sum = sumArray(arr);
    cout << "함수의 총 합은 " << sum << " 입니다." << endl;
}

int sumArray(int* arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

/**
 * 참조 변수
 */
void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);
void chapter_28() {
    cout << "chapter_28" << endl;
    int wallet1 = 100;
    int wallet2 = 200;
    cout << "최초 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    cout << "참조를 이용한 값의 교환" << endl;
    swapA(wallet1, wallet2);
    cout << "참조 교환 이후 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    cout << "포인터를 이용한 값의 교환" << endl;
    swapB(&wallet1, &wallet2);
    cout << "포인터를 이용한 교환 이후 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    cout << "값을 이용한 값의 교환" << endl;
    swapC(wallet1, wallet2);
    cout << "값을 이용한 교환 이후 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
}

void swapA(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapB(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapC(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/**
 * 함수 오버로딩
 */
int sum(int, int);
float sum(float, float);
void chapter_29() {
    cout << "chapter_29" << endl;
    cout << "두 정수를 입력하십시오." << endl;
    int a = 1, b = 1;
//    cin >> a >> b;
    cout << "두 정수의 합은 " << sum(a, b) << "입니다." << endl;
    cout << "두 실수를 입력하십시오." << endl;
    float c = 1.1, d = 2.2;
//    cin >> c >> d;
    cout << "두 실수의 합은 " << sum(c, d) << "입니다." << endl;
}

int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

/**
 * 함수 템플릿
 */
template <class Any>
Any sum1(int, Any);
template <class Any>
Any sum1(Any, Any);
void chapter_30() {
    cout << "chapter_30" << endl;
    int a = 3;
    int b = 4;
//    cout << sum1(a, b) << endl;
    float c = 3.14;
    float d = 1.592;
    cout << sum1(c, d) << endl;
    a = 5;
    c = 3.14;
    cout << sum1(a, c) << endl;
}

template <class Any>
Any sum1(Any a, Any b) {
    return a + b;
}

template <class Any>
Any sum1(int a, Any b) {
    return a + b;
}

int main() {
    chapter_27();
    chapter_28();
    chapter_29();
    chapter_30();
    return 0;
}
