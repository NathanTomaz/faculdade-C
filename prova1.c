#include<stdio.h>
#include<stdlib.h>

int maioroumenor(int a,int b){

	if (a > b)
	printf("\t\t\t%d eh maior que %d", a, b);
	else if (b > a)
	printf("\t\t\t%d eh maior que %d", b, a);
	else printf("\t\t\tIGUAIS");
	return 0;
}
int diferenca(int d,int e){
	int f;
	f = d - e;
	printf("\t\t\tRESULTADO: %d", f);
	return f;
}


int main(void){

    int opcao;
    int a, b, c, d, e, f;

    do
    {
    printf("\t\t\nMenu do curso C\n");
    printf("0. Sair\n");
    printf("1. Qual maior numero \n");
    printf("2. Diferença entre 2 numeros \n");
    printf("3. Repetir o menu\n");
    printf("4. Ler mais uma vez o menu\n");


    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 0:
                system("clear || cls");
                printf("Vc saiu...\n");

        case 1:
                system("clear || cls");
                printf("Retorna o numero maior digitado");
				printf("\nInforme 2 numeros: ");
				scanf("%d%d", &a, &b);
				maioroumenor(a, b);
				break;


        case 2:
                printf("Diferença entre 2 numeros");
				printf("\nInforme 2 numeros: ");
				scanf("%d%d", &d, &e);
				diferenca(d, e);
				break;
        case 3:
        case 4:
                system("clear || cls");
                break;
        default:
                system("clear || cls");
                printf("OPCAO INVALIDA!\tTente Novamente.\n");
                }
                system ("cls || clear");
                } while(opcao);

    }
