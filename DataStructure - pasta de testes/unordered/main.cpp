/* 
1. A biblioteca cstdlib é a que contem a função rand() - que gera números aleatórios, e a função srand() - que inicia a geração desse números aleatórios
2. A biblioteca ctime contem a função time(), que basicamente retorna em segundos o tempo atual do sistema 
3. A função srand recebe como parâmetro um número inteiro, então a função time() ao ser passada garante que sempre sejam gerados números aleatórios, pois o tempo muda.
4. A função rand não gera números aleatórios, pois os números são baseados em uma função matemática. Por isso, é necessário inicializar o gerador de números aleatórios com a função srand() antes de utilizar a função rand(). Além disso, é comum utilizar o operador % para gerar um número aleatório dentro de um intervalo específico.  
*/
#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    /////////////////////////////////////////////////////////////////
    // inicializa o gerador de números aleatórios com o tempo atual//
    srand(time(NULL)); 
    /////////////////////////////////////////////////////////////////
    
    int tamanho;
    std::cout << "Digite o tamanho do array: ";
    int valorMax;
    std::cin >> tamanho;
    std::cout << "O seu array terá um range, que começa de 1 até: ";
    std::cin >> valorMax;

    /////////////////////////////////////////////////////////////////
    // cria um array com o tamanho informado pelo usuário
    int arr[tamanho]; 
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // preenche o array com números aleatórios entre 1 e o valor que o usuário desejar. 
    for (int i = 0; i < tamanho; i++) {
        arr[i] = rand() % valorMax + 1;
    }
    /////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
    // imprime o array dentro de chaves e separando por vírgulas - pronto para ser usado ;)
    std::cout << "{";
    for (int i = 0; i < tamanho; i++) {
        std::cout << arr[i];
        if (i < tamanho - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
    /////////////////////////////////////////////////////////////////

    return 0;
}

