/*                      Atividade 8
Algoritmos e Estrutura de Dados I - Ci�ncia da Computa��o
Prof. Dr. Aparecido Freitas (Cid�o)
Feito por: Davi Mar�al
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	// colocar string
	char name[] = "Davi"; int age = 17; char RG [] = "62.406.605-8"; char CPF [] = "527.220.068-39";
	printf("Ol� %s, voc� tem %i anos. \nSeu RG �: %s\nSeu CPF: %s", name, age, RG, CPF);
	
}
