#include "GraphicEditor.h"
#include "UI.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

GraphicEditor::GraphicEditor() {
    pStart = NULL;
    pLast = NULL;
}

void GraphicEditor::Insert(int num1) {
    Shape* p = NULL;
    if (num1 == 1) {
        p = new Line();
    }
    if (num1 == 2) {
        p = new Circle();
    }
    if (num1 == 3) {
        p = new Rect();
    }

    if (pStart == NULL) {
        pStart = p;
        pLast = p;
        return;
    }
    pLast->add(p);
    pLast = pLast->getNext();
}

void GraphicEditor::Del(int num2) {
    Shape* pre = pStart;
    Shape* current = pStart;

    for (int i = 0; i < num2; i++) {
        pre = current;
        current = current->getNext();
    }
    if (current == pStart) {
        pStart = current->getNext();
        delete current;
    }
    else {
        pre->add(current->getNext());
        delete current;
    }
}

void GraphicEditor::show() {
    Shape* current = pStart;
    int i = 0;
    while (current != NULL) {
        std::cout << i++ << ": ";
        current->paint();
        current = current->getNext();
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
