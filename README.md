# Caixa de Saque Automático

Este projeto é um programa em C que simula um caixa eletrônico simples, permitindo ao usuário realizar saques e visualizar a composição do valor sacado em notas e moedas.

## Funcionalidades

- **Menu Inicial:** O usuário pode escolher entre sacar dinheiro ou sair do programa.
- **Saque:** Ao escolher sacar, o usuário informa o valor desejado.
- **Composição do Saque:** O programa calcula e exibe quantas notas de cada valor (R$100, R$50, R$20, R$10, R$5, R$2) e moedas de R$1 serão entregues para compor o valor solicitado.
- **Validação:** O sistema valida as opções do menu e solicita nova entrada em caso de valor inválido.

## Como usar

1. Compile o arquivo `nseioqla.c` com um compilador C.
2. Execute o programa no terminal.
3. Escolha a opção desejada e siga as instruções para realizar o saque.

## Observações

- O cálculo das notas e moedas é feito de forma sequencial, sempre utilizando o maior valor possível primeiro.
- O programa é totalmente interativo via terminal.
- Não há verificação de saldo ou limites de saque.
