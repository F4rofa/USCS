/*                      Atividade 7
Algoritmos e Estrutura de Dados I - Ci�ncia da Computa��o
Prof. Dr. Aparecido Freitas (Cid�o)
Feito por: Davi Mar�al
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float circle_area, circle_radius = 10;
	
	printf("O raio do circulo � de %.2f.\n", circle_radius);
	
	//   �rea do c�rculo = pi * r�
	circle_area = M_PI * (circle_radius * circle_radius);
	
	printf("A �rea do circulo � de %.2f.", circle_area);
}
