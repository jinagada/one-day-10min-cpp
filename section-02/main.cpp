//
// Created by Frodo on 2023/11/08.
//
#include <iostream>

using namespace std;

/**
 * 배열과 문자열
 */
void chapter_08() {
    short month[12] = { 1, 2, 3 };
    cout << month[3] << endl;
    short month1[] = { 1, 2, 3 };
    cout << month1[5] << endl;
    char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    cout << a << endl;
    char a1[] = "Hello";
    cout << a1 << endl;
}

/**
 * 사용자 입력과 string
 */
void chapter_09() {
    const int size = 15;
    char name1[size];
    char name2[size] = "C++programing";
    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
//    cin >> name1;
//    cin.getline(name1, size);
//    cin.get(name1, size);
    cout << "음. " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << " 자입니다만\n";
    cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
    cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;
    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda";
//    char1 = char2; // 에러
    str1 = str2;
    cout << str1 << endl;
    cout << str1[0] << endl;
}

/**
 * 구조체
 */
void chapter_10() {
    // 축구선수
    struct MyStruct {
        string name;
        string position;
        int height;
        int weight;
    } B;
    MyStruct A = {
            "Son",
            "Striker",
            183,
            77
    };
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;
    B = {
    };
    cout << B.height << endl;
    MyStruct A1[2] = {
            {"A", "A", 1, 1},
            {"B", "B", 2, 2}
    };
    cout << A1[0].height << endl;
}

/**
 * 공용체와 열거체
 */
void chapter_11() {
    union MyUnion {
        int intVal;
        long longVal;
        float floatVal;
    };
    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal = (float)3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;
    enum spectrum { red = 0, orange = 2, yellow = 4, green,
            blue, violet, indigo, ultraviolet };
    spectrum a = orange;
    cout << a << endl;
    int b;
    b = blue;
    cout << b << endl;
    b = blue + 3;
    cout << b << endl;
    cout << green << endl;
}

/**
 * 포인터와 메모리 해제 (1)
 */
void chapter_12() {
    int val = 3;
    cout << &val << endl;
    int *a; // c style
    int* b; // c++ style
    int* c, d; // c는 포인터 변수, d는 int형 번수
    int a1 = 6;
    int* b1;
    b1 = &a1;
    cout << "a1의 값 " << a1 << endl;
    cout << "*b1의 값 " << *b1 << endl;
    cout << "*a1의 주소 " << &a1 << endl;
    cout << "b1의 주소 " << b1 << endl;
    *b1 = *b1 + 1;
    cout << "이제 a1의 값은 " << a1 << endl;
}

/**
 * 포인터와 메모리 해제 (2)
 */
void chapter_13() {
    int a;
    int* b = &a;
    int* pointer = new int;
    int* ps = new int;
    delete ps;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    cout << "p3[2] is " << p3[2] << ".\n";
    p3 = p3 - 1;
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    cout << "p3[2] is " << p3[2] << ".\n";
    delete[] p3;
}

/**
 * 포인터 연산
 */
#define SIZE 20
struct MyStruct {
    char name[20];
    int age;
};
void chapter_14() {
    char animal[SIZE];
    char* ps;
    cout << "동물 이름을 입력하십시오\n";
    cin >> animal;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "입력하신 동물 이름을 복사하였습니다" << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
    MyStruct* temp = new MyStruct;
    cout << "당신의 이름을 입력하십시오\n";
    cin >> temp->name;
    cout << "당신의 나이를 입력하십시오\n";
    cin >> (*temp).age;
    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!";
}

int main() {
    chapter_08();
    chapter_09();
    chapter_10();
    chapter_11();
    chapter_12();
    chapter_13();
    chapter_14();
    return 0;
}
