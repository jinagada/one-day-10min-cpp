//
// Created by Frodo on 2023/11/09.
//
#include "struct.h"
#include "new.h"
#include "stock.h"

/**
 * 분할 컴파일
 */
void chapter_31() {
    cout << "chapter_31" << endl;
    MyStruct PandaCoding = {
            "Panda",
            26
    };
    display(PandaCoding);
}

/**
 * 추상화와 클래스
 */
void chapter_32() {
    cout << "chapter_32" << endl;
    Stock temp;
    temp.acquire("Panda", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();
}

/**
 * 클래스 생성자와 파괴자
 * @return
 */
void chapter_33() {
    cout << "chapter_33" << endl;
    cout << "생성자를 이용하여 객체 생성" << endl;
    Stock temp = Stock("Panda", 100, 1000);
    cout << "디폴트 생성자를 이용하여 객체 생성" << endl;
    Stock temp2;
    cout << "temp를 tepm2에 대입" << endl;
    temp2 = temp;
    cout << "temp와 temp2 출력" << endl;
    temp.show();
    temp2.show();
    cout << "생성자를 이용하여 temp 내용 재설정" << endl;
    temp = Stock("Coding", 200, 1000);
    cout << "재설정된 temp 출력" << endl;
    temp.show();
}

/**
 * this 포인터, 클래스 객체 배열
 */
void chapter_34() {
    cout << "chapter_34" << endl;
    Stock s1("A", 10, 1000);
    Stock s2("B", 20, 1200);
    s1.show();
    s2.show();
    cout << "A와 B중 share_val이 큰 객체는" << endl;
    s1.topval(s2).show();
    Stock s[4] = {
            Stock("A", 10, 1000),
            Stock("B", 20, 1200),
            Stock("C", 20, 1300),
            Stock("D", 20, 1400)
    };
    s[0].show();
    Stock *first = &s[0];
    for (int i = 1; i < 4; i++) {
        first = &first->topval(s[i]);
    }
    first->show();
}

int main() {
    chapter_31();
    chapter_32();
    chapter_33();
    chapter_34();
    return 0;
}
