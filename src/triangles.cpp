/* 
Anda diminta untuk mengimplementasikan class dengan nama Triangle 
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah 
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/

#include <iostream>
#include <math.h>

#include "include/triangles.hpp"
#include "include/point2d.hpp"

Triangle::Triangle() : _t1(), _t2(), _t3() { }

void Triangle::SetT1(Point2D t1) { _t1 = t1; }
void Triangle::SetT2(Point2D t2) { _t2 = t2; }
void Triangle::SetT3(Point2D t3) { _t3 = t3; }

static float distance(Point2D a, Point2D b) {
    float dx = b.GetX() - a.GetX();
    float dy = b.GetY() - a.GetY();
    float dz = b.GetZ() - a.GetZ();

    return sqrt(dx*dx + dy*dy + dz*dz);
}


void Triangle::TriangleType() {
    float a = distance(_t1, _t2);
    float b = distance(_t2, _t3);
    float c = distance(_t1, _t3);

    if(a == b && b == c) {
        std::cout << "sama sisi" << '\n';
    }
    else if(a == b || b == c || a == c) {
        std::cout << "sama kaki" << '\n';
    }
    else if(a*a + b*b == c*c || a*a + c*c == b*b) {
        std::cout << "siku siku" << '\n';
    }
    else {
        std::cout << "sembarang" << '\n';
    }
}

std::istream& operator>>(std::istream& is, Triangle& t) {
    Point2D p1, p2, p3;
    float x, y, z;

    is >> x >> y >> z;
    p1 = Point2D(x, y, z);

    is >> x >> y >> z;
    p2 = Point2D(x, y, z);

    is >> x >> y >> z;
    p3 = Point2D(x, y, z);

    t.SetT1(p1);
    t.SetT2(p2);
    t.SetT3(p3);

    return is;
}