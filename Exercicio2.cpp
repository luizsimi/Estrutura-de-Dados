#include <iostream>

using namespace std;

int soma(int n) {
int resultado = 0;

for (int i = n; i >= 1; --i) {
    resultado += i;
 }

return resultado;
}


int main() {
int numero;

cout << "Digite um numero: " << endl;
cin >> numero;

int resultado = soma(numero);

cout << "A soma dos numeros de " << numero << " ate 1 e: " << resultado << endl;

return 0;
}
