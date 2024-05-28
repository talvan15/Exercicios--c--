#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int arr[tamanho];
    int arrUnico[tamanho];
    int novoTamanho = 0;

    cout << "Digite 10 números: " << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> arr[i];
    }

    // Adicionar números ao novo array se não forem duplicados
    for (int i = 0; i < tamanho; ++i) {
        bool duplicado = false;
        for (int j = 0; j < novoTamanho; ++j) {
            if (arr[i] == arrUnico[j]) {
                duplicado = true;
                break;
            }
        }
        if (!duplicado) {
            arrUnico[novoTamanho++] = arr[i];
        }
    }

    // Imprimir o novo array sem duplicatas
    cout << "Array sem números duplicados: " << endl;
    for (int i = 0; i < novoTamanho; ++i) {
        cout << arrUnico[i] << " ";
    }
    cout << endl;

    return 0;
}