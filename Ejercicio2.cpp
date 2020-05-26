#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    int a;
    string respuesta;
    
    cout << endl;
    cout << "VERIFICACION PARA UN NUMERO CUALQUIERA SI ES PAR O IMPAR" << endl << endl;

    cout << "Digite un valor: ";
    cin >> a;
    
    cout << endl;
    respuesta = (a % 2 == 0) ? "es par" : "es impar";
    cout << "El valor digitado " << respuesta << endl;

    return 0;
}