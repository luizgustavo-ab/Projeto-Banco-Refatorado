#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void CadastrarContaCorrente(){ //insere os dados da conta poupanca     

	Cliente cliente;

	cliente.contacc.saldo=0;

	FILE *arqcc;

	arqcc=fopen("contascc.txt","a+b");

	if(arqcc==NULL){
		printf("ERRO AO ABRIR O ARQUIVO");
		system("pause");
		return;
	}

		system("cls");
		printf("+--------------------------+\n");
		printf("| CADASTRAR CONTA CORRENTE |\n");
		printf("+--------------------------+\n\n");
		
		printf("INSIRA O NUMERO DA AGENCIA: \n");
		fflush(stdin);
		fgets(cliente.contacc.agencia, 6 , stdin);
    	cliente.contacc.agencia[strcspn(cliente.contacc.agencia, "\n")] = '\0';
    	
    	printf("INSIRA O NUMERO DA CONTA: \n");
		fflush(stdin);
		fgets(cliente.contacc.numconta, 20 , stdin);
    	cliente.contacc.numconta[strcspn(cliente.contacc.numconta, "\n")] = '\0';
		
		printf("INSIRA A DATA DE VENCIMENTO DA CONTA: \n");
    	printf("DIA: ");
    	fflush(stdin);
		fgets(cliente.contacc.datavencdia, 5 , stdin);
    	cliente.contacc.datavencdia[strcspn(cliente.contacc.datavencdia, "\n")] = '\0';
    	
    	printf("MES: ");
    	fflush(stdin);
    	fgets(cliente.contacc.datavencmes, 5 , stdin);
    	cliente.contacc.datavencmes[strcspn(cliente.contacc.datavencmes, "\n")] = '\0';
    	
    	printf("ANO: ");
    	fflush(stdin);
    	fgets(cliente.contacc.datavencano, 5 , stdin);
    	cliente.contacc.datavencano[strcspn(cliente.contacc.datavencano, "\n")] = '\0';
		
		printf("INSIRA O LIMITE DA CONTA: \n");
		fflush(stdin);
		scanf("%d",&cliente.contacc.limite);
		
		printf("INSIRA O NOME DO CLIENTE: \n");
		fflush(stdin);
		fgets(cliente.nomecliente, 50 , stdin);
    	cliente.nomecliente[strcspn(cliente.nomecliente, "\n")] = '\0';
		
		printf("INSIRA A SENHA DO CLIENTE: \n");
		fflush(stdin);
		fgets(cliente.senha, 7 , stdin);
    	cliente.senha[strcspn(cliente.senha, "\n")] = '\0';
		
		printf("INSIRA O CPF DO CLIENTE: \n");
		fflush(stdin);
		fgets(cliente.cpf, 12 , stdin);
    	cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';
		
		printf("INSIRA O NUMERO DE TELEFONE: \n");
		fflush(stdin);
		fgets(cliente.telefone, 15 , stdin);
    	cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';
		
		printf("INSIRA A DATA DE NASCIMENTO DIA/MES/ANO \n");
		fflush(stdin);
		scanf("%d %d %d",&cliente.nasc.dia,&cliente.nasc.mes,&cliente.nasc.ano);
		
		printf("endereco: \n");
		
		printf("CEP: ");
		scanf("%d",&cliente.endereco.cep);
		
		printf("ESTADO: ");
		fflush(stdin);
		fgets(cliente.endereco.estado, 50 , stdin);
    	cliente.endereco.estado[strcspn(cliente.endereco.estado, "\n")] = '\0';
		
		printf("CIDADE: ");
		fflush(stdin);
		fgets(cliente.endereco.cidade, 50 , stdin);
    	cliente.endereco.cidade[strcspn(cliente.endereco.cidade, "\n")] = '\0';
		
		printf("BAIRRO: ");
		fflush(stdin);
		fgets(cliente.endereco.bairro, 50 , stdin);
    	cliente.endereco.bairro[strcspn(cliente.endereco.bairro, "\n")] = '\0';
		
		printf("LOGRADOURO: ");
		fflush(stdin);
		fgets(cliente.endereco.logradouro, 50 , stdin);
    	cliente.endereco.logradouro[strcspn(cliente.endereco.logradouro, "\n")] = '\0';
    	
    	printf("RUA: ");
    	fflush(stdin);
		fgets(cliente.endereco.rua, 100, stdin);
    	cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';
		
		printf("numero da casa: ");
		scanf("%d",&cliente.endereco.numerocasa);
		
		fwrite(&cliente,sizeof(cliente),1,arqcc);
		if(ferror(arqcc)){
			printf("\nERRO NA GRAVACAO\n");
		}else{
			printf("GRAVACAO OK \n");	
			}	

	fclose(arqcc);
	system("pause");	
}

void CadastrarContaPoupanca(){ //insere os dados da conta poupanca 													
	Cliente cliente;
	cliente.contacp.saldo=0;
	FILE *arqcp;
	arqcp=fopen("contascp.txt","a+b");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
	
		system("cls");
		printf("+--------------------------+\n");
		printf("| CADASTRAR CONTA POUPANCA |\n");
		printf("+--------------------------+\n\n");
		
		printf("INSIRA O NUMERO DA AGENCIA: \n");
		fflush(stdin);
    	fgets(cliente.contacp.agencia, 6 , stdin);
    	cliente.contacp.agencia[strcspn(cliente.contacp.agencia, "\n")] = '\0';
		
		printf("INSIRA O NUMERO DA CONTA: \n");
		fflush(stdin);
    	fgets(cliente.contacp.numconta, 20 , stdin);
    	cliente.contacp.numconta[strcspn(cliente.contacp.numconta, "\n")] = '\0';
    	
    	printf("INSIRA A DATA DE VENCIMENTO DA CONTA: \n");
    	printf("DIA: ");
    	fflush(stdin);
		fgets(cliente.contacp.datavencdia, 5 , stdin);
    	cliente.contacp.datavencdia[strcspn(cliente.contacp.datavencdia, "\n")] = '\0';
    	
    	printf("MES: ");
    	fflush(stdin);
    	fgets(cliente.contacp.datavencmes, 5 , stdin);
    	cliente.contacp.datavencmes[strcspn(cliente.contacp.datavencmes, "\n")] = '\0';
    	
    	printf("ANO: ");
    	fflush(stdin);
    	fgets(cliente.contacp.datavencano, 5 , stdin);
    	cliente.contacp.datavencano[strcspn(cliente.contacp.datavencano, "\n")] = '\0';
    	
		printf("INSIRA O LIMITE DA CONTA: \n");
		fflush(stdin);
		scanf("%d",&cliente.contacp.limite);
		
		printf("INSIRA O NOME DO CLIENTE: \n");
		fflush(stdin);
    	fgets(cliente.nomecliente, 50 , stdin);
    	cliente.nomecliente[strcspn(cliente.nomecliente, "\n")] = '\0';
		
		printf("INSIRA A SENHA DO CLIENTE: \n");
		fflush(stdin);
   	 	fgets(cliente.senha, 7, stdin);
    	cliente.senha[strcspn(cliente.senha, "\n")] = '\0';
		
		printf("INSIRA O CPF DO CLIENTE: \n");
		fflush(stdin);
    	fgets(cliente.cpf, 12 , stdin);
    	cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';
		
		printf("INSIRA O NUMERO DE TELEFONE DO CLIENTE: \n");
		fflush(stdin);
   		fgets(cliente.telefone, 15 , stdin);
    	cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';
		
		printf("INSIRA A DATA DE NASCIMENTO DO CLIENTE: \n");
		printf("DIA: ");
		scanf("%d",&cliente.nasc.dia);
		
		printf("MES: ");
		scanf("%d",&cliente.nasc.mes);
		
		printf("ANO: ");
		scanf("%d",&cliente.nasc.ano);
		
		printf("INSIRA O ENDERECO DO CLIENTE: \n");
		
		printf("CEP: ");
		fflush(stdin);
		scanf("%d",&cliente.endereco.cep);
		
		printf("ESTADO: ");
		fflush(stdin);
    	fgets(cliente.endereco.estado, 50 , stdin);
    	cliente.endereco.estado[strcspn(cliente.endereco.estado, "\n")] = '\0';
		
		printf("CIDADE: ");
		fflush(stdin);
    	fgets(cliente.endereco.cidade, 50 , stdin);
    	cliente.endereco.cidade[strcspn(cliente.endereco.cidade, "\n")] = '\0';
		
		printf("BAIRRO: ");
		fflush(stdin);
    	fgets(cliente.endereco.bairro, 50 , stdin);
    	cliente.endereco.bairro[strcspn(cliente.endereco.bairro, "\n")] = '\0';
		
		printf("LOGRADOURO: ");
		fflush(stdin);
    	fgets(cliente.endereco.logradouro, 50 , stdin);
    	cliente.endereco.logradouro[strcspn(cliente.endereco.logradouro, "\n")] = '\0';
		
		printf("RUA: ");
		fflush(stdin);
    	fgets(cliente.endereco.rua, 100 , stdin);
    	cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';
		
		printf("NUMERO DA CASA: ");
		scanf("%d",&cliente.endereco.numerocasa);
		
		fwrite(&cliente,sizeof(cliente),1,arqcp);
		if(ferror(arqcp)){
		printf("\nERRO NA GRAVACAO\n");
		}else{
			printf("GRAVACAO OK\n\n");
			}
	fclose(arqcp);
	system("pause");		
}

void CadastrarFuncionarios(){//cadastra os dados dos funcionarios 
	Funcionario funcionario;
	FILE *arqfunc;
	arqfunc=fopen("funcionarios.txt","a+b");
	if(arqfunc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	system("cls");
	printf("+-----------------------+\n");
	printf("| CADASTRAR FUNCIONARIO |\n");
	printf("+-----------------------+\n\n");
		
	printf("insira o codigo do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.codigo, 20 , stdin);
	funcionario.codigo[strcspn(funcionario.codigo, "\n")] = '\0';
			
	printf("insira o cargo do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.cargo, 100 , stdin);
	funcionario.cargo[strcspn(funcionario.cargo, "\n")] = '\0';
			
	printf("insira o nome do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.nome, 50 , stdin);
	funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';
			
	printf("insira o CPF do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.cpf, 12 , stdin);
	funcionario.cpf[strcspn(funcionario.cpf, "\n")] = '\0';
			
	printf("insira a data de nascimento do funcionario DIA/MES/ANO \n");
	scanf("%d %d %d",&funcionario.nasc.dia,&funcionario.nasc.mes,&funcionario.nasc.ano);
			
	printf("insira o numero do telefone do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.telefone, 15 , stdin);
	funcionario.telefone[strcspn(funcionario.telefone, "\n")] = '\0';
			
	printf("insira o endereco do funcionario: \n");
		
	printf("CEP: \n");
	scanf("%d",&funcionario.endereco.cep);
		
	printf("estado: \n");
	fflush(stdin);
	fgets(funcionario.endereco.estado, 50 , stdin);
	funcionario.endereco.estado[strcspn(funcionario.endereco.estado, "\n")] = '\0';
		
	printf("cidade: \n");
	fflush(stdin);
	fgets(funcionario.endereco.cidade, 50 , stdin);
	funcionario.endereco.cidade[strcspn(funcionario.endereco.cidade, "\n")] = '\0';
		
	printf("bairro: \n");
	fflush(stdin);
	fgets(funcionario.endereco.bairro, 50 , stdin);
	funcionario.endereco.bairro[strcspn(funcionario.endereco.bairro, "\n")] = '\0';
		
	printf("logradouro: \n");
	fflush(stdin);
	fgets(funcionario.endereco.logradouro, 50 , stdin);
	funcionario.endereco.logradouro[strcspn(funcionario.endereco.logradouro, "\n")] = '\0';
		
	printf("RUA: \n");
	fflush(stdin);
	fgets(funcionario.endereco.rua, 50 , stdin);
	funcionario.endereco.rua[strcspn(funcionario.endereco.rua, "\n")] = '\0';
			
	printf("numero da casa: \n");
	scanf("%d",&funcionario.endereco.numerocasa);
			
	fwrite(&funcionario,sizeof(funcionario),1,arqfunc);
		
	if(ferror(arqfunc)){
		printf("\nERRO NA GRAVACAO\n");
	}else{
		printf("GRAVACAO OK\n\n");
		}
	
	fclose(arqfunc);	
	system("pause");				
}

void ConsultarContasPoupanca(){//imprime as informacoes das contas poupancas 
	char numconta[20];
	Cliente cliente;
	FILE *arqcp;
	int encontrada=0;
	arqcp=fopen("contascp.txt","rb");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(Cliente),1,arqcp) == 1){
		if(strcmp(numconta,cliente.contacp.numconta)==0){
			encontrada=1;
			printf("CONTA-POUPANCA \n");
			printf("AGENCIA: %s \n",cliente.contacp.agencia);
			printf("NUMERO DA CONTA: %s \n",cliente.contacp.numconta);
			printf("SALDO: %.2f \n",cliente.contacp.saldo);
			printf("LIMITE: %d \n",cliente.contacp.limite);
			printf("DATA DE VENCIMENTO: %s/%s/%s \n",cliente.contacp.datavencdia,cliente.contacp.datavencmes,cliente.contacp.datavencano);
			printf("NOME: %s \n",cliente.nomecliente);
			printf("SENHA: %s \n",cliente.senha);
			printf("CPF: %s \n",cliente.cpf);
			printf("TELEFONE: %s \n",cliente.telefone);
			printf("DATA DE NASCIMENTO: %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			printf("endereco: \n");
			printf("CEP: %d \n",cliente.endereco.cep);
			printf("ESTADO: %s \n",cliente.endereco.estado);
			printf("CIDADE: %s \n",cliente.endereco.cidade);
			printf("BAIRRO: %s \n",cliente.endereco.bairro);
			printf("LOGRADOURO: %s \n",cliente.endereco.logradouro);
			printf("RUA: %s \n",cliente.endereco.rua);
			printf("NUMERO DA CASA: %d \n",cliente.endereco.numerocasa);
			printf("---------------------------------------------------\n\n");	
			}
		}
		
	if(!encontrada){
		printf("CONTA NAO ENCONTRADA. \n\n");
	}
	fclose(arqcp);
	system("pause");
}

void ConsultarContasCorrente(){//imprime as informacoes das contas correntes       
	char numconta[20];
	Cliente cliente;	
	FILE *arqcc;
	int encontrada=0;
	arqcc=fopen("contascc.txt","rb");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(Cliente),1,arqcc) == 1){
		if(strcmp(numconta,cliente.contacc.numconta)==0){
			encontrada=1;
			printf("CONTA-CORRENTE\n");
			printf("AGENCIA: %s \n",cliente.contacc.agencia);
			printf("NUMERO DA CONTA: %s \n",cliente.contacc.numconta);
			printf("DATA DE VENCIMENTO DA CONTA: %s/%s/%s \n",cliente.contacc.datavencdia,cliente.contacc.datavencmes,cliente.contacc.datavencano);
			printf("NOME: %s \n",cliente.nomecliente);
			printf("SENHA: %s \n",cliente.senha);
			printf("SALDO: %.2f \n",cliente.contacc.saldo);
			printf("LIMITE: %d \n",cliente.contacc.limite);
			printf("CPF: %s \n",cliente.cpf);
			printf("TELEFONE: %s \n",cliente.telefone);
			printf("DATA DE NASCIMENTO: %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			printf("ENDERECO: \n");
			printf("CEP: %d \n",cliente.endereco.cep);
			printf("ESTADO: %s \n",cliente.endereco.estado);
			printf("CIDADE: %s \n",cliente.endereco.cidade);
			printf("BAIRRO: %s \n",cliente.endereco.bairro);
			printf("LOGRADOURO: %s \n",cliente.endereco.logradouro);
			printf("RUA: %s \n",cliente.endereco.rua);
			printf("NUMERO DA CASA: %d \n",cliente.endereco.numerocasa);
			printf("---------------------------------------------------\n\n");
			}		
		}
	if(!encontrada){
		printf("CONTA NAO ENCONTRADA.\n\n");
	}	
	fclose(arqcc);
	system("pause");
}

void ConsultarFuncionario(){//consulta funcionario 
	Funcionario funcionario;
	char codfunc[20];
	FILE *arqfunc;
	arqfunc=fopen("funcionarios.txt","rb");
	if(arqfunc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);
	fgets(codfunc, 20, stdin);
    codfunc[strcspn(codfunc, "\n")] = '\0';
		
	while(fread(&funcionario,sizeof(funcionario),1,arqfunc)==1){
		if(strcmp(codfunc,funcionario.codigo)==0){
			printf("CODIGO DO FUNCIONARIO: %s \n",funcionario.codigo);
			printf("CARGO: %s \n",funcionario.cargo);
			printf("NOME: %s \n",funcionario.nome);
			printf("CPF: %s \n",funcionario.cpf);
			printf("DATA DE NASCIMENTO: %d/%d/%d \n",funcionario.nasc.dia,funcionario.nasc.mes,funcionario.nasc.ano);
			printf("TELEFONE: %s \n",funcionario.telefone);
			printf("endereco: \n");
			printf("CEP: %d \n",funcionario.endereco.cep);
			printf("ESTADO: %s \n",funcionario.endereco.estado);
			printf("CIDADE: %s \n",funcionario.endereco.cidade);
			printf("BAIRRO: %s \n",funcionario.endereco.bairro);
			printf("LOGRADOURO: %s \n",funcionario.endereco.logradouro);
			printf("NUMERO DA CASA: %d \n",funcionario.endereco.numerocasa);
			printf("RUA: %s \n",funcionario.endereco.rua);
			printf("----------------------------------------------------\n");
		}
	}
	fclose(arqfunc);
	system("pause");
}

void ConsultarCliente(){//consulta as informacoes dos clientes  
	Cliente cliente;
	FILE *arqcp;
	FILE *arqcc;
	char nomecliente[50];
	
	arqcc=fopen("contascc.txt","rb");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
		
	arqcp=fopen("contascp.txt","rb");
	if(arqcp==NULL){
		printf("ERRO AO ABRIR O ARQUIVO");
		system("pause");
		return;
	}	
		
	printf("digite o nome do cliente: ");
	fflush(stdin);
	fgets(nomecliente, 50, stdin);
    nomecliente[strcspn(nomecliente, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(Cliente),1,arqcc)==1){
		if(strcmp(nomecliente,cliente.nomecliente)==0){
			printf("cliente: %s \n",cliente.nomecliente);
			printf("cpf: %s \n",cliente.cpf);
			printf("data de nascimento: %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			printf("telefone: %s \n",cliente.telefone);
			printf("endereco: \n");
			printf("CEP: %d \n",cliente.endereco.cep);
			printf("ESTADO: %s \n",cliente.endereco.estado);
			printf("CIDADE: %s \n",cliente.endereco.cidade);
			printf("BAIRRO: %s \n",cliente.endereco.bairro);
			printf("LOGRADOURO: %s \n",cliente.endereco.logradouro);
			printf("RUA: %s \n",cliente.endereco.rua);
			printf("NUMERO DA CASA: %d \n",cliente.endereco.numerocasa);
			printf("----------------------------------------------------\n");
		}
		
	}
	
	while(fread(&cliente,sizeof(Cliente),1,arqcp)==1){
		if(strcmp(nomecliente,cliente.nomecliente)==0){
			printf("cliente: %s \n",cliente.nomecliente);
			printf("cpf: %s \n",cliente.cpf);
			printf("data de nascimento: %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			printf("telefone: %s \n",cliente.telefone);
			printf("endereco: \n");
			printf("CEP: %d \n",cliente.endereco.cep);
			printf("ESTADO: %s \n",cliente.endereco.estado);
			printf("CIDADE: %s \n",cliente.endereco.cidade);
			printf("BAIRRO: %s \n",cliente.endereco.bairro);
			printf("LOGRADOURO: %s \n",cliente.endereco.logradouro);
			printf("RUA: %s \n",cliente.endereco.rua);
			printf("NUMERO DA CASA: %d \n",cliente.endereco.numerocasa);
			printf("----------------------------------------------------\n");
		}
		
	}
	fclose(arqcc);
	fclose(arqcp);
	system("pause");
}

void ExcluirContaCorrente(){//exclui contas correntes
    int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
	printf("***ACESSO PERMITIDO***\n\n");

	FILE *arqcc = fopen("contascc.txt", "rb");
    if (arqcc == NULL) {
        printf("ERRO AO EXCLUIR CONTA, CRIE UMA CONTA PRIMEIRO. \n\n");
        system("pause");
        return;
    }

    FILE *temparqcc = fopen("temp_contascc.txt", "w+b");
    if (temparqcc == NULL) {
        printf("ERRO AO CRIAR ARQUIVO TEMPOR�RIO\n");
        fclose(arqcc);
        system("pause");
        return;
    }

    printf("DIGITE O NUMERO DA CONTA A SER EXCLUIDA: ");
    fflush(stdin);
    fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while(fread(&cliente, sizeof(cliente), 1, arqcc)){
        if(strcmp(numconta,cliente.contacc.numconta)==0){
            found = 1;
        }else{
            fwrite(&cliente, sizeof(cliente), 1, temparqcc);
        }
    } 

    fclose(arqcc);
    fclose(temparqcc);

    if (!found) {
        printf("CONTA NAO ENCONTRADA.\n");
        remove("temp_contascc.txt");
    } else {
        remove("contascc.txt");
        rename("temp_contascc.txt", "contascc.txt");
        printf("CONTA EXCLUIDA COM SUCESSO.\n");	
    }
    system("pause");
}

void ExcluirContaPoupanca(){//exclui contas poupancas
    int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
	printf("***ACESSO PERMITIDO***\n\n");

	FILE *arqcp = fopen("contascp.txt", "rb");
    if (arqcp == NULL) {
        printf("ERRO AO EXCLUIR CONTA, CRIE UMA CONTA PRIMEIRO. \n\n");
        system("pause");
        return;
    }

    FILE *temparqcp = fopen("temp_contascp.txt", "w+b");
    if (temparqcp == NULL) {
        printf("ERRO AO CRIAR ARQUIVO TEMPOR�RIO\n");
        fclose(arqcp);
        system("pause");
        return;
    }

    printf("DIGITE O NUMERO DA CONTA A SER EXCLUIDA: ");
    fflush(stdin);
    fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while(fread(&cliente, sizeof(cliente), 1, arqcp)){
        if(strcmp(cliente.contacp.numconta, numconta) == 0){
            found = 1;
        }else{
            fwrite(&cliente, sizeof(cliente), 1, temparqcp);
        }
    } 

    fclose(arqcp);
    fclose(temparqcp);

    if(!found){
        printf("CONTA NAO ENCONTRADA.\n");
        remove("temp_contascp.txt");
    }else{
        remove("contascp.txt");
        rename("temp_contascp.txt", "contascp.txt");
        printf("CONTA EXCLUIDA COM SUCESSO.\n");
    }
    system("pause");
}

void AlterarTipoContaPoupanca(){ // altera conta poupanca para corrente
    int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;

    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }

    printf("***ACESSO PERMITIDO***\n\n");

    FILE *arqcp = fopen("contascp.txt", "r+b");
    if (arqcp == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO contascp.txt\n");
        return;
    }

    FILE *arqcc = fopen("contascc.txt", "a+b");
    if (arqcc == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO contascc.txt\n");
        fclose(arqcp);
        return;
    }

    printf("Digite o numero da conta a ser alterada: ");
    fflush(stdin);
    fgets(numconta, sizeof(numconta), stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while (fread(&cliente, sizeof(Cliente), 1, arqcp)) {
        if (strcmp(cliente.contacp.numconta, numconta) == 0) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Conta n�o encontrada.\n");
        fclose(arqcc);
        fclose(arqcp);
        return;
    }

    strcpy(cliente.contacc.agencia, cliente.contacp.agencia);
    strcpy(cliente.contacc.numconta, cliente.contacp.numconta);
    strcpy(cliente.contacc.datavencdia, cliente.contacp.datavencdia);
    strcpy(cliente.contacc.datavencmes, cliente.contacp.datavencmes);
    strcpy(cliente.contacc.datavencano, cliente.contacp.datavencano);
    cliente.contacc.saldo = cliente.contacp.saldo;
    cliente.contacc.limite = cliente.contacp.limite;

    fwrite(&cliente, sizeof(Cliente), 1, arqcc);
    if (ferror(arqcc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("CONTA ALTERADA COM SUCESSO\n");
    }

    fclose(arqcc);
    fclose(arqcp);

    arqcp = fopen("contascp.txt", "r+b");
    FILE *tempArqcp = fopen("temp_contascp.txt", "w+b");
    if (tempArqcp == NULL) {
        printf("ERRO AO CRIAR ARQUIVO TEMPOR�RIO\n");
        fclose(arqcp);
        return;
    }

    while (fread(&cliente, sizeof(Cliente), 1, arqcp)) {
        if (strcmp(cliente.contacp.numconta, numconta) != 0) {
            fwrite(&cliente, sizeof(Cliente), 1, tempArqcp);
        }
    }

    fclose(arqcp);
    fclose(tempArqcp);

    remove("contascp.txt");
    rename("temp_contascp.txt", "contascp.txt");

    system("pause");
}

void AlterarDadosContaPoupanca(){//altera dados da conta poupanca
	int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
    
    printf("***ACESSO PERMITIDO***\n\n");
    
    FILE *arqcp = fopen("contascp.txt", "r+b");
    if (arqcp == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        system("pause");
        return;
    }
    
	printf("Digite o numero da conta a ser alterada: ");
    fflush(stdin);
    fgets(numconta, sizeof(numconta), stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while(fread(&cliente, sizeof(cliente), 1, arqcp)){
        if(strcmp(cliente.contacp.numconta,numconta)==0){
            found = 1;
            break;
        }
    }

	if(!found){
        printf("Conta nao encontrada.\n");
        fclose(arqcp);
        system("pause");
        return;
    }

    fseek(arqcp, -(long int)sizeof(cliente), SEEK_CUR);

    printf("INSIRA OS DADOS NOVOS DA CONTA:\n\n");
    
    printf("INSIRA O LIMITE DISPONIVEL: \n");
    scanf("%d",&cliente.contacp.limite);
    
    printf("INSIRA A DATA DE VENCIMENTO DA CONTA: \n");
   	printf("DIA: ");
    fflush(stdin);
	fgets(cliente.contacp.datavencdia, 5 , stdin);
    cliente.contacp.datavencdia[strcspn(cliente.contacp.datavencdia, "\n")] = '\0';
    	
    printf("MES: ");
    fflush(stdin);
    fgets(cliente.contacp.datavencmes, 5 , stdin);
    cliente.contacp.datavencmes[strcspn(cliente.contacp.datavencmes, "\n")] = '\0';
    	
    printf("ANO: ");
    fflush(stdin);
    fgets(cliente.contacp.datavencano, 5 , stdin);
    cliente.contacp.datavencano[strcspn(cliente.contacp.datavencano, "\n")] = '\0';
  
    fwrite(&cliente, sizeof(cliente), 1, arqcp);
    if(ferror(arqcp)){
        printf("\nERRO NA GRAVACAO\n");
    }else{
        printf("CONTA ALTERADA COM SUCESSO\n");
    }
	fclose(arqcp);
	system("pause");
}

void AlterarDadosContaCorrente(){//altera os dados das contas correntes
    int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
    
    printf("***ACESSO PERMITIDO***\n\n");

    FILE *arqcc = fopen("contascc.txt", "r+b");
    if (arqcc == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        system("pause");
        return;
    }

	printf("DIGITE O NUMERO DA CONTA A SER ALTERADA: ");
    fflush(stdin);
    fgets(numconta, sizeof(numconta), stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while(fread(&cliente, sizeof(cliente), 1, arqcc)){
        if(strcmp(cliente.contacc.numconta,numconta)==0){
            found = 1;
            break;
        }
    }

	if(!found){
        printf("Conta nao encontrada.\n");
        fclose(arqcc);
        system("pause");
        return;
    }

    fseek(arqcc, -(long int)sizeof(cliente), SEEK_CUR);

    printf("INSIRA OS DADOS NOVOS DA CONTA:\n\n");
    printf("INSIRA O LIMITE DISPONIVEL: \n");
    scanf("%d",&cliente.contacc.limite);
    
    printf("INSIRA A DATA DE VENCIMENTO DA CONTA: \n");
    printf("DIA: ");
    fflush(stdin);
	fgets(cliente.contacc.datavencdia, 5 , stdin);
    cliente.contacc.datavencdia[strcspn(cliente.contacc.datavencdia, "\n")] = '\0';
    	
    printf("MES: ");
   	fflush(stdin);
   	fgets(cliente.contacc.datavencmes, 5 , stdin);
    cliente.contacc.datavencmes[strcspn(cliente.contacc.datavencmes, "\n")] = '\0';
    	
    printf("ANO: ");
    fflush(stdin);
    fgets(cliente.contacc.datavencano, 5 , stdin);
    cliente.contacc.datavencano[strcspn(cliente.contacc.datavencano, "\n")] = '\0';
    
    fwrite(&cliente, sizeof(cliente), 1, arqcc);
    if (ferror(arqcc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("DADOS ALTERADOS COM SUCESSO\n");
    }
	fclose(arqcc);
	system("pause");
}

void AlterarTipoContaCorrente() {
    int senhaadm = 54321;
    int senha3;
    char numconta[20];
    int found = 0;
    Cliente cliente;
    FILE *arqcc;
    FILE *arqcp;
    FILE *temparqcc;

    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }

    printf("***ACESSO PERMITIDO***\n\n");

    arqcc = fopen("contascc.txt", "r+b");
    if (arqcc == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO contascc.txt\n");
        return;
    }

    arqcp = fopen("contascp.txt", "a+b");
    if (arqcp == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO contascp.txt\n");
        fclose(arqcc);
        return;
    }

    printf("DIGITE O NUMERO DA CONTA A SER ALTERADA: ");
    fflush(stdin);
    fgets(numconta, sizeof(numconta), stdin);
    numconta[strcspn(numconta, "\n")] = '\0';

    while (fread(&cliente, sizeof(Cliente), 1, arqcc)) {
        if (strcmp(cliente.contacc.numconta, numconta) == 0) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Conta n�o encontrada.\n");
        fclose(arqcc);
        fclose(arqcp);
        return;
    }

    strcpy(cliente.contacp.agencia, cliente.contacc.agencia);
    strcpy(cliente.contacp.numconta, cliente.contacc.numconta);
    strcpy(cliente.contacp.datavencdia, cliente.contacc.datavencdia);
    strcpy(cliente.contacp.datavencmes, cliente.contacc.datavencmes);
    strcpy(cliente.contacp.datavencano, cliente.contacc.datavencano);
    cliente.contacp.saldo = cliente.contacc.saldo;
    cliente.contacp.limite = cliente.contacc.limite;

    fwrite(&cliente, sizeof(Cliente), 1, arqcp);
    if (ferror(arqcp)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }

    fclose(arqcp);
    fclose(arqcc);

    arqcc = fopen("contascc.txt", "r+b");
    temparqcc = fopen("temp_contascc.txt", "w+b");
    if (temparqcc == NULL) {
        printf("ERRO AO CRIAR ARQUIVO TEMPOR�RIO\n");
        fclose(arqcc);
        return;
    }

    while (fread(&cliente, sizeof(Cliente), 1, arqcc)) {
        if (strcmp(cliente.contacc.numconta, numconta) != 0) {
            fwrite(&cliente, sizeof(Cliente), 1, temparqcc);
        }
    }

    fclose(arqcc);
    fclose(temparqcc);

    remove("contascc.txt");
    rename("temp_contascc.txt", "contascc.txt");

    printf("CONTA ALTERADA COM SUCESSO\n");
    system("pause");
}

void AlterarClienteContaCorrente(){//altera os dados dos clientes
	int senhaadm = 54321;
    int senha3;
    char nomecliente[50];
    int found = 0;
    Cliente cliente;
	FILE *arqcc;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
    
    printf("***ACESSO PERMITIDO***\n\n");

    arqcc=fopen("contascc.txt","r+b");
    if(arqcc==NULL){
		printf("ERRO AO ABRIR O ARQUIVO");
		system("pause");
		return;
	}
	
    printf("DIGITE O NOME DO CLIENTE A SER ALTERADO: ");
    fflush(stdin);
    fgets(nomecliente, 50, stdin);
    nomecliente[strcspn(nomecliente, "\n")] = '\0';
    
    while(fread(&cliente, sizeof(Cliente), 1, arqcc)){
        if(strcmp(cliente.nomecliente,nomecliente)==0){
            found = 1;
            break;
        }
    }
    
    if(!found){
        printf("Conta n�o encontrada.\n");
        fclose(arqcc);
        system("pause");
        return;
    }

	fseek(arqcc, -(long int)sizeof(Cliente), SEEK_CUR);
	
    printf("insira o numero do telefone do cliente: \n");
	fflush(stdin);
    fgets(cliente.telefone, 15 , stdin);
    cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';
		
	printf("ENDERECO: \n");
		
	printf("ESTADO: ");
	fflush(stdin);
    fgets(cliente.endereco.estado, 50 , stdin);
    cliente.endereco.estado[strcspn(cliente.endereco.estado, "\n")] = '\0';
		
	printf("CIDADE: ");
	fflush(stdin);
    fgets(cliente.endereco.cidade, 50 , stdin);
    cliente.endereco.cidade[strcspn(cliente.endereco.cidade, "\n")] = '\0';
		
	printf("BAIRRO: ");
	fflush(stdin);
    fgets(cliente.endereco.bairro, 50 , stdin);
    cliente.endereco.bairro[strcspn(cliente.endereco.bairro, "\n")] = '\0';
		
	printf("LOGRADOURO: ");
	fflush(stdin);
    fgets(cliente.endereco.logradouro, 50 , stdin);
    cliente.endereco.logradouro[strcspn(cliente.endereco.logradouro, "\n")] = '\0';
	
	printf("RUA: ");
	fflush(stdin);
    fgets(cliente.endereco.rua, 100 , stdin);
    cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';	

	printf("NUMERO DA CASA: ");
    scanf("%d", &cliente.endereco.numerocasa);

    fwrite(&cliente, sizeof(cliente), 1, arqcc);
    if (ferror(arqcc)) {
        printf("\nERRO NA GRAVACAO\n");
        fclose(arqcc);
        system("pause");
        return;
    } else {
        printf("GRAVACAO OK\n");
    }
	fclose(arqcc);
	system("pause");
}

void AlterarClienteContaPoupanca(){//altera os dados dos clientes
	int senhaadm = 54321;
    int senha3;
    char nomecliente[50];
    int found = 0;
    Cliente cliente;
    FILE *arqcp;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
    
    printf("***ACESSO PERMITIDO***\n\n");

	arqcp=fopen("contascp.txt","r+b");
	if(arqcp==NULL){
		printf("ERRO AO ABRIR O ARQUIVO");
		system("pause");
		return;
	}
	
    printf("DIGITE O NOME DO CLIENTE A SER ALTERADO: ");
    fflush(stdin);
    fgets(nomecliente, 50, stdin);
    nomecliente[strcspn(nomecliente, "\n")] = '\0';
    
    while(fread(&cliente, sizeof(cliente), 1, arqcp)){
        if(strcmp(cliente.nomecliente,nomecliente)==0){
            found = 1;
            break;
        }
    }
    
    if(!found){
        printf("Conta n�o encontrada.\n");
        fclose(arqcp);
        system("pause");
        return;
    }

	fseek(arqcp, -(long int)sizeof(Cliente), SEEK_CUR);
	
    printf("insira o numero do telefone do cliente: \n");
	fflush(stdin);
    fgets(cliente.telefone, 15 , stdin);
    cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';
		
	printf("endereco: \n");
		
	printf("ESTADO: ");
	fflush(stdin);
    fgets(cliente.endereco.estado, 50 , stdin);
    cliente.endereco.estado[strcspn(cliente.endereco.estado, "\n")] = '\0';
		
	printf("CIDADE: ");
	fflush(stdin);
    fgets(cliente.endereco.cidade, 50 , stdin);
    cliente.endereco.cidade[strcspn(cliente.endereco.cidade, "\n")] = '\0';
		
	printf("BAIRRO: ");
	fflush(stdin);
    fgets(cliente.endereco.bairro, 50 , stdin);
   	cliente.endereco.bairro[strcspn(cliente.endereco.bairro, "\n")] = '\0';
		
	printf("LOGRADOURO: ");
	fflush(stdin);
   	fgets(cliente.endereco.logradouro, 50 , stdin);
   	cliente.endereco.logradouro[strcspn(cliente.endereco.logradouro, "\n")] = '\0';
		
	printf("RUA: ");
	fflush(stdin);
    fgets(cliente.endereco.rua, 100 , stdin);
    cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';
		
	printf("NUMERO DA CASA: ");
    scanf("%d", &cliente.endereco.numerocasa);

	fwrite(&cliente, sizeof(cliente), 1, arqcp);
    if (ferror(arqcp)) {
        printf("\nERRO NA GRAVACAO\n");
        fclose(arqcp);
        system("pause");
        return;
    } else {
        printf("GRAVACAO OK\n");
    }
    
    fclose(arqcp);
    system("pause");
}

void AlterarFuncionario(){//altera os dados dos funcionarios

    int senhaadm = 54321;
    int senha3;
    char codfunc[20];
    int found = 0;
    Funcionario funcionario;
    
    printf("DIGITE A SENHA DO ADMINISTRADOR PARA ACESSAR O MENU: \n");
    scanf("%d", &senha3);
    if (senhaadm != senha3) {
        printf("***ACESSO NEGADO***\n");
        return;
    }
    
    printf("***ACESSO PERMITIDO***\n\n");

    
    printf("DIGITE O CODIGO DO FUNCIONARIO A SER ALTERADO: ");
    fflush(stdin);
    gets(codfunc);

    FILE *arqfunc = fopen("funcionarios.txt", "r+b");
    if (arqfunc == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return;
    }
    
    while(fread(&funcionario, sizeof(funcionario), 1, arqfunc)){
        if(strcmp(funcionario.codigo,codfunc)==0){
            found = 1;
            break;
        }
    }

	if(!found){
        printf("Conta n�o encontrada.\n");
        fclose(arqfunc);
        system("pause");
        return;
    }


    fseek(arqfunc, -(long int)sizeof(Funcionario), SEEK_CUR);
    
    printf("insira o codigo do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.codigo, 20 , stdin);
	funcionario.codigo[strcspn(funcionario.codigo, "\n")] = '\0';
	
	printf("insira o cargo do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.cargo, 100 , stdin);
	funcionario.cargo[strcspn(funcionario.cargo, "\n")] = '\0';
	
	printf("insira o numero de telefone do funcionario: \n");
	fflush(stdin);
	fgets(funcionario.telefone, 15 , stdin);
	funcionario.telefone[strcspn(funcionario.telefone, "\n")] = '\0';
	
	printf("insira o endere�o do funcionario: \n");
	
	printf("CEP: \n");
	scanf("%d",&funcionario.endereco.cep);
	
	printf("estado: \n");
	fflush(stdin);
	fgets(funcionario.endereco.estado, 50 , stdin);
	funcionario.endereco.estado[strcspn(funcionario.endereco.estado, "\n")] = '\0';
	
	printf("cidade: ");
	fflush(stdin);
	fgets(funcionario.endereco.cidade, 50 , stdin);
	funcionario.endereco.cidade[strcspn(funcionario.endereco.cidade, "\n")] = '\0';
	
	printf("bairro: \n");
	fflush(stdin);
	fgets(funcionario.endereco.bairro, 50 , stdin);
	funcionario.endereco.bairro[strcspn(funcionario.endereco.bairro, "\n")] = '\0';
	
	printf("logradouro: \n");
	fflush(stdin);
	fgets(funcionario.endereco.logradouro, 50 , stdin);
	funcionario.endereco.logradouro[strcspn(funcionario.endereco.logradouro, "\n")] = '\0';
		
	printf("RUA: \n");
	fflush(stdin);
	fgets(funcionario.endereco.rua, 50 , stdin);
	funcionario.endereco.rua[strcspn(funcionario.endereco.rua, "\n")] = '\0';
	
	printf("numero da casa: \n");
	scanf("%d",&funcionario.endereco.numerocasa);

    fwrite(&funcionario, sizeof(Funcionario), 1,arqfunc);
    
    if(ferror(arqfunc)){
        printf("\nERRO NA GRAVACAO\n");
    }else{
        printf("GRAVACAO OK\n");
    }
    fclose(arqfunc);
    system("pause");
}

void RelatorioPoupanca(){//gera relatorios das contas poupancas
	char numconta[20];
	Cliente cliente;
	FILE *arqcp, *relatoriocp;
	
	arqcp=fopen("contascp.txt","rb");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
	
	relatoriocp = fopen("relatoriocp.csv", "a");
    if (relatoriocp == NULL) {
        printf("ERRO AO CRIAR O ARQUIVO RELATORIOCP");
        fclose(arqcp);
        system("pause");
        return;
    }
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(Cliente),1,arqcp) == 1){
		if(strcmp(numconta,cliente.contacp.numconta)==0){
			fprintf(relatoriocp,"CONTA-POUPANCA \n");
			fprintf(relatoriocp,"AGENCIA, %s \n",cliente.contacp.agencia);
			fprintf(relatoriocp,"NUMERO DA CONTA, %s \n",cliente.contacp.numconta);
			fprintf(relatoriocp,"DATA DE VENCIMENTO, %s/%s/%s \n",cliente.contacp.datavencdia,cliente.contacp.datavencmes,cliente.contacp.datavencano);
			fprintf(relatoriocp,"SALDO, %.2f \n",cliente.contacp.saldo);
			fprintf(relatoriocp,"LIMITE, %d \n",cliente.contacp.limite);
			fprintf(relatoriocp,"NOME, %s \n",cliente.nomecliente);
			fprintf(relatoriocp,"SENHA, %s \n",cliente.senha);
			fprintf(relatoriocp,"CPF, %s \n",cliente.cpf);
			fprintf(relatoriocp,"TELEFONE, %s \n",cliente.telefone);
			fprintf(relatoriocp,"DATA DE NASCIMENTO, %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			fprintf(relatoriocp,"ENDERECO, \n");
			fprintf(relatoriocp,"CEP, %d \n",cliente.endereco.cep);
			fprintf(relatoriocp,"ESTADO, %s \n",cliente.endereco.estado);
			fprintf(relatoriocp,"CIDADE, %s \n",cliente.endereco.cidade);
			fprintf(relatoriocp,"BAIRRO, %s \n",cliente.endereco.bairro);
			fprintf(relatoriocp,"LOGRADOURO, %s \n",cliente.endereco.logradouro);
			fprintf(relatoriocp,"RUA, %s \n",cliente.endereco.rua);
			fprintf(relatoriocp,"NUMERO DA CASA, %d \n",cliente.endereco.numerocasa);
			fprintf(relatoriocp,"__________________________________________________ \n");
			}
		}
	printf("RELATORIO GERADO COM SUCESSO.");
	fclose(arqcp);
	fclose(relatoriocp);
	system("relatoriocp.csv");
}

void RelatorioCorrente(){//gera relatorios das contas correntes
	char numconta[20];
	Cliente cliente;
	FILE *arqcc, *relatoriocc;
	
	arqcc=fopen("contascc.txt","rb");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
	
	relatoriocc = fopen("relatoriocc.csv", "a");
    if (relatoriocc == NULL) {
        printf("ERRO AO CRIAR O ARQUIVO EXTRATO");
        fclose(arqcc);
        system("pause");
        return;
    }
	
	fprintf(relatoriocc,"AGENCIA,NUMERO DA CONTA,SALDO,LIMITE,NOME,SENHA,CPF,TELEFONE,DATA DE NASCIMENTO,ENDERECO,CEP,ESTADO,CIDADE,BAIRRO,LOGRADOURO,RUA,NUMERO DA CASA \n");
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(Cliente),1,arqcc) == 1){
		if(strcmp(numconta,cliente.contacc.numconta)==0){
			fprintf(relatoriocc,"CONTA-CORRENTE \n");
			fprintf(relatoriocc,"AGENCIA, %s \n",cliente.contacc.agencia);
			fprintf(relatoriocc,"NUMERO DA CONTA, %s \n",cliente.contacc.numconta);
			fprintf(relatoriocc,"DATA DE VENCIMENTO, %s/%s/%s \n",cliente.contacc.datavencdia,cliente.contacc.datavencmes,cliente.contacc.datavencano);
			fprintf(relatoriocc,"SALDO, %.2f \n",cliente.contacc.saldo);
			fprintf(relatoriocc,"LIMITE, %d \n",cliente.contacc.limite);
			fprintf(relatoriocc,"NOME, %s \n",cliente.nomecliente);
			fprintf(relatoriocc,"SENHA, %s \n",cliente.senha);
			fprintf(relatoriocc,"CPF, %s \n",cliente.cpf);
			fprintf(relatoriocc,"TELEFONE, %s \n",cliente.telefone);
			fprintf(relatoriocc,"DATA DE NASCIMENTO, %d/%d/%d \n",cliente.nasc.dia,cliente.nasc.mes,cliente.nasc.ano);
			fprintf(relatoriocc,"ENDERECO, \n");
			fprintf(relatoriocc,"CEP, %d \n",cliente.endereco.cep);
			fprintf(relatoriocc,"ESTADO, %s \n",cliente.endereco.estado);
			fprintf(relatoriocc,"CIDADE, %s \n",cliente.endereco.cidade);
			fprintf(relatoriocc,"BAIRRO, %s \n",cliente.endereco.bairro);
			fprintf(relatoriocc,"LOGRADOURO, %s \n",cliente.endereco.logradouro);
			fprintf(relatoriocc,"RUA, %s \n",cliente.endereco.rua);
			fprintf(relatoriocc,"NUMERO DA CASA, %d \n",cliente.endereco.numerocasa);
			fprintf(relatoriocc,"__________________________________________________ \n");
			}
		}
	printf("RELATORIO GERADO COM SUCESSO. \n");
	fclose(arqcc);
	fclose(relatoriocc);
	system("relatoriocc.csv");
}

void LimiteContaPoupanca(){//verifica o limite das contas poupancas
	char numconta[20];
	Cliente cliente;
	FILE *arqcp;
	arqcp=fopen("contascp.txt","rb");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqcp) == 1){
		if(strcmp(numconta,cliente.contacp.numconta)==0){
			printf("LIMITE : %d \n",cliente.contacp.limite);
		}else{
			printf("CONTA NAO ENCONTRADA. \n");
		}
	}
	fclose(arqcp);
	system("pause");
}

void LimiteContaCorrente(){//verifica o limite das contas correntes
	char numconta[20];
	Cliente cliente;
	FILE *arqcc;
	arqcc=fopen("contascc.txt","rb");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqcc) == 1){
		if(strcmp(numconta,cliente.contacc.numconta)==0){
			printf("LIMITE : %d \n",cliente.contacc.limite);
		}else{
			printf("CONTA NAO ENCONTRADA. \n");
		}
	}
	fclose(arqcc);
	system("pause");
}

void SaldoContaPoupanca(){//verifica o saldo das contas poupancas
	char numconta[20];
	Cliente cliente;
	FILE *arqcp;
	arqcp=fopen("contascp.txt","rb");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqcp) == 1){
		if(strcmp(numconta,cliente.contacp.numconta)==0){
			printf("SALDO : %.2f \n",cliente.contacp.saldo);
		}else{
			printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
	}
	fclose(arqcp);
	system("pause");
}

void SaldoContaCorrente(){//verifica o saldo das contas correntes
	char numconta[20];
	Cliente cliente;
	FILE *arqcc;
	arqcc=fopen("contascc.txt","rb");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqcc) == 1){
		if(strcmp(numconta,cliente.contacc.numconta)==0){
			printf("SALDO : %.2f \n",cliente.contacc.saldo);
		}else{
			printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
	}
	fclose(arqcc);
	system("pause");
}

void DepositoContaPoupanca(){//verifica o deposito das contas poupancas
	char numconta[20];
	int found=0;
	Cliente cliente;
	cliente.contacp.trans.deposito=0;
	FILE *arqcp;
	FILE *arqtrancp;
	
	arqcp=fopen("contascp.txt","r+b");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	arqtrancp=fopen("transacoescp.txt","a+b");
	if(arqtrancp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
	
	printf("DIGITE O NUMERO DA CONTA PARA DESPOSITO: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while (fread(&cliente, sizeof(cliente), 1, arqcp)) {
        if(strcmp(cliente.contacp.numconta,numconta)==0){
			found = 1;
            break;
        }else{
        	printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
    }

    fseek(arqcp, -(long int)sizeof(cliente), SEEK_CUR);
    
    printf("INSIRA O VALOR DO DEPOSITO: ");
    scanf("%f",&cliente.contacp.trans.deposito);

    cliente.contacp.saldo = cliente.contacp.saldo + cliente.contacp.trans.deposito;
    cliente.contacp.trans.saque=0;
    
    fwrite(&cliente, sizeof(cliente), 1, arqcp);
    if (ferror(arqcp)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
    
	fwrite(&cliente, sizeof(cliente),1,arqtrancp);
	if (ferror(arqtrancp)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
    
	fclose(arqcp);
	fclose(arqtrancp);
	system("pause");
}

void DepositoContaCorrente(){//verifica o deposito das contas correntes
	char numconta[20];
	int found=0;
	Cliente cliente;
	FILE *arqcc , *arqtrancc;
	
	arqcc=fopen("contascc.txt","r+b");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	arqtrancc=fopen("transacoescc.txt","a+b");
	if(arqtrancc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}

	printf("DIGITE O NUMERO DA CONTA PARA DESPOSITO: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while (fread(&cliente, sizeof(cliente), 1, arqcc)) {
        if(strcmp(cliente.contacc.numconta,numconta)==0){
            found = 1;
            break;
        }else{
        	printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
    }

    fseek(arqcc, -(long int)sizeof(cliente), SEEK_CUR);
    
    printf("INSIRA O VALOR DO DEPOSITO: ");
    scanf("%f",&cliente.contacc.trans.deposito);
    
    cliente.contacc.saldo = cliente.contacc.saldo + cliente.contacc.trans.deposito;
    cliente.contacc.trans.saque=0;
    
    fwrite(&cliente, sizeof(cliente), 1, arqcc);
    if (ferror(arqcc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
	
	fwrite(&cliente, sizeof(cliente),1,arqtrancc);
	if (ferror(arqtrancc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
	
	fclose(arqcc);
	fclose(arqtrancc);
	system("pause");
	
}

void SaqueContaPoupanca(){//verifica o saque das contas poupancas
	char numconta[20];
	int found=0;
	Cliente cliente;
	FILE *arqcp;
	FILE *arqtrancp;
	
	arqcp=fopen("contascp.txt","r+b");
	if(arqcp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	arqtrancp=fopen("transacoescp.txt","a+b");
	if(arqtrancp==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	}
	
	printf("DIGITE O NUMERO DA CONTA PARA SAQUE: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while (fread(&cliente, sizeof(cliente), 1, arqcp)) {
        if(strcmp(cliente.contacp.numconta,numconta)==0){
            found = 1;
            break;
        }else{
        	printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
    }

    fseek(arqcp, -(long int)sizeof(cliente), SEEK_CUR);
    
    printf("INSIRA O VALOR DO SAQUE: ");
    scanf("%f",&cliente.contacp.trans.saque);
    if(cliente.contacp.trans.saque>cliente.contacp.saldo){
    	printf("SALDO INSUFICIENTE.\n");
    	system("pause");
    	return;
	}
    cliente.contacp.saldo = cliente.contacp.saldo - cliente.contacp.trans.saque;
    cliente.contacp.trans.deposito=0;
    
    fwrite(&cliente, sizeof(cliente), 1, arqcp);
    if (ferror(arqcp)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
    
	fwrite(&cliente, sizeof(cliente),1,arqtrancp);
	if (ferror(arqtrancp)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
    
	fclose(arqcp);
	fclose(arqtrancp);
	system("pause");
	
}

void SaqueContaCorrente(){//verifica o saque das contas correntes
	char numconta[20];
	int found=0;
	Cliente cliente;
	FILE *arqcc;
	FILE *arqtrancc;
	
	arqcc=fopen("contascc.txt","r+b");
	if(arqcc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO, CRIE UMA CONTA NO MENU FUNCIONARIO PRIMEIRO. \n\n");
	system("pause");
	return;
	}
	
	arqtrancc=fopen("transacoescc.txt","a+b");
	if(arqtrancc==NULL){
	printf("ERRO AO ABRIR O ARQUIVO");
	system("pause");
	return;
	}
	
	printf("DIGITE O NUMERO DA CONTA PARA SAQUE: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while (fread(&cliente, sizeof(Cliente), 1, arqcc)) {
        if(strcmp(cliente.contacc.numconta,numconta)==0){
            found = 1;
            break;
        }else{
        	printf("CONTA NAO ENCONTRADA. \n");
        	system("pause");
        	return;
		}
    }

    fseek(arqcc, -(long int)sizeof(cliente), SEEK_CUR);
    
    printf("INSIRA O VALOR DO SAQUE: ");
    scanf("%f",&cliente.contacc.trans.saque);
    if(cliente.contacc.trans.saque>cliente.contacc.saldo){
    	printf("SALDO INSUFICIENTE.");
	}
    
    cliente.contacc.saldo = cliente.contacc.saldo - cliente.contacc.trans.saque;
    cliente.contacc.trans.deposito=0;
    
    fwrite(&cliente, sizeof(cliente), 1, arqcc);
    if (ferror(arqcc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }
    
    fwrite(&cliente, sizeof(cliente), 1,arqtrancc);
	if (ferror(arqtrancc)) {
        printf("\nERRO NA GRAVACAO\n");
    } else {
        printf("GRAVACAO OK\n");
    }

    fclose(arqtrancc);
	fclose(arqcc);
	system("pause");
}

void ExtratoPoupanca(){//verifica o extrato das contas poupancas
	char numconta[20];
	Cliente cliente;
	FILE *arqtrancp, *extratocp;
	
	arqtrancp=fopen("transacoescp.txt","rb");
	if(arqtrancp==NULL){
	printf("ERRO AO CRIAR O ARQUIVO TRANSACOES, EFETUE UMA TRANSACAO NA CONTA PARA CRIAR O ARQUIVO DE TRANSACOES.\n\n");
	system("pause");
	return;
	}
	
	extratocp = fopen("extratocp.csv", "a");
    if (extratocp == NULL) {
        printf("ERRO AO CRIAR O ARQUIVO EXTRATO, EFETUE UMA TRANSACAO PARA CRIAR O ARQUIVO DE EXTRATO.\n\n");
        fclose(arqtrancp);
        system("pause");
        return;
    }

	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqtrancp) == 1){
		if(strcmp(numconta,cliente.contacp.numconta)==0){
			fprintf(extratocp,"CONTA-POUPANCA \n");
			fprintf(extratocp,"NUMERO DA CONTA,  %s \n",cliente.contacp.numconta);
			fprintf(extratocp,"DEPOSITO, + %.2f \n",cliente.contacp.trans.deposito);
			fprintf(extratocp,"SAQUE, - %.2f \n",cliente.contacp.trans.saque);
			fprintf(extratocp,"SALDO, %.2f \n",cliente.contacp.saldo);
			fprintf(extratocp,"---------------------------------------------------\n\n");
			printf("CONTA-POUPANCA \n");
			printf("NUMERO DA CONTA:  %s \n",cliente.contacp.numconta);	
			printf("DEPOSITO: + %.2f \n",cliente.contacp.trans.deposito);
			printf("SAQUE: - %.2f \n",cliente.contacp.trans.saque);
			printf("SALDO: %.2f \n",cliente.contacp.saldo);
			printf("---------------------------------------------------\n\n");
			}
		}
	fclose(arqtrancp);
	fclose(extratocp);
	system("extratocp.csv");
}

void ExtratoCorrente(){//verifica o extrato das contas correntes
	char numconta[20];
	Cliente cliente;
	FILE *arqtrancc, *extratocc;
	
	arqtrancc=fopen("transacoescc.txt","rb");
	if(arqtrancc==NULL){
	printf("ERRO AO CRIAR O ARQUIVO TRANSACOES, EFETUE UMA TRANSACAO NA CONTA PARA CRIAR O ARQUIVO DE TRANSACOES. \n\n");
	system("pause");
	return;
	}
	
	extratocc = fopen("extratocc.csv", "a");
    if (extratocc == NULL) {
        printf("ERRO AO CRIAR O ARQUIVO EXTRATO, EFETUE UMA TRANSACAO PARA CRIAR O ARQUIVO DE EXTRATO. \n\n");
        fclose(arqtrancc);
        system("pause");
        return;
    }
	
	printf("DIGITE O NUMERO DA CONTA A SER CONSULTADA: ");
	fflush(stdin);	
	fgets(numconta, 20, stdin);
    numconta[strcspn(numconta, "\n")] = '\0';
		
	while(fread(&cliente,sizeof(cliente),1,arqtrancc) == 1){
		if(strcmp(numconta,cliente.contacc.numconta)==0){
			fprintf(extratocc,"CONTA-CORRENTE \n");
			fprintf(extratocc,"NUMERO DA CONTA,  %s \n",cliente.contacc.numconta);
			fprintf(extratocc,"DEPOSITO, + %.2f \n",cliente.contacc.trans.deposito);
			fprintf(extratocc,"SAQUE, - %.2f \n",cliente.contacc.trans.saque);
			fprintf(extratocc,"SALDO, %.2f \n",cliente.contacc.saldo);
			fprintf(extratocc,"---------------------------------------------------\n\n");
			printf("CONTA-CORRENTE \n");
			printf("NUMERO DA CONTA:  %s \n",cliente.contacc.numconta);
			printf("DEPOSITO: + %.2f \n",cliente.contacc.trans.deposito);
			printf("SAQUE: - %.2f \n",cliente.contacc.trans.saque);
			printf("SALDO: %.2f \n",cliente.contacc.saldo);
			printf("---------------------------------------------------\n\n");	
			}
		}
	fclose(arqtrancc);
	fclose(extratocc);
	system("extratocc.csv");
}




























