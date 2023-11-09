//
// Created by Frodo on 2023/11/08.
//
#include <iostream>

using namespace std;

/**
 * if 구문과 if else 구문
 */
void chapter_19() {
    cout << "chapter_19" << endl;
    if (true) {
        cout << "조건이 ";
        cout << "참입니다." << endl;
    }

    if (false)
        cout << "조건이 거짓입니다.";

    if (false) {
        cout << "조건이 ";
        cout << "참입니다." << endl;
    } else {
        cout << "조건이 ";
        cout << "거짓입니다." << endl;
    }

    if (false) {
        cout << "#1";
    } else if (true) {
        cout << "#2";
    } else {
        cout << "#3";
    }

    cout << "프로그램이 종료되었습니다." << endl;
}

/**
 * 논리 표현식
 */
void chapter_20() {
    cout << "chapter_20" << endl;
    cout << "당신의 나이를 입력하십시오." << endl;
    int age;
//    cin >> age;
    if (age < 0 || 100 < age) {
        cout << "거짓말 하시면 안됩니다!" << endl;
    } else if (20 <= age && age <= 29) {
        cout << "당신은 20대 이군요?" << endl;
    } else {
        cout << "당신의 나이를 잘 모르겠습니다." << endl;
    }
}

/**
 * switch 구문과 break continue 구문
 */
void chapter_21() {
    cout << "chapter_21" << endl;
    int a;
//    cin >> a;
    switch (a) {
        case 1:
            cout << "입력하신 값은 1입니다." << endl;
            break;
        case 2:
            cout << "입력하신 값은 2입니다." << endl;
            break;
        case 3:
            cout << "입력하신 값은 3입니다." << endl;
            break;
        default:
            cout << "입력하신 값은 1, 2, 3 이외의 다른 값입니다." << endl;
            break;
    }
    cout << "switch 구문이 끝났습니다." << endl;
    int i = 0;
    while (true) {
        cout << "i의 값은 " << i << " 입니다." << endl;
        if (i > 10) {
            break;
        }
        i++;
    }
    cout << "while문이 끝났습니다." << endl;
    const int SIZE = 30;
    cout << "문장을 입력하십시오." << endl;
    char line[SIZE];
    cin.get(line, SIZE);
    cout << "입력하신 문장은" << endl;
    int spaces = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i];
        if (line[i] == ' ') {
            continue;
        }
        spaces++;
    }
    cout << "입니다." << endl;
    cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다." << endl;
}

int main() {
    chapter_19();
    chapter_20();
    chapter_21();
    return 0;
}
