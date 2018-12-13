//matricula: 0050011648
//Anira Palomo

#include <stdio.h>

int main()
{
int x, y, soma = 0, matriz[4][4];

printf ("Insira uma matriz 4x4:\n\n");

for (x = 0; x < 4; x++){
	for (y = 0; y < 4; y++){
	printf ("Insira valores da posicao %d %d: ", x+1, y+1);
	scanf ("%d", &matriz[x][y]);
	}
}

//somando a linha 3
for (y = 0; y < 4; y++){
	soma = soma + matriz[2][y];
}

//somando a coluna 2
for (x = 0; x < 4; x++){
	soma = soma + matriz[x][1];
}

printf ("O somatorio da 3 linha + 2 coluna: %d\n", soma);

system("pause");
return 0;
}
