#include <iostream>
#include "Shape.h"
#include "Square.h"
using namespace std;

int main()
{
    Shape* SoyFigura = new Square(2.0);

    double Result = SoyFigura->calculateArea();

    cout << "El area del cuadrado es \n";
    cout<< Result;
}

