#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int escolha;
    bool verifica = false;
    printf("Bem vindo ao caixa so de saque!!\n");
    while (!verifica) {
        printf("Digite qual sera sua opção: \n");
        printf("1) Sacar \n");
        printf("2) Sair \n");
        scanf("%d", &escolha);
        if (escolha == 1) {
            int um = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0, em_dinheiro = 0, saque = 0;
            printf("Digite quanto voce quer sacar: \n");
            scanf("%d", &saque);
            while (saque != em_dinheiro) {
                if (em_dinheiro + 100 <= saque) {
                    while (em_dinheiro + 100 <= saque) {
                        em_dinheiro += 100;
                        cem += 1;
                    }
                } else if (em_dinheiro + 50 <= saque) {
                    while (em_dinheiro + 50 <= saque) {
                        em_dinheiro += 50;
                        cinquenta += 1;
                    }
                } else if (em_dinheiro + 20 <= saque) {
                    while (em_dinheiro + 20 <= saque) {
                        em_dinheiro += 20;
                        vinte += 1;
                    }
                } else if (em_dinheiro + 10 <= saque) {
                    while (em_dinheiro + 10 <= saque) {
                        em_dinheiro += 10;
                        dez += 1;
                    }
                } else if (em_dinheiro + 5 <= saque) {
                    while (em_dinheiro + 5 <= saque) {
                        em_dinheiro += 5;
                        cinco += 1;
                    }
                } else if (em_dinheiro + 2 <= saque) {
                    while (em_dinheiro + 2 <= saque) {
                        em_dinheiro += 2;
                        dois += 1;
                    }
                } else if (em_dinheiro + 1 <= saque) {
                    while (em_dinheiro + 1 <= saque) {
                        em_dinheiro += 1;
                        um += 1;
                    }
                } 
            }
            printf("Seu saque de R$%d,00 foi composto de: \n%d notas de R$100,00 \n%d notas de R$50,00 \n%d notas de R$20,00 \n%d notas de R$10,00 \n%d notas de R$5,00 \n%d notas de R$2,00 \n%d moedas de R$1,00 \n", saque, cem, cinquenta, vinte, dez, cinco, dois, um);
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
