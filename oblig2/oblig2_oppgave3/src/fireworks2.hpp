#ifndef CLASS_FIREWORKS_H
#define CLASS_FIREWORKS_H

//Local includes
#include "animation_canvas.hpp"


class fireworks2: public animation_canvas  {
  
  // The number of rockets to fire
  int rocketcount;

 public:
  
  /** Initialize; i.e. create all the rockets, and add them 
      (animation_canvas has the container) */
  fireworks2(const char* title,int w, int h, int _rocketcount);
  ~fireworks2() override;

};


#endif
