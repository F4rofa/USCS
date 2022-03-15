/*                      Atividade 4
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>
#include <locale.h> // Acerta caractere da língua portuguesa

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	double T1 = 5.0, T2 = 4.5, T3 = 9.0, mediaTrabalhos;
	// double = armazena mais números -> 64bits
	mediaTrabalhos = (T1 + T2 + T3) / 3.0; // Vai dar aprovado
	
	if (mediaTrabalhos >= 6.0)
	{
		printf("Aprovado nos Trabalhos...");
	}
	else
	{
		printf("Reprovado nos Trabalhos...");
	}
}
