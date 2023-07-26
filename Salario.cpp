#include <iostream> //
#include <iomanip>

using namespace std;

int main()
{
    int funcionario{};
    int qht{};     // quantidade de hora trabalhada
    double vqht{}; // valor de quantidade de hora trabalhada
    double slr{};  // salario do funcionario

    cin >> funcionario >> qht >> vqht; // entra da informações

    slr = qht * vqht;

    cout << "NUMBER = " << funcionario << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << slr << endl;
}
