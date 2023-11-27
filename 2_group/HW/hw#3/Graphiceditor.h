#include "Shape.h"
#include <vector>
using namespace std;

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor();
    void Insert(int num1);
    void Del(int num2);
    void show();
    void run();
};