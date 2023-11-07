//
// Created by Frodo on 2023/11/07.
//
#include <iostream>
#include <climits>
#define PIE 3.1415926535

using namespace std;

void chapter_03() {
    int a;
    a = 7;
    int b = 3;
    a = 5;
    b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a = " << &a << ", b = " << &b << endl;
}

void chapter_04() {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " `이다." << endl;
    cout << "short은 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " `이다." << endl;
    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " `이다." << endl;
    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " `이다." << endl;
    unsigned int a;
    unsigned short b;
    unsigned long c;
    unsigned long long d;
    b = -2;
    cout << b << endl;
    float a1 = 3.14;
    int b1 = 3.14;
    cout << a1 << ", " << b1 << endl;
}

void chapter_05() {
    int a = 77;
    char b = a;
    cout << b << endl;
    b = 'a';
    cout << b << endl;
    char b1[] = {'a', 'b', 'c', '\0'};
    cout << b1 << endl;
    bool a1 = 0;
    bool b2 = 1;
    bool c = 10;
    cout << a1 << ", " << b2 << ", " << c << endl;
}

void chapter_06() {
    // 반지름 x 반지름 x 파이
    int r = 3;
    float s = r * r * PIE;
    cout << s << endl;
    const float PIE1 = 3.1415926535;
    int r1 = 5;
    float s1 = r1 * r1 * PIE1;
    cout << s1 << endl;
    int a = 3.141592;
    cout << a << endl;
    char ch = 'M';
    cout << (int)ch << ", " << int(ch) << endl;
    cout << static_cast<int>(ch) << endl;
}

void chapter_07() {
    int a = 3 + 2;
    cout << a << endl;
    a = 10;
    int b = 3;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;
    c = 5;
    int multiple = a + b * c;
    cout << multiple << endl;
    multiple = a / b * c;
    cout << multiple << endl;
    b = 2.5;
    multiple = a / b;
    cout << multiple << endl;
    float a1 = 9.0;
    b = 5;
    cout << a1 / b << endl;
    auto n = 100;
    auto x = 1.5;
    auto y = 1.3e12L;
    auto x1 = 0.0;
    float y1 = 0;
    auto z = 0;
}

int main() {
    chapter_03();
    chapter_04();
    chapter_05();
    chapter_06();
    chapter_07();
    return 0;
}
