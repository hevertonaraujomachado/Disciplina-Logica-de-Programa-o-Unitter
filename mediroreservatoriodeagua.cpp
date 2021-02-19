#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
void Reservatorio(); // Prototipo
void chuva(); // Prototipo
void agua1(); // Prototipo
void saldo(); // Prototipo
int capacidade_reservatorio = 0;
int chuvas[11];
int gasto_agua[11];
int m1, m2, m3 = 1;
int opc = 5;
int vm[11];
// inicio programa
int main(void)
{
setlocale(LC_ALL, "Portuguese");
// Prototipo loop menu principal
while (opc != 0)
{
system("cls");
printf("Programa Medição de Chuvas e Capacidade de armazenamento de agua
\n");
printf("1- Gravar armazenamnto maximo de agua no reservatorio de agua
\n");
printf("2-Gravar media de chuvas em mm nos meses do ano \n");
printf("3-Gravar media de gastos de agua em mm nos meses do ano \n");
printf("4-informação de qual seu saldo de agua em cada mes \n\n");
printf("0-Sair do Programa \n\n");
printf("Sua Opcao ==> ");
scanf_s("%i", &opc);
switch (opc) // Prototipo menu de seleção de função
{
case 1:
Reservatorio();
system("pause");
break;
case 2:
chuva();
system("pause");
break;
case 3:
agua1();
system("pause");
break;
case 4:
saldo();
system("pause");
break;
}
}
return 0;
}
void Reservatorio() // função tamanho reservatório
{
if (opc == 1)
{
printf("Digite o valor em milimetros da capacidade maxima do reservatorio
de agua:");
scanf_s("%i", &capacidade_reservatorio);}
}
void chuva() // função quantidade de chuva mês
{
for (m1 = 1; m1 <= 12; m1++)
{
printf("digite a media de chuva no mes %i:", m1);
scanf_s("%i", &chuvas[m1]);
}
}
void agua1() // função gastos de agua mês
{
for (m2 = 0; m2 <= 11; m2++)
{
printf("digite a media de gasto de agua no mes %i:", m2 + 1);
scanf_s("%i", &gasto_agua[m2]);
}
}
void saldo() // função saldo de agua no reservatório
{
for (m3 = 1; m3 <= 12; m3++)
{
vm[m3] = chuvas[m3] - gasto_agua[m3 - 1];
if (vm[m3] <= 0)
{
vm[m3] = 0;
}
if (vm[m3] >= capacidade_reservatorio)
{
vm[m3] = capacidade_reservatorio;
}
printf("o mes %d o reservatorio esta com %d mm\n", m3, vm[m3]);
if (vm[m3] >= capacidade_reservatorio)
{
printf("\to reservatorio esta cheio\n");
}
if (vm[m3] <= 0)
{
printf("\to reservatorio esta vazio\n");
}
fflush(stdin);
}
}