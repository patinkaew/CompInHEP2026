#ifndef MET_H
#define MET_H

class MET {
public:
  MET() : pt_(0), phi_(0) {}
  MET(double pt, double phi) : pt_(pt), phi_(phi) {}
  ~MET() = default;

  double pt();
  double phi(); 
  double x(); 
  double y(); 

private:
  double pt_;
  double phi_;
};

#endif // MET_H
