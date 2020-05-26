#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    int a;
    string respuesta;
    
    cout << endl;
    cout << "Comprobacion para un numero cualquiera si es divisible entre 4" << endl << endl;

    cout << "Digite un valor: ";
    cin >> a;
    
    cout << endl;
    respuesta = (a % 4 == 0) ? "si es divisible entre 4" : "no es divisible entre 4";
    cout << "El valor digitado " << respuesta << endl;

    return 0;
}