#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumreference(double x1, double y1, double x2, double y2);
double area(double x1, double y1, double x2, double y2);

void jarak(double input1);
void Radius(double input2);
void keliling(double input3);
void luas(double input4);

const double PI = 3.1416;

int main(int argc, char const *argv[])
{
    double nilaiJarak, nilaiRadius, nilaiKeliling, nilaiLuas;
    double input1, input2, input3, input4;
    double x1, y1, x2, y2;

    cout << "Masukkan nilai kedua titik dari sumbu x dan sumbu y, dengan format = x1 y1 x2 y2 : " << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    nilaiJarak = distance(x1, y1, x2, y2); // Parameter Actual
    nilaiRadius = radius(x1, y1, x2, y2); // Parameter Actual
    nilaiKeliling = circumreference(x1, y1, x2, y2); // Parameter Actual
    nilaiLuas = area(x1, y1, x2, y2); // Parameter Actual

    jarak(nilaiJarak); // Parameter Actual
    Radius(nilaiRadius); // Parameter Actual
    keliling(nilaiKeliling); // Parameter Actual
    luas(nilaiLuas); // Parameter Actual

    return 0;
}

double distance(double x1, double y1, double x2, double y2) // Parameter Formal
{
    double jarak;
    jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    return jarak;
}

double radius(double x1, double y1, double x2, double y2) // Parameter Formal
{
    distance(x1, y1, x2, y2);
    return distance(x1, y1, x2, y2);
}

double circumreference(double x1, double y1, double x2, double y2) // Parameter Formal
{
    double keliling;
    double Radius;
    Radius = radius(x1, y1, x2, y2);
    keliling = PI * 2 * Radius;
    return keliling;
}

double area(double x1, double y1, double x2, double y2) // Parameter Formal
{
    double luas;
    double Radius;
    Radius = radius(x1, y1, x2, y2);
    luas = PI * pow(Radius, 2);
    return luas;
}

void jarak(double input1) // Parameter Formal
{
    cout << input1 << endl;
}

void Radius(double input2) // Parameter Formal
{
    cout << input2 << endl;
}

void keliling(double input3) // Parameter Formal
{
    cout << input3 << endl;
}

void luas(double input4) // Parameter Formal
{
    cout << input4 << endl;
}
