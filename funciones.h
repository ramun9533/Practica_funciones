#include <iostream>
using namespace std;
float pregCant()
{
    float cantidad;
    // std::cout << "Dame la cantidad  ";
    // Esto solo se usa cuando voy ha hacerlo una vez
    // En lugar de usar  using namespace std;
    // std::cin >> cantidad;
    cin >> cantidad;
    return cantidad;
}
float pregPorc(float x)
{
    float enganche;
    cin >> enganche;
    enganche = (enganche / 100) * x;
    return enganche;
}
float CalcMens(float y, float z)
{
    // el Precio = y y el porcEnganche = z
    float resto, mensualidad;
    resto = y - z;
    mensualidad = resto / 12;
    return mensualidad;
}