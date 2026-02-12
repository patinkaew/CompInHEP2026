#ifndef TRACK_H
#define TRACK_H

class Track {
public:
  Track() : pt_(0), eta_(0), phi_(0), mass_(0) {}
  Track(double pt, double eta, double phi, double mass) : pt_(pt), eta_(eta), phi_(phi), mass_(mass) {}
  ~Track() = default;

  double pt();
  double eta();
  double phi();
  double mass(); 

private:
  double pt_;
  double eta_;
  double phi_;
  double mass_;
};

#endif // TRACK_H
