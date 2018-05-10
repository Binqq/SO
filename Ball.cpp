#include "Ball.hpp"

class Ball
{
    position xy; 

    Ball(position pos)
    {
        xy=pos;
    }
  public:
   position GetPosition()
  {
      return xy;
  }


};

