//EJERCICIO I
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Ingrese una lista de numeros enteros (ingrese -1 para finalizar):\n";
    vector<int> numeros;
    int numero;
    while (true) {
        cin >> numero;
        if (numero == -1)
            break;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Lista de numeros ordenados de menor a mayor:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//EJERCICIO II
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    int numeroBuscado;
    cout << "Ingrese un numero: ";
    cin >> numeroBuscado;

    bool encontrado = false;
    int posicion = -1;
    for (int i = 0; i < numeros.size(); ++i) {
        if (numeros[i] == numeroBuscado) {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    if (encontrado) {
        cout << "El numero " << numeroBuscado << " esta presente en la posicion " << posicion << " del vector." << endl;
    } else {
        cout << "El numero " << numeroBuscado << " no esta presente en el vector." << endl;
    }

    return 0;
}

//EJERCICIO III
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Ingrese una lista de numeros enteros (ingrese -1 para finalizar):\n";
    vector<int> numeros;
    int numero;
    while (true) {
        cin >> numero;
        if (numero == -1)
            break;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());
    numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());

    cout << "Lista de numeros sin repeticiones:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

