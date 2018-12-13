//matricula: 0050011648
//Anira Palomo

#include <stdio.h>

int main()
{

int x, tamanho, contador = 0;
char palavra[200], car;

printf("Insira um palavra : \n");
gets(palavra);
tamanho = strlen(palavra);

printf("Defina qual caracter deseja analisar: ");
scanf("%c", &car);
for(x = 0; x<tamanho; x++){
	if(palavra[x] == car){
		contador++;
	}
}
printf("A letra %c repete %d vezes na palavra %s: ", car, contador, palavra);

system("pause");
return 0;
}
