/*                      Atividade 6
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int side1_of_rectangle = 5, side2_of_rectangle = 10, perimeter;
	
	printf("A altura do retângulo é %d.\n", side1_of_rectangle);
	printf("A base do retângulo mede %d.\n", side2_of_rectangle);
	
	perimeter = (2 * side1_of_rectangle) + (2 * side2_of_rectangle);
	
	printf("O perímetro do retângulo é de %d.", perimeter);
}
