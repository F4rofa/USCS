/*                      Atividade 6
Algoritmos e Estrutura de Dados I - Ci�ncia da Computa��o
Prof. Dr. Aparecido Freitas (Cid�o)
Feito por: Davi Mar�al
*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int side1_of_rectangle = 5, side2_of_rectangle = 10, perimeter;
	
	printf("A altura do ret�ngulo � %d.\n", side1_of_rectangle);
	printf("A base do ret�ngulo mede %d.\n", side2_of_rectangle);
	
	perimeter = (2 * side1_of_rectangle) + (2 * side2_of_rectangle);
	
	printf("O per�metro do ret�ngulo � de %d.", perimeter);
}
