#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "");


    // Константы
    g = 9.8;
    V = 1.0; // Предполагаемая скорость потока, м/с
    ny = 1e-6;
    Hc = 5;

    // Расчеты
    W = 0.02 * S + 0.05 * n;
    Q = W / t;

    Re = (d * V) / ny;

    if (Re < 2300) {
        ld = 64 / Re;
    }
    else {
        ld = 0.3 / pow(Re, 0.25);
    }

    h = ld * (L / d) + (V * V) / (2 * g);
    H = Hr + h + Hc;

   
    return 0;
}
