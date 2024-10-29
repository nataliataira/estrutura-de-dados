
# Tipo Abstrato de Dados (TAD)

Esta atividade aborda a implementação de **Tipos Abstratos de Dados (TAD)** em C. Um TAD permite ao programador definir novos tipos de dados de maneira personalizada, facilitando a representação de informações de forma mais intuitiva do que usando apenas os tipos primitivos da linguagem.

## O que é um TAD?

Tipos Abstratos de Dados são estruturas que encapsulam dados e operações em um tipo definido pelo programador. Eles fornecem uma maneira de organizar e manipular dados de forma a torná-los mais compreensíveis e reutilizáveis, especialmente em programas complexos.

Em C, podemos implementar TADs utilizando a palavra-chave `struct`, que define uma estrutura de dados personalizada. Por exemplo:

```c
struct Registro {
   char  nome[20];
   char  endereco[20];
   int   telefone;
};

struct Registro novaPessoa;
```

Neste exemplo, `struct Registro` define uma estrutura que pode armazenar informações sobre uma pessoa, como nome, endereço e telefone.

## Objetivo da Atividade

O objetivo desta atividade é entender e implementar TADs básicos em C, desenvolvendo funções que permitam a criação, manipulação e exibição de dados usando estruturas personalizadas.

## Estrutura do Código

- **`tad.c`**: Arquivo principal que contém a definição do TAD e as funções para manipulação dos dados.
- **`README.md`**: Este arquivo, que explica o conceito de TAD e fornece instruções para compilar e executar o código.

## Atividades

1. **O que é um Tipo Abstrato de Dados (TAD) e qual a característica fundamental na sua utilização?**
   
   Um TAD é uma estrutura de dados definida pelo programador que organiza dados e funções de forma modular, oferecendo uma forma direta de representar informações. A característica fundamental de um TAD é o encapsulamento, que oculta a implementação interna dos dados e expõe apenas as operações necessárias para manipulação.

2. **Quais as vantagens de se programar com TADs?**
   
   - Organização e clareza: TADs tornam o código mais estruturado e fácil de entender.
   - Reutilização: TADs permitem que tipos de dados personalizados e suas funções sejam reutilizados em várias partes do programa.
   - Encapsulamento: A implementação interna do TAD é ocultada, reduzindo erros e facilitando a manutenção.

3. **Crie um TAD que implemente o controle de uma conta bancária, implemente funções para inicializar, depositar, sacar e imprimir o saldo.**

   tad.c

## Compilação e Execução

Para compilar e executar o código, siga os passos abaixo:

```bash
cd tad
gcc -o tad tad.c
./tad
```

## Conclusão

TADs são fundamentais para a construção de programas organizados e modulares, permitindo uma melhor organização dos dados e uma maior facilidade na manutenção do código.
