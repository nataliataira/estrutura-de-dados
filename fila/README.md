
# Estrutura de Dados: Fila

Esta atividade explora a implementação de uma **Fila** em C, uma estrutura de dados que segue o princípio **FIFO** (*First In, First Out*), onde o primeiro elemento inserido é o primeiro a ser removido.

## O que é uma Fila?

Uma fila é uma estrutura de dados linear que permite a inserção de elementos em uma extremidade, chamada de final, e a remoção de elementos na outra extremidade, chamada de início. Esse comportamento segue o conceito de "primeiro a entrar, primeiro a sair", onde o primeiro elemento inserido na fila é o primeiro a ser processado e removido.

## Atividade

1. **O que é e como funciona uma estrutura do tipo fila?**
   
   - Uma fila é uma estrutura de dados em que a ordem dos elementos é mantida de acordo com o princípio FIFO (First In, First Out). Elementos são adicionados ao final da fila e removidos do início.

2. **Em que situações uma fila pode ser utilizada?**
   
   - Filas são usadas em várias situações onde é necessário gerenciar tarefas ou processos em ordem de chegada. Exemplos incluem:
     - Agendamento de processos e tarefas.
     - Filas de impressão.
     - Filas de atendimento em sistemas bancários e de saúde.

3. **Implemente uma fila dinâmica de TADs de Cliente de um banco** que contém:
   - **Atributos**: `nome`, `agencia`, `conta`, `saldo`.
   - **Funções**:
     - `criaFila`: Cria e inicializa uma nova fila de clientes.
     - `colocaNaFila`: Adiciona um cliente ao final da fila.
     - `tiraDaFila`: Remove o cliente do início da fila.
     - `filaVazia`: Verifica se a fila está vazia.
   
   fila.c

## Estrutura do Código

- **`fila.c`**: Arquivo contendo a implementação da fila com as operações para a estrutura de dados dinâmica de clientes de um banco.
- **`README.md`**: Este arquivo, que explica o conceito de fila e as atividades propostas.

## Compilação e Execução

Para compilar e executar o código, utilize os seguintes comandos:

```bash
cd fila
gcc -o fila fila.c
./fila
```

## Conclusão

As filas são estruturas de dados fundamentais para problemas que exigem o processamento ordenado de tarefas, sendo amplamente utilizadas em sistemas operacionais, gerenciamento de processos e sistemas de atendimento.
