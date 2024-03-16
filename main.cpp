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

