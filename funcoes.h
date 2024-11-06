#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct{//data de nascimento
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{//endereco
	int cep;
	int numerocasa;
	char rua[100];
	char bairro[50];
	char cidade[50];
	char estado[50];
	char logradouro[50];
}End;

typedef struct{//transacoes
	char tipo;
	float deposito;
	float saque;
}Trans;

typedef struct{//conta poupanca
	char numconta[20];
	char agencia[6];
	float saldo; 
	int limite;
	char codigo[3];
	char datavencdia[5];
	char datavencmes[5];
	char datavencano[5];
	Trans trans;
}Contacp;

typedef struct{//conta corrente
	char numconta[20];
	char agencia[6];	
	int limite;
	char datavencdia[5];
	char datavencmes[5];
	char datavencano[5];
	float saldo;
	char codigo[3];
	Trans trans;
}Contacc;

typedef struct{//cliente
	char nomecliente[50];
	char cpf[12];
	char telefone[15];
	char senha[7];
	Data nasc;
	End endereco;
	Contacp contacp;
	Contacc contacc;
}Cliente;

typedef struct{//funcionario
	char codigo[20];
	char cargo[100];
	char nome[50];
	char cpf[12];
	char telefone[15];
	Data nasc;
	End endereco;
}Funcionario;

void CadastrarContaCorrente();
void CadastrarContaPoupanca();
void CadastrarFuncionarios();
void ConsultarContasPoupanca();
void ConsultarContasCorrente();
void ConsultarFuncionario();
void ConsultarCliente();
void ExcluirContaCorrente();
void ExcluirContaPoupanca();
void AlterarTipoContaPoupanca();
void AlterarDadosContaPoupanca();
void AlterarDadosContaCorrente();
void AlterarTipoContaCorrente();
void AlterarClienteContaCorrente();
void AlterarClienteContaPoupanca();
void AlterarFuncionario();
void SaldoContaPoupanca();
void SaldoContaCorrente();
void DepositoContaPoupanca();
void DepositoContaCorrente();
void SaqueContaPoupanca();
void SaqueContaCorrente();
void ExtratoPoupanca();
void ExtratoCorrente();
void LimiteContaPoupanca();
void LimiteContaCorrente();
void VerificarSenhaADM();
void VerificarSenhaFuncionario();
void RelatorioPoupanca();
void RelatorioCorrente();





#endif
