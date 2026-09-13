#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    double radius, length, width;

public:
    // Single constructor handles all 3 attributes
    Shape(double r, double l, double w) : radius(r), length(l), width(w) {
        cout << "Shape created -> radius: " << radius
             << ", length: " << length
             << ", width: " << width << endl;
    }

    double circlePerimeter() {
        return 2 * 3.14159 * radius;
    }

    double rectanglePerimeter() {
        if (length > 0 && width > 0)
            return 2 * (length + width);
        else {
            cout << "impossible\n";
            return 0;
        }
    }

    ~Shape() {
        cout << "destroyed" << endl;
    }
};

int main() {
    double r, l, w;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter length and width: ";
    cin >> l >> w;

    Shape s(r, l, w);

    cout << "\nPerimeter of circle = " << s.circlePerimeter() << endl;
    cout << "Perimeter of rectangle = " << s.rectanglePerimeter() << endl;

    return 0;
}