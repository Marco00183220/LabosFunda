#include "iostream"

using namespace std;

int main(void)
{
    int a;
    
    cout << endl;
    cout << "VERIFICACION PARA UN NUMERO CUAlQUIERA SI ES NEGATIVO, POSITIVO O CERO" << endl << endl;

    cout << "Digite un valor: ";
    cin >> a;
    
    cout << endl;
    if (a > 0)
    {
        cout << "es un numero positivo" << endl << endl;
    }
    
    if (a < 0)
    {
        cout << "es un numero negativo" << endl << endl;
    }
    
    if (a > -1 && a < 1)
    {
        cout << "es cero" << endl << endl;
    }
    
    return 0;
}