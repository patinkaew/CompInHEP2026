#include <iostream>

#include "include/met.h"

int main() {

  MET met(20, 0.5);

  std::cout << "met: " << std::endl
    << "  pt: " << met.pt() << " GeV" << std::endl
    << "  phi: " << met.phi() << std::endl
    << "  x: " << met.x() << " GeV" << std::endl
    << "  y: " << met.y() << " GeV" << std::endl
    << std::endl;

  return 0;
}
