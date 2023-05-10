# Análise: Existe diferença entre os algoritmos de ordenação?

Os algoritmos de ordenação são rotinas computacionais que permitem que um conjunto de dados seja organizado em uma ordem específica. Eles são amplamente utilizados em várias aplicações, como classificação de resultados de pesquisa na web, processamento de grandes conjuntos de dados, organização de informações em bancos de dados e muito mais.

Para escolher o algoritmo de ordenação adequado, é importante considerar o tamanho dos dados e a complexidade da lista que se deseja ordenar, bem como a eficiência necessária para completar a tarefa. Algoritmos mais simples, como o Bubble Sort e o Selection Sort, são mais eficientes para conjuntos de dados menores, enquanto algoritmos mais complexos, como o Merge Sort e o Quick Sort, são mais adequados para conjuntos de dados maiores.

## Introdução: O mundo da ordenação.

Imagine o quão dificultoso seria viver em um mundo caótico onde não existe ordem alfabética, ordem númerica, ordem de grandezas e nenhuma outra lógica, e qualquer ação é trabalhosa, como se procurassemos uma agulha no palheiro, imagine o quão difícil seria procurar um nome em uma agenda telefônica, uma palavra em um dicionário, ou o seu salgadinho favorito em um enorme supermercado.

É ai que entra a ordenação, viver em um mundo ordenado é muito mais bonito, fácil e organizado, todas as tarefas automaticamente se tornam mais leves e menos custosas pois seria mais fácil encontrar qualquer coisa e chegar em qualquer lugar.

O nosso computador pensa da mesma forma, a ordenação é um dos processos mais importantes na computação, pois permite que os dados sejam manipulados e acessados de maneira mais eficiente. Além de facilitar a busca de informações em dicionários e outros tipos de listas, a ordenação é fundamental em diversas áreas da computação. Por exemplo, em bancos de dados e arquivos, a organização dos dados em uma ordem específica pode facilitar a busca por informações. Ao realizar uma consulta em um banco de dados, o sistema pode utilizar o algoritmo de busca binária para encontrar rapidamente os registros que atendem aos critérios da consulta, aproveitando a organização dos dados em uma ordem determinada. Além disso, a ordenação também pode ser utilizada para reduzir o tempo de acesso aos dados em sistemas de armazenamento, como discos rígidos e SSDs. Ao organizar os dados em uma ordem específica, é possível reduzir o tempo de busca e leitura dos dados, tornando o acesso aos mesmos mais rápido e eficiente.

Existem diversos algoritmos de ordenação, cada um com suas próprias caracteristicas, complexidade e eficiência, além da finalidade de cada um, nesse artico iremos discutir sobre os seis algoritmos mais usados e conhecidos na computação. A escolha do melhor algoritmo de ordenação impacta diretamente no desempenho da ordenação e no uso dos recursos computacionais.

## Descrição: Uma apresentação dos algoritmos e do Big(O).

**Caso já tenha conhecimento, sinta-se a vontade para pular essa parte**

Antes de começar a falar sobre os algoritmos de ordenação existe um termo no qual é preciso ter conhecimento para falar sobre a complexidade dos algoritmos e sobre o tempo de execução de cada um.

### Big(O)

A notação big(O) (ou grande O) é uma notação usada na ciência da computação para descrever o desempenho assintótico de um algoritmo (assintótico significa para todos os valores suficientemente grandes). É uma forma de medir o tempo que um algoritmo leva para ser executado em relação ao tamanho da entrada do problema.

**O que isso significa?** A notação Big(O) representa a complexidade do pior caso de um algoritmo. O tempo máximo que ele pode levar para resolver um problema. Essa notação descreve como o tempo vai aumentar se o tamanho do problema também aumentar. Naturalmente, saber disso é útil pois podemos comparar algoritmos com diferentes complexidades e escolher o mais adequado para a uma tarefa em específico e garantir que o tempo de execução seja otimizado. Veja mais sobre [Big(O)](https://pt.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/big-o-notation) na Khan Academy.

### Os algoritmos:

Os códigos referentes aos algoritmos apresentados a seguir podem ser encontrados facilmente em meu [repositório pessoal](https://github.com/Jhonatas-Anthony/DataStructure), onde estão disponíveis na linguagem C++.

1. **Bubble sort:**
   Esse é um algoritmo de ordenação dos mais simples de se implementar. Ele possui a ideia de percorrer uma lista diversas vezes e à cada vez faz o maior valor da sequência ir para o final da lista.

   Imagine que uma bolha vai passando em uma lista verificando sempre um número com seu sucessor, caso o número for maior que seu sucessor, o algoritmo faz uma troca, dessa forma ele sempre vai garantir que o maior valor vai estar no final da lista.

   O bubble sort tem complexidade O(n²) visto que possui um loop dentro do outro, o primeiro loop vai passar por toda a lista repetidamente enquanto o segundo vai fazer as devidas ordenações.

   Dessa maneira, um algoritmo com essa complexidade cresce em tempo quadrático, o que significa que seu desempenho piora rapidamente à medida que o tamanho da lista aumenta.
2. **Selection sort:**
   O selection sort tem funcionamento parecido com o apresentado anteriormente, porém, apesar da complexidade ser a mesma, O(n²), esse algoritmo procura sempre colocar o menor valor no inicio da lista.

   O algoritmo percorre a lista várias vezes, comparando os elementos entre si e selecionando o menor elemento em cada passagem. Na primeira passagem, ele encontra o menor elemento e o coloca na primeira posição. Na segunda passagem, ele encontra o próximo menor elemento e o coloca na segunda posição, e assim por diante até que todo conteúdo esteja em ordem.

   Esse algoritmo também cresce em tempo quadrático, também possui uma fácil implementação e pode ser útil para ordenar listas pequenas ou como um passo inicial em algoritmos mais complexos.

3. **Insertion sort:**
   Antes de falar mais sobre esse algoritmo, saiba que comparado com os anteriores, esse algoritmo é muito eficiente para listas quase ordenadas, melhorando drasticamente seu desempenho, no pior dos casos o insertion sort também vai ter complexidade O(n²).
   Ele funciona construindo uma lista ordenada um elemento de cada vez, comparando cada novo elemento com os elementos já ordenados e inserindo-o na posição correta na lista.

   O algoritmo insertion sort percorre a lista da esquerda para a direita e, para cada elemento, compara-o com os elementos anteriores na lista ordenada. Se o elemento for menor do que o elemento comparado, ele é movido para a posição correta. Esse processo é repetido até que todos os elementos sejam inseridos na lista ordenada.

4. **Shell sort:**
   Nesse ponto começaremos a trabalhar com a ideia de "dividir para conquistar", o shell sort é uma extenção do algoritmo apresentado anteriormente, o insertion sort.

   Ele funciona dividindo a lista a ser ordenada em sub-listas menores e aplicando o insertion sort a cada sub-lista. A ideia por trás do shell sort é que, ao aplicar o insertion sort a sub-listas menores, podemos reduzir o número de deslocamentos necessários para ordenar a lista.

   O algoritmo shell sort começa dividindo a lista em sub-listas menores com um intervalo de k elementos. Ele aplica o insertion sort a cada sub-lista e, em seguida, reduz o intervalo pela metade e repete o processo até que o intervalo seja 1, momento em que ele aplica o insertion sort padrão para terminar de ordenar a lista, lembra que o insertion sort é muito bom para listas quase ordenadas? Então! Esse é o ponto forte desse algoritmo.

   O shell sort é um algoritmo de ordenação mais eficiente do que o insertion sort é para listas maiores, mas sua complexidade de tempo é difícil de determinar devido à variação do intervalo. No entanto, sua complexidade de tempo geralmente é considerada como algo entre O(n) e O(n²).

5. **Merge sort:**
   Adianto que esse é o algoritmo mais complexo mostrado até o momento, o merge sort também tem a filosofia do "dividir para conquistar", assim como o quick sort que será apreesntado a seguir.

   O merge sort é um algoritmo de ordenação do tipo dividir e conquistar que divide uma lista em duas metades iguais, ordena cada metade recursivamente e, em seguida, combina as duas metades ordenadas em uma única lista ordenada.

   O algoritmo merge sort é eficiente para listas grandes, pois sua complexidade de tempo é O(n log n), onde n é o número de elementos na lista. Ele também é um algoritmo estável, o que significa que preserva a ordem relativa dos elementos com valores iguais.
   Para compreender o merge sort vamos dividir ele em três etapas principais:

   1. Dividir a lista que será ordenada em duas metades iguais, recursivamente, até que cada sublista tenha apenas um elemento.
   2. Ordenar cada metade recursivamente, usando novamente o merge sort.
   3. Por fim, o algoritmo combina as duas metades ordenadas em uma única lista, fundindo as duas sublistas em ordem crescente e ordenando o algoritmo.
6. **Quick sort:**
   O quick sort, quando desconsideramos a escolha do termo pivô (você vai entender o motivo), pode ser considerado o algoritmo ideal para lidar com o processo de ordenação de listas grandes, pois usa a recursivide como sua maior aliada nesse processo.

   Esse algoritmo trabalha escolhendo um termo como "pivô" e dividingo a lista em duas partes: elementos menores que o pivô e elementos maiores que o pivô. Em seguida, o algoritmo repete o processo recursivamente para as duas sub-listas até que a lista esteja totalmente ordenada.

   A escolha do pivô é o passo mais importante do quick sort, se não esse algoritmo ira caminhar para o pior caso e terá complexidade 0(n²) e não complexidade O(n log n) - Para entender como uma complexidade log n influencia, veja mais na Khan Academy sobre [logaritmos](https://pt.khanacademy.org/math/algebra2/x2ec2f6f830c9fb89:logs/x2ec2f6f830c9fb89:log-intro/a/intro-to-logarithms).

   O algoritmo quick sort também pode ser dividido em três etapas:

   1. O algoritmo escolhe um pivô entre os elementos da lista.
   2. O algoritmo divide a lista em duas sub-listas, uma contendo os elementos menores que o pivô e outra contendo os elementos maiores que o pivô.
   3. O algoritmo ordena recursivamente as duas sub-listas usando o mesmo processo, escolhendo um novo pivô em cada sub-lista e particionando a lista novamente até que cada sub-lista contenha apenas um elemento. Em seguida, ele combina as sub-listas para obter a lista ordenada.

## Comparação: Qual a diferença entre esses algoritmos? 
Agora que os algoritmos foram devidamente apresentados, podemos começar a discutir a diferença entre eles, buscando um veredito acerca da pergunta: "Qual a diferença entre esses algoritmos?". 

A fim de comparar os algoritmos de ordenação, é importante definir uma métrica comum para avaliar o desempenho de cada um. Para isso, são utilizadas métricas, inicialmente, o tempo de execução foi a métrica escolhida. Essas medidas permitem quantificar o tempo e os recursos necessários para ordenar um conjunto de dados, possibilitando uma avaliação objetiva da eficiência de cada algoritmo.

Como na computação, tudo acontece em uma fração de segundo, percebi que usar o tempo como medida era ineficiente, pois era preciso trabalhar com listas enormes com mais de 1 milhão de itens para sentir a diferença entre um e outro. 

Ao avaliar o desempenho dos algoritmos de ordenação, escolhi o número de operações realizadas como a métrica mais eficiente para calcular o tempo de execução de cada algoritmo. Embora não tenha utilizado uma métrica cronometrada, consegui uma medida numérica da quantidade de passos executados por cada algoritmo. Para garantir que todos os algoritmos fossem avaliados sob as mesmas condições, criei um algoritmo em C++ que gerou uma lista aleatória com 10, 100 e 1000 elementos, que foram usadas como entrada para todos os algoritmos. Em seguida, criei uma variável global chamada 'contador', que foi incrementada em 1 no final de cada loop e no início de cada condicional, permitindo que calculasse o número de passos de cada algoritmo.

É fundamental destacar que, devido ao uso da recursão no Merge Sort e no Quick Sort, o terminal mostrava várias saídas do número de passos para cada parte do código. Para exemplificar, quando o Merge Sort trabalhou com uma lista de 1000 valores, foram geradas mais de 200 linhas de resultados. Para minimizar erros humanos e tornar a análise mais precisa, foi utilizada a ferramenta [ChatGPT](https://chat.openai.com/) para calcular esses valores.

Após fazer os testes com cada algoritmo, os dados coletados foram postos em uma tabela afim de comparar cada um deles: 

| Tamanho | Bubble sort | Selection sort | Insertion sort | Shell sort | Merge sort |Quick sort |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| 10 | 88 | 67 | 47 | 35 | 96 | 33 |
| 100 | 7779 | 5405 | 2856 | 987 | 986 | 523 | 
| 1000 | 747485 | 505675 | 248307 | 15413 | 13014 | 3197 |

## Conclusão: Quais foram os resultados obtidos?
Ao analisar os resultados obtidos, fica evidente a diferença de desempenho entre os algoritmos de ordenação. Para ilustrar essa disparidade, basta comparar o Bubble Sort com o Quick Sort na tarefa de ordenar uma lista com 1000 valores. Enquanto o Bubble Sort executou aproximadamente 750 mil passos, o Quick Sort precisou de 3200 passos, aproximadamente, resultando em uma redução percentual de cerca de 99,57%. Ao comparar o Quick Sort com o Merge Sort, percebemos uma redução percentual de cerca de 98,27%. A tabela apresentada anteriormente mostra como cada algoritmo se sai com os mesmos problemas, revelando como os algoritmos com complexidade O(n²) crescem rapidamente em número de passos, enquanto os três últimos começam a dividir o problema para simplificar a resolução e o crescimento é bem menor. 

Os primeiros algoritmos de ordenação, como o Bubble Sort e o Selection Sort, possuem uma implementação mais simples e são ótimos para fins educacionais e para lidar com pequenos conjuntos de dados. No entanto, à medida que o tamanho dos dados aumenta, a complexidade desses algoritmos se torna rapidamente um gargalo para o desempenho, tornando-os inadequados para aplicações em larga escala. Por outro lado, algoritmos mais complexos, como o Merge Sort e o Quick Sort, são mais eficientes em lidar com grandes quantidades de dados, o que os torna ideais para aplicativos que exigem alta performance. A escolha do algoritmo de ordenação adequado é crucial para garantir que as soluções sejam escaláveis e eficientes.

Conclui-se, portanto, que a escolha do algoritmo adequado pode fazer uma grande diferença no desempenho da rotina de classificação, especialmente quando se trata de grandes conjuntos de dados.




