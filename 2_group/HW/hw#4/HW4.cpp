#include<iostream>
using namespace std;

class CoffeeMachine {
    int coffee;
    int sugar;
    int cream;
    int water;
    int cup;
public:
    CoffeeMachine() { 
        coffee = 3; 
        sugar = 3; 
        cream = 3; 
        water = 3; 
        cup = 3; 
    }

    void Coffee() {
        if (cup==0)    
            cout << "��ᰡ �����մϴ�~~" << endl;
        else { 
            coffee--; 
            cream--; 
            water--; 
            cup--;   
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl; 
        }
    }

    void SugarCoffee() {
        if (cup == 0)
            cout << "��ᰡ �����մϴ�~~" << endl;
        else { 
            coffee--; 
            sugar--; 
            water--; 
            cup--;    
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl; 
        }
    }

    void BlackCoffee() {
        if (cup == 0)
            cout << "��ᰡ �����մϴ�~~" << endl;
        else { 
            coffee--;
            water--; 
            cup--;        
            cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl; 
        }
    }

    void fill() { 
        coffee = 3; 
        sugar = 3; 
        cream = 3;
        water = 3; 
        cup = 3;
        cout << "��� ���� ä��ϴ�.~~" << endl; }

    void show() {
        cout << "Coffee    ";
        for (int i = 0; i < coffee; i++)    
            cout << "*";
        cout << endl;

        cout << "Sugar     ";
        for (int i = 0; i < sugar; i++)    
            cout << "*";
        cout << endl;

        cout << "CREAM     ";
        for (int i = 0; i < cream; i++)    
            cout << "*";
        cout << endl;

        cout << "Water     ";
        for (int i = 0; i < water; i++)    
            cout << "*";
        cout << endl;

        cout << "Cup       ";
        for (int i = 0; i < cup; i++)    
            cout << "*";
        cout << endl << endl << endl;
    }
};

int main() {
    CoffeeMachine cm;
    int num = 0;
    cout << "-----��ǰ Ŀ�� ����Ű �մϴ�-----" << endl;
    while (true) {
        cm.show();
        cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
        cin >> num;

        switch (num) {
        case 0:
            cm.Coffee();
            break;
        case 1:
            cm.SugarCoffee();
            break;
        case 2:
            cm.BlackCoffee();
            break;
        case 3:
            cm.fill();
            break;
        case 4:
            return 0;
            break;
        }
    }
}