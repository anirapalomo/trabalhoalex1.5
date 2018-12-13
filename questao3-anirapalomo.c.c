//matricula: 0050011648
//Anira Palomo

#include<stdio.h>

int main()
{
int x, contador = 0;
float produto[5], menor = 99999999999;
for(x=0; x<5; x++){
	printf("Insira o objeto %d: ", x+1);
	scanf("%f", &produto[x]);
}
for(x=0; x<5; x++){
	if(produto[x]<menor){
		menor = produto[x]; 
		contador=0;
	}
	if(produto[x]==menor){
		contador++;
	}

}

printf("\nO menor peso e %.2f", menor);
printf("\nO peso %.2f e encotrando %d vezes:", menor, contador);

getch();
return 0;

}

