/*                      Atividade 5
Algoritmos e Estrutura de Dados I - Ci�ncia da Computa��o
Prof. Dr. Aparecido Freitas (Cid�o)
Feito por: Davi Mar�al
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int square_side = 10, square_area;
	
	square_area = square_side * square_side;
	
	printf("O lado do quadrado: %d.\n", square_side);
	
	printf("A �rea do quadrado � de %d.", square_area); 
} 


