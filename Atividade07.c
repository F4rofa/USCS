/*                      Atividade 7
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float circle_area, circle_radius = 10;
	
	printf("O raio do circulo é de %.2f.\n", circle_radius);
	
	//   Área do círculo = pi * r²
	circle_area = M_PI * (circle_radius * circle_radius);
	
	printf("A área do circulo é de %.2f.", circle_area);
	return 0;
}
