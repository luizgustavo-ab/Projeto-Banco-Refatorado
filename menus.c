#include "menus.h"
#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

void subsubmenualterarcontacc(){//altera dados conta corrente
	int i;
	do{
		system("cls");
		printf("+-----------------------+\n");
		printf("| ALTERAR CONTA CORRENTE|\n");
		printf("+-----------------------+\n\n");
		printf("[1]ALTERAR CONTA CORRENTE PARA POUPANCA \n");
		printf("[2]ALTERAR DADOS DA CONTA\n");
		printf("[3]VOLTAR\n");
		scanf("%d",&i);
		switch(i){
			case 1:
				AlterarTipoContaCorrente();
			break;
			case 2:
				AlterarDadosContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void menufuncionario(){ //menu para acessar as opcoes dos funcionarios
	int i;

		do{
			system("cls");
			printf("+------------------+\n");
			printf("| MENU FUNCIONARIO |\n");
			printf("+------------------+\n\n");
			printf("[1] <-- ABERTURA DE CONTA \n");
			printf("[2] <-- ENCERRAMENTO DE CONTA \n");
			printf("[3] <-- CONSULTAR DADOS \n");
			printf("[4] <-- ALTERAR DADOS \n");
			printf("[5] <-- CADASTRO DE FUNCIONARIOS \n");
			printf("[6] <-- GERAR RELATORIOS \n");
			printf("[7] <-- SAIR \n");
			scanf("%d",&i);
		
		switch(i){
			case 1:
				menuaberturadeconta();
			break;
			case 2:
				menuexcluircontas();
			break;
			case 3:
				menuconsultardados();
			break;
			case 4:
				menualterardados();
			break;
			case 5:
				CadastrarFuncionarios();
			break;
			case 6:
				menurelatorios();
			break;
			case 7:
				break;
			default:
				printf("OPCAO INVALIDA.");
			}
		}while(i!=7);
}

void subsubmenualterarcontacp(){//altera dados conta poupanca
	int i;
	do{
		system("cls");
		printf("+-----------------------+\n");
		printf("| ALTERAR CONTA POUPANCA|\n");
		printf("+-----------------------+\n\n");
		printf("[1]ALTERAR CONTA POUPANCA PARA CORRENTE \n");
		printf("[2]ALTERAR DADOS DA CONTA\n");
		printf("[3]VOLTAR\n");
		scanf("%d",&i);
		switch(i){
			case 1:
				AlterarTipoContaPoupanca();
			break;
			case 2:
				AlterarDadosContaPoupanca();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenualterarcontas(){//menu que escolhe as contas que vao ser alteradas
	int i;
	do{
		system("cls");
		printf("+----------------+\n");
		printf("| ALTERAR CONTAS |\n");
		printf("+----------------+\n\n");
		printf("[1]ALTERAR CONTA POUPANCA\n");
		printf("[2]ALTERAR CONTA CORRENTE\n");
		printf("[3]VOLTAR\n");
		scanf("%d",&i);
		switch(i){
			case 1:
				subsubmenualterarcontacp();
			break;
			case 2:
				subsubmenualterarcontacc();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenuconsultarcontas(){//menu para escolher qual conta que vai ser consultada
	int i;
	do{//esse menu e para selecionar o tipo de conta que vai ser consultada
		system("cls");
		printf("SELECIONE A CONTA A SER CONSULTADA:\n");//esse menu e para selecionar o tipo de conta que vai ser consultada
		printf("[1]CONTA POUPANCA\n");
		printf("[2]CONTA CORRENTE\n");
		printf("[3]VOLTAR\n");
		scanf("%d",&i);
		switch(i){
			case 1:
				ConsultarContasPoupanca();//esse menu e para selecionar o tipo de conta que vai ser consultada
			break;
			case 2:
				ConsultarContasCorrente();//esse menu e para selecionar o tipo de conta que vai ser consultada
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}	
	}while(i!=3);
}

void subsubmenualterarcliente(){
		int i;
	do{
		system("cls");
		printf("+---------------+\n");
		printf("| ALTERAR DADOS |\n");
		printf("+---------------+\n\n");
		printf(" [1] <-- ALTERAR CLIENTE CONTA POUPANCA \n");
		printf(" [2] <-- ALTERAR CLIENTE CONTA CORRENTE \n");
		printf(" [3] <-- VOLTAR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				AlterarClienteContaPoupanca();
			break;
			case 2:
				AlterarClienteContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void menuaberturadeconta(){//menu de abertura de contas
	int i;
	do{
		system("cls");
		printf("+--------------+\n");
		printf("| ABRIR CONTAS |\n");
		printf("+--------------+\n\n");
		printf(" [1] <-- CONTA POUPANCA - CP \n");
		printf(" [2] <-- CONTA CORRENTE - CC \n");
		printf(" [3] <-- voltar \n");
		scanf("%d",&i);
		
		switch(i){
		case 1:
			CadastrarContaPoupanca();
		break;
		case 2:
			CadastrarContaCorrente();
		break;	
		case 3:
			break;
		default:
			printf("OPCAO INVALIDA.\n");
		}	
	}while(i!=3);	
}

void menuexcluircontas(){//menu excluir contas
	int i;
	do{
		system("cls");
		printf("+----------------+\n");
		printf("| EXCLUIR CONTAS |\n");
		printf("+----------------+\n\n");
		printf("ESCOLHA QUAL CONTA EXCLUIR \n");
		printf("[1] CONTA-POUPANCA \n");
		printf("[2] CONTA-CORRENTE \n");
		printf("[3] VOLTAR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				ExcluirContaPoupanca();
			break;
			case 2:
				ExcluirContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void menuconsultardados(){//menu que consulta os dados
	int i;
	do{
		system("cls");
		printf("+-----------------+\n");
		printf("| CONSULTAR DADOS |\n");
		printf("+-----------------+\n\n");
		printf("[1] <-- CONSULTAR CONTA \n");
		printf("[2] <-- CONSULTAR FUNCIONARIO \n");
		printf("[3] <-- CONSULTAR CLIENTE \n");
		printf("[4] <-- VOLTAR \n");
		scanf("%d",&i);
		switch(i){
			case 1:
				submenuconsultarcontas();
				break;
			case 2:
				ConsultarFuncionario();//consulta funcionario
			break;
			case 3:   //colocar consultar cliente
				ConsultarCliente();
			break;
			case 4:
				break;
			default:
				printf("OPCAO INVALIDA.\n");				
		}
	}while(i!=4);
}

void menualterardados(){//menu que altera os dados
	int i;
	do{
		system("cls");
		printf("+---------------+\n");
		printf("| ALTERAR DADOS |\n");
		printf("+---------------+\n\n");
		printf(" [1] <-- ALTERAR CONTA \n");
		printf(" [2] <-- ALTERAR FUNCIONARIO \n");
		printf(" [3] <-- ALTERAR CLIENTE \n");
		printf(" [4] <-- VOLTAR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				submenualterarcontas();
			break;
			case 2:
				AlterarFuncionario();
			break;
			case 3:
				subsubmenualterarcliente();
			break;
			case 4:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=4);
}

void menurelatorios(){//menu que gera relatrios
	int i;
	do{
		system("cls");
		printf("+------------------+\n");
		printf("| GERAR RELATORIOS |\n");
		printf("+------------------+\n\n");
		printf(" [1] <-- GERAR RELATORIO CONTA-POUPANCA \n");
		printf(" [2] <-- GERAR RELATORIO CONTA-CORRENTE \n");
		printf(" [3] <-- VOLTAR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				RelatorioPoupanca();
			break;
			case 2:
				RelatorioCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}



void verificarsenhaadm(){
	
	int senhaadm,senha3;
	senhaadm=54321;
	
	printf("digite a senha para  acessar menu: \n");
	scanf("%d",&senha3);
	
	if(senhaadm==senha3){
		system("cls");
		printf("***ACESSO PERMITIDO***\n\n");
	}else{
		printf("***ACESSO NEGADO***\n");
		system("pause");
	}
}



void verificarsenhafunc(){
	int senhafunc,senha2;
	senhafunc=12345;
	
	printf("digite a senha para  acessar menu: \n");
	scanf("%d",&senha2);
	
	if(senhafunc==senha2){
		system("cls");
		menufuncionario();
	}else{
		printf("***ACESSO NEGADO***\n");
		return;
	}
}

void submenuconsultarlimite(){
	int i;
	do{
		system("cls");
		printf("CONSULTAR LIMITE \n\n");
		printf("[1] <-- CONSULTAR LIMITE CONTA POUPANCA \n");
		printf("[2] <-- CONSULTAR LIMITE CONTA CORRENTE \n");
		printf("[3] <-- VOLTAR \n");
		scanf("%d",&i);		
		switch(i){
			case 1:
				LimiteContaPoupanca();
			break;
			case 2:
				LimiteContaCorrente();	
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenuextrato(){
	int i;
	do{
		system("cls");
		printf("SAQUE \n\n");
		printf("[1] <-- EXTRATO CONTA POUPANCA \n");
		printf("[2] <-- EXTRATO CONTA CORRENTE \n");
		printf("[3] <-- VOLTAR \n");
		scanf("%d",&i);		
		switch(i){
			case 1:
				ExtratoPoupanca();
			break;
			case 2:
				ExtratoCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenusaque(){
	int i;
	do{
		system("cls");
		printf("SAQUE \n\n");
		printf("[1] <-- SACAR CONTA POUPANCA \n");
		printf("[2] <-- SACAR CONTA CORRENTE \n");
		printf("[3] <-- VOLTAR \n");
		scanf("%d",&i);
		switch(i){
			case 1:
				SaqueContaPoupanca();
			break;
			case 2:
				SaqueContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenudeposito(){
	int i;
	do{
		system("cls");
		printf("DEPOSITO \n\n");
		printf("[1] <-- DEPOSITAR CONTA POUPANCA \n");
		printf("[2] <-- DEPOSITAR CONTA CORRENTE \n");
		printf("[3] <-- VOLTAR \n");
		scanf("%d",&i);
		switch(i){
			case 1:
				DepositoContaPoupanca();
			break;
			case 2:
				DepositoContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void submenusaldo(){
	int i;
	do{
		system("cls");
		printf("VERIFICAR SALDO \n\n");
		printf("[1] <-- SALDO CONTA POUPANCA \n");
		printf("[2] <-- SALDO CONTA CORRENTE \n");
		printf("[3] <-- VOLTAR \n");
		scanf("%d",&i);
		switch(i){
			case 1:
				SaldoContaPoupanca();
			break;
			case 2:
				SaldoContaCorrente();
			break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=3);
}

void menucliente(){
	int i;
	
	do{
		system("cls");
		printf("+--------------+\n");
		printf("| MENU CLIENTE |\n");
		printf("+--------------+\n\n");
		printf("[1] <-- SALDO \n");
		printf("[2] <-- DEPOSITO \n");
		printf("[3] <-- SAQUE \n");
		printf("[4] <-- EXTRATO \n");
		printf("[5] <-- CONSULTAR LIMITE \n");
		printf("[6] <-- SAIR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				submenusaldo();
			break;
			case 2:
				submenudeposito();
			break;
			case 3:
				submenusaque();
			break;
			case 4:
				submenuextrato();
			break;
			case 5:
				submenuconsultarlimite();
			break;
			case 6:
				break;
			default:
				printf("OPCAO INVALIDA.\n");
		}
	}while(i!=6);
}

void menuprincipal(){
	int i;
	do{
		system("cls");
		printf("[1] <-- funcionario \n");
		printf("[2] <-- cliente \n");
		printf("[3] <-- SAIR \n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				verificarsenhafunc();
				break;
			case 2:
				menucliente();
				break;
			case 3:
				break;
			default:
				printf("OPCAO INVALIDA.\n");			
		}
	}while(i!=3);
}



