#ifndef CHARGEDPARTICLE_H
#define CHARGEDPARTICLE_H

#include "../include/Track.h"

class ChargedParticle : public Track {
public:
  ChargedParticle() : Track(), id_(0), parentId_(0) {}
  ChargedParticle(double pt, double eta, double phi, double mass, int id, int parentId) 
      : Track(pt, eta, phi, mass), id_(id), parentId_(parentId) {}
  ~ChargedParticle() = default;

  int id();
  int parentId();

private:
  int id_;
  int parentId_;
};

#endif // CHARGEDPARTICLE_H
