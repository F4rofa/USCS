/*                      Atividade 8
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	// colocar string
	char name[] = "Davi"; int age = 17; char RG [] = "62.406.605-8"; char CPF [] = "527.220.068-39";
	printf("Olá %s, você tem %i anos. \nSeu RG é: %s\nSeu CPF: %s", name, age, RG, CPF);
	
	return 0;
}
