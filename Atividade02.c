/*                      Atividade 2
Algoritmos e Estrutura de Dados I - Ci�ncia da Computa��o
Prof. Dr. Aparecido Freitas (Cid�o)
Feito por: Davi Mar�al
*/

# include <stdio.h>

int main (void)
{
	int A, B, C, R1, R2, Q1, Q2, V; 
	
	A = 10; B = 20; C = 3;
	
	Q1 = B/A; // 2
	Q2 = B/3; // 6 (OBS: S� retorna n�mero inteiro)
	R1 = A%C; // % -> Resto da divis�o (1) 
	R2 = B%C; // 2 
	
	V = Q1 + Q2 + R1 + R2; // V = 2 + 6 + 1 + 2
	printf("V = %d", V); // V = 11
}
