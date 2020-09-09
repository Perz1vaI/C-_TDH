#include <iostream>
using namespace std;
void Torres_Hanoi(int movimientos, int aguja1, int aguja3, int aguja2)
{
    if (movimientos == 1)
    {
        cout << aguja1 << " → " << aguja3 << endl;
    }
    else
    {
        Torres_Hanoi(movimientos - 1, aguja1, aguja2, aguja3);
        cout << aguja1 << " → " << aguja3 << endl;
        Torres_Hanoi(movimientos - 1, aguja2, aguja3, aguja1);
    }
}
int main()
{
    int aguja1 = 1, aguja2 = 2, aguja3 = 3;
    int movimientos;
    cout << "Numero discos: ";
    cin >> movimientos;
    cout << "Agujas → Agujas" << endl;
    Torres_Hanoi(movimientos, aguja1, aguja3, aguja2);
}