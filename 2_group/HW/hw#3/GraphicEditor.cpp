#include "GraphicEditor.h"
#include "UI.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

GraphicEditor::GraphicEditor() {};

void GraphicEditor::Insert(int num1) {
    if (num1 == 1) 
        v.push_back(new Line());
    if (num1 == 2)
        v.push_back(new Circle());
    if (num1 == 3)
        v.push_back(new Rect());
}

void GraphicEditor::Del(int num2) {
    Shape* del;
    it = v.begin();
    for (int i = 0; i < num2; ++i)
        ++it;
    del = *it;
    it = v.erase(it);
    delete del;
}

void GraphicEditor::show() {
    for (int i = 0; i < v.size(); ++i) {
        cout << i << ": ";
        v[i]->paint();
    }
}

void GraphicEditor::run() {
    std::cout << "그래픽 에디터입니다." << std::endl;
    int menu, num1, num2;
    while (true) {
        menu = UI::Menu();

        if (menu == 1) {
            num1 = UI::InsertShape();
            Insert(num1);
        }
        if (menu == 2) {
            num2 = UI::DelShape();
            Del(num2);
        }
        if (menu == 3) {
            show();
        }
        if (menu == 4)
            break;
    }
}