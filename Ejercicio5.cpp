#include <iostream>
using namespace std;
 
int main()
{
    char palabra[5];

    cout << endl;
    cout << "VERIFICACION PARA UNA PALABRA CUALQUIERA DE 5 LETRAS SI INICIA Y TERMINA CON LA MISMA LETRA O NO" << endl << endl;    
    
    cout << endl;
    cout << "Ingrese una palabra de 5 letras: ";
    cin >>  palabra;

    if (palabra[0] == palabra[5])
    {
        cout << endl;
        cout << "La palabra digitada empieza y termina con la misma letra" << endl;
    }
        else
        {
            cout << endl;
            cout << "La palabra digitada empieza y termina con diferente letra" << endl;
        }
        
    return 0;
}