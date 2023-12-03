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
            cout << "재료가 부족합니다~~" << endl;
        else { 
            coffee--; 
            cream--; 
            water--; 
            cup--;   
            cout << "맛있는 보통 커피 나왔습니다~~" << endl; 
        }
    }

    void SugarCoffee() {
        if (cup == 0)
            cout << "재료가 부족합니다~~" << endl;
        else { 
            coffee--; 
            sugar--; 
            water--; 
            cup--;    
            cout << "맛있는 설탕 커피 나왔습니다~~" << endl; 
        }
    }

    void BlackCoffee() {
        if (cup == 0)
            cout << "재료가 부족합니다~~" << endl;
        else { 
            coffee--;
            water--; 
            cup--;        
            cout << "맛있는 블랙 커피 나왔습니다~~" << endl; 
        }
    }

    void fill() { 
        coffee = 3; 
        sugar = 3; 
        cream = 3;
        water = 3; 
        cup = 3;
        cout << "모든 통을 채웁니다.~~" << endl; }

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
    cout << "-----명품 커피 자판키 켭니다-----" << endl;
    while (true) {
        cm.show();
        cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>> ";
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