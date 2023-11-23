#include "UI.h"
#include <iostream>

int UI::Menu() {
    int num;
    std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
    std::cin >> num;
    return num;
}

int UI::InsertShape() {
    int num;
    std::cout << "선:1, 원:2, 사각형:3 >>";
    std::cin >> num;
    return num;
}

int UI::DelShape() {
    int num;
    std::cout << "삭제하고자 하는 도형의 인덱스 >>";
    std::cin >> num;
    return num;
}