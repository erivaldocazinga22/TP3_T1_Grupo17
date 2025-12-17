# 📌 3º Trabalho Prático – Estrutura de Dados I

## TAD Pilhas Dinâmicas – Maior Retângulo em Histograma

## 📚 Descrição

Este projecto implementa um **Tipo Abstrato de Dados (TAD) Pilha Dinâmica** em linguagem **C**, aplicado à resolução do problema do **maior retângulo possível num histograma**, conforme o enunciado do **3º Trabalho Prático da disciplina Estrutura de Dados I**.

O programa utiliza **pilhas dinâmicas** para armazenar índices das barras do histograma e aplica um algoritmo eficiente para calcular a maior área possível.

## 🎯 Objectivo

* Implementar uma **Pilha Dinâmica**
* Aplicar o algoritmo do **Maior Retângulo no Histograma**
* Utilizar **alocação dinâmica de memória**
* Desenvolver um **menu interativo**
* Organizar o código de forma modular

## 🗂 Estrutura do Projecto

```
3TP_T1_Grupo17/
│
├── pilha.h      # Interface do TAD Pilha
├── pilha.c      # Implementação da Pilha e do algoritmo
├── main.c       # Programa principal (menu e entrada de dados)
├── Makefile     # Compilação do projecto
└── README.md    # Documentação
```

## 🧠 Algoritmo do Maior Retângulo

O algoritmo percorre o histograma barra a barra:

1. Empilha índices quando a altura é crescente
2. Desempilha quando encontra uma barra menor
3. Calcula a área do retângulo usando:

   * **altura da barra removida**
   * **largura calculada com base na pilha**
4. Atualiza a maior área encontrada
5. A barra fictícia de altura `0` força o cálculo das áreas restantes


## 📥 Entrada de Dados

O utilizador informa:

* Número de barras do histograma
* Altura de cada barra (valores inteiros positivos)

Exemplo:

```
2 1 5 6 2 3
```


## 📤 Saída

O programa apresenta:

```
Maior area do retangulo: 10
```

## ⚙️ Compilação e Execução

### 🔧 Compilar

### ▶️ Executar

```bash
make run
```

## 👩‍🏫 Disciplina

**Estrutura de Dados I**
3º Trabalho Prático – Prática de Pilhas
## 👨‍🎓 Autores

* Estudantes: <br/>
**Diangienda Nkana**  - 20240092 <br/>
**Ivanildo Almeida**  - 20240147 <br/>
**Erivaldo Caginga**  - 20241000 <br/>
* Turma: T1
* Grupo: 17