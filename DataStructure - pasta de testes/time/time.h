#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include <ctime>

class Cronometro {
public:
  Cronometro() : inicio(clock()) {}
  double tempoDecorrido() const {
    clock_t agora = clock();
    return static_cast<double>(agora - inicio) / CLOCKS_PER_SEC;
  }
  int minutosDecorridos() const {
    return static_cast<int>(tempoDecorrido() / 60);
  }
  int segundosDecorridos() const {
    return static_cast<int>(tempoDecorrido()) % 60;
  }

private:
  const clock_t inicio;
};

#endif
