#include <iostream>
using namespace std;

class Point // реалізувати к-тор копіювання
{
    int x = 0;
    int y = 0;
public:
    // конструктор за замовчуванням
    Point() {
        cout << "x: " << x << " Point Default constructor\n";
    }
    // конструктор з параметрами
    Point(int pX, int pY)
    {
        x = pX;
        y = pY;
        cout << "Point Parametrized constructor\n";
    }

    Point(const Point& other) : x{ other.x }, y{ other.y } {
        cout << "Point Copy constructor\n";
    }
};

int main() {
    Point X;
    Point Y(2, 3);
    Point Z(Y);
}