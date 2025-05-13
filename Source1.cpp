#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(' ', 0);

    double Q, W, t, S, n, H, Hr, h, Hc, Re;
    cout << "Vvedite t: "; cin >> t;
    cout << "Vvedite S: "; cin >> s;
    cout << "Vvedite n: "; cin >> n;
    cout << "Vvedite Hr: "; cin >> Hr;
    cout << "Vvedite L: "; cin >> L;
    cout << "Vvedite d: "; cin >> d;


    double ld, V, g, L, ny, d;
    g = 9.8;//jj
    V = 1;
    ny = pow(10, 6);
    Hc = 5;

    Q = W / t;
    W = 0.02 * S + 0.05 * n;
    h = ld * (L / d) + (V * V) / (2 * g);
    H = Hr + h + Hc;

    Re = (d * V) / ny;

    if (Re < 2300) {
        ld = 64 / Re;
    }
    else {
        ld = 0.3 / pow(Re, 0.25);
    }

    cout << "Vivod Q: " << Q << endl;
    cout << "Vivod H:" << H << endl;

}
