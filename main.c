#include <stdio.h>
#include <stdbool.h>
#include <string.h>





float Desconto(char tipoDeCliente[]){
    float desconto = 0;
    if (strcmp(tipoDeCliente, "VIP") == 0) {
        desconto = 0.10f;
    }else if(strcmp(tipoDeCliente, "fiel") == 0) {
        desconto = 0.075f;
    }
    return desconto;
}


float valorComprado(float valor) {
    float desconto = 0;
    if (valor >= 250) {
        desconto = valor - (valor * 0.15f);
    }else if(valor >= 100 && valor < 250)  {
        desconto = valor - (valor * 0.10f);
    }else{
        desconto = valor - (valor * 0.04f);
    }
    return desconto;
}



int main() {
    float valortotalDeCompras, resultado, desconto, comprasComDesconto;
    char tipoDeCliente[50];

    printf("informe o tipo de cliente:");
    fgets(tipoDeCliente, sizeof(tipoDeCliente), stdin);
    tipoDeCliente[strcspn(tipoDeCliente, "\n")] = 0;

    desconto = Desconto(tipoDeCliente);

    printf("informe o valor das compras:");
    scanf("%f",&valortotalDeCompras );
    comprasComDesconto = valorComprado(valortotalDeCompras);

    resultado = comprasComDesconto - (comprasComDesconto * desconto);

    printf("o resultado é de: %.2f",resultado);


    return 0;



}
