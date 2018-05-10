#include "Infield.hpp"
#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

using namespace std;

  Infield::Infield(int w,int l)
  {
    widith = w;
    lenght =l;
    initscr();
    for(int i=0;i<lenght;i++)
    {
      move(i,40);
      printw("%c",'|');
      refresh();
    }
    for(int i=0;i<widith;i++)
    {
      move(19,i);
      addch('_');
    }
    for(int i=0;i<lenght;i++)
    {
      move(i,60);
      addch('|');
    }
    refresh();
       getch();
    endwin();
  }
  Infield::Infield(){}
 int Infield::GetLenght()
  {
    return lenght;
  }
  int Infield::GetWidith()
  {
    return widith;
  }
