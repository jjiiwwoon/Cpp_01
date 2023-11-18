#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H
#include "Shape.h"

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;

public:
    GraphicEditor();
    void Insert(int num1);
    void Del(int num2);
    void show();
    void run();
};

#endif