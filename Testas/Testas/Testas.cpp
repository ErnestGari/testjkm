#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Skaiciavimas();
void Atstumas(double& a, double x1, double x2, double y1, double y2);

int main()
{
    Skaiciavimas();
}

void Skaiciavimas() {
    ifstream fs("duom.txt");
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    double a, b, c, d;
    double ist1, ist2;

    fs >> x1 >> y1;
    fs >> x2 >> y2;
    fs >> x3 >> y3;
    fs >> x4 >> y4;

    Atstumas(a, x1,x2,y1,y2);
    Atstumas(b, x3, x2, y3, y2);
    Atstumas(c, x4, x3, y4, y3);
    Atstumas(d, x1, x4, y4, y1);
    Atstumas(ist1, x3, x1, y3, y1);
    Atstumas(ist2, x4, x2, y4, y2);

    cout << "Krastine a: " << a << endl;
    cout << "Krastine b: " << b << endl;
    cout << "Krastine c: " << c << endl;
    cout << "Krastine d: " << d << endl;
    cout << "Istrizaine x: " << ist1 << endl;
    cout << "Istrizaine y: " << ist2 << endl;

    //ilgiausia krastine

    double left_max = max(a, b);
    double right_max = max(c, d);
    double final_max = max(left_max, right_max);

    if (final_max == a) {
        cout << "Ilgiausia krastine yra a: " << final_max << endl;
    }
    else if (final_max == b) {
        cout << "Ilgiausia krastine yra b: " << final_max << endl;
    }
    else if (final_max == c) {
        cout << "Ilgiausia krastine yra c: " << final_max << endl;
    }
    else if (final_max == d) {
        cout << "Ilgiausia krastine yra d: " << final_max << endl;
    }
}

void Atstumas(double& a,double x1, double x2, double y1, double y2) {
    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}