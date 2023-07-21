#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double a{};
    double b{};
    double media{};

    cin >> a >> b;

    media = (a * 3.5 + b * 7.5) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;
}