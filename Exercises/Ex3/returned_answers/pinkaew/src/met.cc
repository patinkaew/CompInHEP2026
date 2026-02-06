#include "../include/met.h"
#include <cmath>

double MET::pt() { return pt_; }
double MET::phi() { return phi_; }
double MET::x() { return pt_ * cos(phi_); }
double MET::y() { return pt_ * sin(phi_); }
