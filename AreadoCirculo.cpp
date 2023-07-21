#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n = {3.14159};
    double area = {};
    double raio = {};

    cin >> raio;

    area = n * (raio * raio);
    // std::fixed << std::setprecision(2) << it->second << std::endl;
    cout << " A = " << fixed << setprecision(4) << area << endl;
}