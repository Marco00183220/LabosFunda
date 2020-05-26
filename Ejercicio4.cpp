#include "iostream"
#include "string.h"

using namespace std;

int main(void)
{
    char  palabra[10];
    int longitud, a;

    cout << endl;
    cout << "VERIFICACION PARA UNA PALABRA CUALQUIERA SI ES MAYOR A 10 Y SI SU LONGITUD ES PAR O IMPAR" << endl << endl;

    cout << endl;
    cout << "Escriba una palabra: ";
    cin >> palabra;

    longitud = strlen(palabra);
    a =strlen(palabra);
    
    if (longitud > 10)
    {
        cout << endl;
        cout << "El numero de caracteres es mayor a diez" << endl;
            
    }
        if (longitud < 10)
        {
            cout << endl;
            cout << "El numero de caracteres es menor a diez" << endl;
        }
    
            if (longitud = a % 2 == 0)
            {
                cout << endl;
                cout << "El numero de caracteres es par" << endl;
            }

                else
                {
                    cout << endl;
                    cout << "El numero de caracteres es impar" << endl;
                }
    
    return 0;
}