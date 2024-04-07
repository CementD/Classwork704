#include <iostream>
using namespace std;

class Point // ���������� �-��� ���������
{
    int x = 0;
    int y = 0;
public:
    // ����������� �� �������������
    Point() {
        cout << "x: " << x << " Point Default constructor\n";
    }
    // ����������� � �����������
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