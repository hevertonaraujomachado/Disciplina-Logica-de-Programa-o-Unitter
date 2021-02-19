#include <stdio.h>
#include <stdlib.h>

//declaração de variaveis

int opc = 0;
int qtd = 0;
int cachorro_quente, xis_salada, xis_bacon, misto, salada, agua, refrigerante = 0;
float cq, xs, xb, m, s, a, r = 0;
float vt = 0;
//inicio programação
int main()
{

//menu demonstrativo para usuario saber os lanches que pode escolher

printf("Cardapio:\n\n");
printf("Numero - Lanche - Codigo - Valor\n");
printf("1 - Cachorro quente - 100 - R$5,00\n");
printf("2 - Xis salada - 101 - R$8,79\n");
printf("3 - Xis Bacon - 102 - R$9,99\n");
printf("4 - Misto - 103 - R$6,89\n");
printf("5 - Salada - 104 - R$4,80\n");
printf("6 - Agua - 105 - R$3,49\n");
printf("7 - Refrigerante - 106 - R$4,99\n\n");
printf("para encerrar seu pedido digite 10 \n\n");
//laço de repetição para que o usuario possa pedir quantos e quais lanches pretende comer
while (opc != 10)
{
printf("Digite seu pedido: ");
scanf("%i", &opc);
//if para seleção de qual lanche foi escolhido e quantidade
if (opc != 10)
{
printf("Digite a quantidade: ");
scanf("%i", &qtd);
}
if (opc == 1) //cahorro quente escolhido
{
cachorro_quente = cachorro_quente + qtd;
}
if (opc == 2)
{
xis_salada = xis_salada + qtd; //xis salada escolhido
}
if (opc == 3)
{
xis_bacon = xis_bacon + qtd; //xis bacon escolhido
}
if (opc == 4)
{
misto = misto + qtd; //misto escolhido
}
if (opc == 5)
{
salada = salada + qtd; // salada escolhida
}
if (opc == 6)
{
agua = agua + qtd; // agua escolhida
}
if (opc == 7)
{
refrigerante = refrigerante + qtd; // refrigerante escolhido
}
}
if (opc == 10)
{
//tela de pedidos feitos
if (cachorro_quente != 0)
{
printf("\n1 - Cachorro quente - 100 - R$5,00\n");
}
if (xis_salada != 0)
{
printf("\n2 - Xis salada - 101 - R$8,79\n");
}
if (xis_bacon != 0)
{
printf("\n3 - Xis Bacon - 102 - R$9,99\n");
}
if (misto != 0)
{
printf("\n4 - Misto - 103 - R$6,89\n");
}
if (salada != 0)
{
printf("\n5 - Salada - 104 - R$4,80\n");
}
if (agua != 0)
{
printf("\n6 - Agua - 105 - R$3,49\n");
}
if (refrigerante != 0)
{
printf("\n7 - Refrigerante - 106 - R$4,99\n\n");
}
//calculos
cq = cachorro_quente * 5;
xs = xis_salada * 8.79;
xb = xis_bacon * 9.99;
m = misto * 6.89;
s = salada * 4.80;
a = agua * 3.49;
r = refrigerante * 4.99;
vt = cq + xs + xb + m + s + a + r;
//valor total pedido
printf("valor total do seu pedido e: %.2f \n", vt);
}
return 0;
}