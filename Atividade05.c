/*                      Atividade 5
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int square_side = 10, square_area;
	
	square_area = square_side * square_side;
	
	printf("O lado do quadrado: %d.\n", square_side);
	
	printf("A área do quadrado é de %d.", square_area); 
} 


