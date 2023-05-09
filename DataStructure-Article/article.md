# Análise: Existe diferença entre os algoritmos de ordenação?

## Introdução: O mundo da ordenação

Imagine o quão dificultoso seria viver em um mundo caótico onde não existe lógica e qualquer ação é trabalhosa, como se procurassemos uma agulha no palheiro, imagine o quão difícil seria procurar um nome em uma agenda telefônica, uma palavra em um dicionário, ou seu salgadinho favorito em um enorme supermercado. 

É ai que entra a ordenação, viver em um mundo ordenado é bem mais lindo, fácil e organizado, todas as tarefas automaticamente se tornam mais leves e menos custosas pois seria mais fácil encontrar qualquer coisa e chegar em qualquer lugar. 

O nosso computador pensa da mesma forma, a ordenação é um dos processos mais importantes na computação, pois permite que os dados sejam manupulados e acessados de maneira mais eficiente. Por exemplo, ao procurar a palavra "perfeito" em um dicionário podemos aplicar o algoritmo de busca binária e rapidamente achar o que queremos, muito diferente de procurar o mesmmo nome em um dicionário desordenado, teriamos que ler as palavras uma-a-uma até achar o "perfeito". 

Existem diversos algoritmos de ordenação, cada um com suas próprias caracteristicas, complexidade e eficiência, além da finalidade de cada um, nesse artico iremos discutir sobre os seis algoritmos mais usados e conhecidos na computação. A escolha do melhor algoritmo de ordenação impacta diretamente no desempenho da ordenação e no uso dos recursos computacionais. 

## Descrição: Uma apresentação dos algoritmos e do Big(O)

Antes de começar a falar sobre os algoritmos de ordenação existe um termo no qual é preciso ter conhecimento para falar sobre a complexidade dos algoritmos e sobre o tempo de execução de cada um. 

### Big(O) 
A notação big(O) (ou grande O) é uma notação usada na ciência da computação para descrever o desempenho assintótico de um algoritmo (assintótico significa para todos os valores suficientemente grandes). É uma forma de medir o tempo que um algoritmo leva para executar em relação ao tamanho da entrada do problema. 

**O que isso significa?** A notação Big(O) representa a complexidade do pior caso de um algoritmo, o tempo máximo que ele pode levar para resolver um problema. Essa notação descreve como o tempo vai aumentar se o tamanho do problema também aumentar. Naturalmente, saber disso é útil pois podemos comparar algoritmos com diferentes complexidades e escolher o mais adequado para a uma tarefa em específico e garantir que o tempo de execução seja otimizado. 

### Os algoritmos: 
1. Bubble sort: 
O bubble sort é um algoritmo de ordenação dos mais simples. Esse algoritmo tem a ideia de percorrer uma lista diversas vezes e em cada vez fazer o maior valor da sequência ir para o final da lista.
Esse algoritmo tem complexidade O(n²) visto que possui um loop dentro do outro, um loop vai passar por toda a lista repetidamente enquanto o outro vai fazer as devidas ordenações. 


