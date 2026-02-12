#include <iostream>

#include "include/Track.h"
#include "include/ChargedParticle.h"

int main() {

  Track track(20, 0.5, 1.2, 0);

  std::cout << "track: " << std::endl
    << "  pt: " << track.pt() << " GeV" << std::endl
    << "  eta: " << track.eta() << std::endl
    << "  phi: " << track.phi() << std::endl
    << "  mass: " << track.mass() << " GeV" << std::endl
    << std::endl;

  ChargedParticle electron(30, 0.1, 0.3, 0.000511, -11, 22);
  std::cout << "charge particle: " << std::endl
    << "  pt: " << electron.pt() << " GeV" << std::endl
    << "  eta: " << electron.eta() << std::endl
    << "  phi: " << electron.phi() << std::endl
    << "  mass: " << electron.mass() << " GeV" << std::endl
    << "  id: " << electron.id() << std::endl
    << "  parentId: " << electron.parentId() << std::endl
    << std::endl;

  return 0;
}
