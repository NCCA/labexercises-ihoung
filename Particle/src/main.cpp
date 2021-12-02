#include <iostream>
#include <chrono>
#include "Emitter.h"

int main()
{
  std::cout<<"Particle System\n";
  Emitter e(10000);
  for(int i=0; i<10000; ++i)
  {
    e.update();
    // std::cout << "------------------" << "\n";
    // e.render();
    e.saveFrame(i);
  }
  return EXIT_SUCCESS;
}