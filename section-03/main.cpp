//
// Created by Frodo on 2023/11/08.
//
#include <iostream>

using namespace std;

/**
 * 반복문 : 반복문의 정의와 for문의 형태
 */
void chapter_15() {
    cout << "chapter_15" << endl;
    char a[10] = { 'a', 'b', 'c', 'd', 'e' };
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << "번째입니다." << endl;
    }
}

/**
 * 반복문 : 증가/감소 연산자와 관계표현식
 */
void chapter_16() {
    cout << "chapter_16" << endl;
    int a = 10;
    int b = 10;
    cout << "a는 " << a << ", b는 " << b << endl;
    cout << "a++는 " << a++ << endl;
    cout << "++b는 " << ++b << endl;
    cout << "a는 " << a << ", b는 " << b << endl;
    for (int i = 5; i > 0; i--) {
        cout << i << "번째입니다." << endl;
    }
}

/**
 * while 루프와 do while 루프
 */
void chapter_17() {
    cout << "chapter_17" << endl;
    int i = 0;
    for (i; i < 3; i++) {
        cout << i << endl;
    }
    i = 0;
    while (i < 3) {
        cout << i << endl;
        i++;
    }
    string str = "Panda";
    i = 0;
    while (str[i] != '\0') {
        cout << str[i] << endl;
        i++;
    }
    bool a = true;
    bool b = false;
    while (b) {
        cout << "hello\n";
    }
    for (int x = 0; x < 3; x++) {
        cout << "for문 입니다." << endl;
    }
    int j = 0;
    while (j < 3) {
        cout << "while문 입니다." << endl;
        j++;
    }
//    cout << x << endl;
    cout << j << endl;
    j = 0;
    do {
        cout << "do while문 입니다." << endl;
        j++;
    } while (j < 3);
    bool y = false;
    do {
        cout << "do while문 입니다." << endl;
    } while (y);
}

/**
 * 반복문의 활용
 */
void chapter_18() {
    cout << "chapter_18" << endl;
    int a[10] = { 1, 3, 5, 7, 9 };
    for (int i = 0; i < 5; i++) {
        cout << a[i];
    }
    cout << "\n";
    for (int i : a) {
        cout << i;
    }
    int temp[4][5] = {
            {1, 2, 3, 4, 5},
            {11, 22, 33, 44, 55},
            {111, 222, 333, 444, 555},
            {1111, 2222, 3333, 4444, 5555},
    };
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 5; col++) {
            cout << temp[row][col] << " ";
        }
        cout << "\n";
    }
}

int main() {
    chapter_15();
    chapter_16();
    chapter_17();
    chapter_18();
    return 0;
}
