#include "UI.h"
#include <iostream>

int UI::Menu() {
    int num;
    std::cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
    std::cin >> num;
    return num;
}

int UI::InsertShape() {
    int num;
    std::cout << "��:1, ��:2, �簢��:3 >>";
    std::cin >> num;
    return num;
}

int UI::DelShape() {
    int num;
    std::cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
    std::cin >> num;
    return num;
}