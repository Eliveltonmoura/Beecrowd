#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void total(double a, double b) // função que recebe dois valores é printa o resultado.
{
    double t{};

    t = a + (b * 0.15);

    cout << fixed << setprecision(2) << "TOTAL = R$ " << t << endl;

    return;
}

int main()
{
    string nome{};
    double sfv{}; // salario fixo do vendedor
    double tv{};  // ctotal de vendas

    cin >> nome >> sfv >> tv;

    total(sfv, tv);

    return 0;
}
