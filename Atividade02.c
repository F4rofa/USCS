/*                      Atividade 2
Algoritmos e Estrutura de Dados I - Ciência da Computação
Prof. Dr. Aparecido Freitas (Cidão)
Feito por: Davi Marçal
*/

# include <stdio.h>

int main (void)
{
	int A, B, C, R1, R2, Q1, Q2, V; 
	
	A = 10; B = 20; C = 3;
	
	Q1 = B/A; // 2
	Q2 = B/3; // 6 (OBS: Só retorna número inteiro)
	R1 = A%C; // % -> Resto da divisão (1) 
	R2 = B%C; // 2 
	
	V = Q1 + Q2 + R1 + R2; // V = 2 + 6 + 1 + 2
	printf("V = %d", V); // V = 11
	return 0;
}
