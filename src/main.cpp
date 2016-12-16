#include "mh.h"


int main()
{
  controller* c = new controller();
  if(c){
  c->run();
  delete(c);
  }
  return 0;
};