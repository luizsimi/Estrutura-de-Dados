//Nessa aula, foi proposto para nos desenvolver uma aplicação para cadastrar o cliente que fará um crédito em 12 vezes.//

#include <iostream>
#include <string>

using namespace std;

struct Cliente {
string nome;
int idade;
string endereco;
double valorCredito;
};


void calcularParcelas(const Cliente& cliente) {
double valorParcela = cliente.valorCredito / 12.0;

cout << "\nDetalhes do Cliente:\n";
cout << "Nome: " << cliente.nome << "\n";
cout << "Idade: " << cliente.idade << "\n";
cout << "Endereço: " << cliente.endereco << "\n\n";
    
cout << "Detalhes do Crédito:\n";
cout << "Valor total do crédito: " << cliente.valorCredito << "\n";
cout << "Valor das parcelas (em 12 vezes): " << valorParcela << "\n";

cout << "\nCalendário de Pagamento:\n";
for (int i = 1; i <= 12; ++i) {
    cout << "Parcela " << i << ": R$ " << valorParcela << "\n";
    }
}

int main() {
    
Cliente cliente;

cout << "Cadastro de Cliente\n";
cout << "Nome: ";
getline(cin, cliente.nome);  
cout << "Idade: ";
cin >> cliente.idade;
cin.ignore();  
cout << "Endereço: ";
getline(cin, cliente.endereco);
cout << "Valor do crédito desejado: R$ ";
cin >> cliente.valorCredito;

calcularParcelas(cliente);

return 0;
}
