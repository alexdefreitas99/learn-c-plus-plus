#include <iostream>

void countDays();
void preVenda();

void pratoQuilo();

void peso();

using namespace std;

int main() {
//    countDays();
//    preVenda();
//    pratoQuilo();
//    peso();
//    int Mat_Num[3][5] = {{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
//    cout << Mat_Num[2][0];
 int conta, x = 1, r = 1;

   for (conta = 2; conta >= 0; conta--) {
       r = r * x + 1;
        x += 2;
       cout << "r= "  << r << "  x = " << x << endl;

   }
}

void peso() {
    float peso_atual, emagrecer, engordar;
    cout << "Peso ã (kg): ";
    cin >> peso_atual;
    emagrecer = peso_atual-(peso_atual*0.20);
    engordar = peso_atual + (peso_atual*0.15);
    cout << "Emagrecer: " << emagrecer << "\n";
    cout << "Engordar:  " << engordar;
}

void pratoQuilo() {
    const float quilo = 34.90;
    float prato, valor_pagar;
    cout << "Peso do prato do cliente - Kg: ";
    cin >> prato;
    valor_pagar = prato * quilo;
    cout << "Valor a pagar: R$ " << valor_pagar;
}

void preVenda() {
    float preCompra, preVenda;
    cout << "Preço de compra do produto: R$ ";
    cin >> preCompra;
    preVenda = preCompra + (preCompra * 20/100);
    cout << "Preço sugerido para venda R$ " << preVenda;
}

void countDays() {
    float dias, anos;
    cout << "Quantos dias vocês já viveu? ";
    cin >> dias;
    anos = dias / 365;

    string anoText;
    if(anos <= 1 ){
        anoText = " ano";
    } else anoText = " anos";
    cout << "Você já viveu " << anos << anoText;
}
