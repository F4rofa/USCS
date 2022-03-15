/*                      Atividade 3
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

#include <stdio.h>

int main(void)
{
	int A = 10, B = 2, C = 3, D = 5, R1, R2, R3;
	
	A += 2; // A = A + 2 -> A = 12
	B -= 1; // B = B + 1 -> B = 1
	C *= 2; // C = C * 2 -> C = 6
	D *= 3; // D = D * 3 -> D = 15
	
	R1 = ++A + ++B + ++C + ++D; // R1 = 12 + 1 + 6 + 15 = 38 
	R2 = A++; // R2 = 13, A = 14
	R3 = ++A; // R3 = 15, A = 15
	
	printf("R1 = %d\n", R1); // 38
	printf("R2 = %d\n", R2); // 13
	printf("R3 = %d\n", R3); // 15
	printf("A = %d", A); // 15 
	return 0;
}
