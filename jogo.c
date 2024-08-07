#include <stdio.h>
#include <string.h>
// \n

/*
Regras: "tesoura corta papel,
		papel cobre pedra,
		pedra esmaga lagarto, 
		agarto envenena Spock,
		Spock dobra tesoura,
		tesoura decapita lagarto,
		lagarto come papel,
		papel refuta Spock,
		Spock vaporiza pedra
		e, como sempre, pedra esmaga tesoura”.
*/

void main(){
	char nome[100];
	int i, escolha_jogador, escolha_maquina, qtd_rodadas, jogar = 1;
	int vitorias = 0, derrotas = 0, empates = 0;

	while(jogar != 0){
		system("cls");
		fflush(stdin);
		printf("----- PEDRA PAPEL TESOURA LAGARTO SPOCK -----");
		printf("\n\nVoce deseja jogar contra a maquina?");
		printf("\n\n1 - Jogar\n2 - Ler regras\n0 - Sair\n>> ");
		scanf("%d",&jogar);
		switch(jogar)
		{
		case 1:
			system("cls");
			fflush(stdin);
			
			printf("Informe o nome do jogador: ");
			gets(nome);
			system("PAUSE");
			break;
		case 2:
			system("cls");
			printf("----- REGRAS ------\n\n");
			system("PAUSE");
			break;
		case 0:
			break;
		default:
			system("cls");
			printf("Opcao invalida!\n\n");
			system("PAUSE");
		}
	}
	
}