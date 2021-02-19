#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//declaração de variaveis
char caracteres[10][10] = { 0 };
void criaMatriz(int, int);
void leMatriz(int, int);
void contaOcorrencia(int, int);
int primeiroCaracter(char);
//inicio do programa
int main()
{
int l, c;
printf("\n--------------------------\n");
//laço principal do programa
do
{
printf("\n Digite o numero de linhas maior que 0 e menor ou igual a
10:\t");
scanf_s("%d", &l);
printf(" Digite o numero de colunas maior que 0 e menor ou igual a
10:\t");
scanf_s("%d", &c);
fflush(stdin);
} while (11 > l < 1 || 11 > c < 1);
printf("\n--------------------------\n");printf("\n Sua matriz possui %i linhas \n", l);
printf(" Sua matriz possui %i colunas \n", c);
criaMatriz(l, c);
leMatriz(l, c);
contaOcorrencia(l, c);
printf("%i \n", primeiroCaracter(caracteres[0][0]));
system("pause");
}
//função para determinar tamanho da matriz e caracteres
void criaMatriz(int l, int c)
{
printf("\n--------------------------\n");
printf("\n Digite os caracteres: \n");
for (int x = 0; x < l; x++)
{
for (int y = 0; y < c; y++)
{
scanf_s(" %c", &caracteres[x][y]);
fflush(stdin);
}
}
}
//função para ler matriz
void leMatriz(int l, int c)
{
int aux, cont;
printf("\n--------------------------\n");
printf("\n Sua matriz: \n");
for (int x = 0; x < l; x++)
{
for (int y = 0; y < c; y++)
{
printf(" caractere[%i][%i]: %c \n", x, y, caracteres[x][y]);
}
}
}
//função para contar ocorrencia de caracteres na matriz
void contaOcorrencia(int l, int c)
{
printf("\n--------------------------\n");
int i, j, k, achei, ct = -1;
int vet[2][12] = { {0} };
for (i = 0; i < l; i++)
for (j = 0; j < c; j++)
{
if (j == l) printf("\n");
achei = false;
for (k = 0; k <= ct; k++)
{
if (vet[0][k] == caracteres[i][j])
{
vet[1][k]++;
achei = true;
}
}
if (!(achei))
{
vet[0][++ct] = caracteres[i][j];
vet[1][ct]++;
}
}
for (i = 0; i <= ct; i++){
printf("\nCaractere: %c -- ocorrencia(s): %d\n", vet[0][i], vet[1][i]);
}
}
//função para primeiro caractere
int primeiroCaracter(char primeiro)
{
int convertido = (int)primeiro;
printf("\n--------------------------\n");
printf("\n Caracter: %c", primeiro);
printf("\n Codigo: %i", primeiro);
printf("\n Resultado da operacao: ");
if (isupper(primeiro))
{
return (convertido / 10);
}
else
{
return (convertido * 2);
}
}