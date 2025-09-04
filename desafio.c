#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void distribuiNotas(int saque) {
    int um = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0;
    int valor = saque;
    
    while (valor >= 100) {
        valor -= 100;
        cem++;
    }
    while (valor >= 50) {
        valor -= 50;
        cinquenta++;
    }
    while (valor >= 20) {
        valor -= 20;
        vinte++;
    }
    while (valor >= 10) {
        valor -= 10;
        dez++;
    }
    while (valor >= 5) {
        valor -= 5;
        cinco++;
    }
    while (valor >= 2) {
        valor -= 2;
        dois++;
    }
    while (valor >= 1) {
        valor -= 1;
        um++;
    }
    
    printf("Seu saque de R$%d,00 foi contabilizado em: \n", saque);
    if (cem > 0) printf("%d notas de R$100,00 \n", cem);
    if (cinquenta > 0) printf("%d notas de R$50,00 \n", cinquenta);
    if (vinte > 0) printf("%d notas de R$20,00 \n", vinte);
    if (dez > 0) printf("%d notas de R$10,00 \n", dez);
    if (cinco > 0) printf("%d notas de R$5,00 \n", cinco);
    if (dois > 0) printf("%d notas de R$2,00 \n", dois);
    if (um > 0) printf("%d moedas de R$1,00 \n", um);
}

int main() {
    int escolha, saldo = 1000, limite = 2300;
    bool verifica = false;
    char decisaoLimite;
    printf("Bem vindo ao caixa so de saque!!\n");
    while (!verifica) {
        printf("Digite qual sera sua opção: \n");
        printf("1) Sacar \n");
        printf("2) Sair \n");
        scanf("%d", &escolha);
        if (escolha == 1) {
            int saque = 0;
            printf("Digite quanto voce quer sacar: \n");
            scanf("%d", &saque);
            if (saque <= 0) {
                printf("Digite um valor valido, maior que 0!\n");
                continue;
            }
            if (saque <= saldo) {
                saldo -= saque;
                printf("Saque realizado com sucesso!\n");
                distribuiNotas(saque);
            } else if (saque <= saldo + limite) {
                printf("Saldo insuficiente, deseja usar o limite especial? (S/N)\n");
                scanf(" %c", &decisaoLimite);
                if (decisaoLimite == 'S' || decisaoLimite == 's') {
                    int limiteUsado = saque - saldo;
                    printf("Será usado %d do limite para sacar\n", limiteUsado);
                    saldo = 0;
                    limite -= limiteUsado;
                    printf("Saque realizado com sucesso!\n");
                    distribuiNotas(saque);
                } else {
                    printf("O limite não foi usado, saindo para o menu...\n");
                }
            } else {
                printf("Não possui saldo nem limite o suficiente para o saque\n");
            }
        } else if (escolha == 2) {
            printf("Saindo do caixa...\n");
            verifica = true;
        } else {
            printf("Digite um valor válido!!\n");
            continue;
        }
    }
    printf("Obrigado por vir ao caixa!!");
    return 0;
}
