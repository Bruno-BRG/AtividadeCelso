// Feito por Celso Barreto

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo;
    char cpf[15];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[31];
    double salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    printf("Digite o nome do funcionario: ");
    fgets(funcionario.nome, 50, stdin);
    
    printf("Digite a idade do funcionario: ");
    scanf("%d", &funcionario.idade);
    getchar(); 
    
    printf("Digite o sexo do funcionario (M/F): ");
    scanf("%c", &funcionario.sexo);
    getchar();
    
    printf("Digite o CPF do funcionario: ");
    fgets(funcionario.cpf, 15, stdin);
    
    printf("Digite a data de nascimento do funcionario (DD/MM/AAAA): ");
    fgets(funcionario.dataNascimento, 11, stdin);
    
    printf("Digite o codigo do setor onde o funcionario trabalha (0-99): ");
    scanf("%d", &funcionario.codigoSetor);
    getchar(); 
    
    printf("Digite o cargo que o funcionario ocupa: ");
    fgets(funcionario.cargo, 31, stdin);
    
    printf("Digite o salario do funcionario: ");
    scanf("%lf", &funcionario.salario);

    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s", funcionario.cpf);
    printf("Data de Nascimento: %s", funcionario.dataNascimento);
    printf("Codigo do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salario: %.2lf\n", funcionario.salario);

    return 0;
}
