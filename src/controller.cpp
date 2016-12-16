#include "mh.h"

void controller::run(){
  m = new model();
  v = new view();
  v->askName();
  cin >> m->temp;
  m->setName();
  v->showName(m->getName());
  for(m->counter=0; m->counter < 4; m->counter++){
    v->askCode(m->counter, m->getName());
    cin >> m->temp;
    m->setCode();
  }
  v->showCode(m->getCode());
  v->askTries();
  cin >> m->temp;
  m->setTries();
  v->emptyLines();
  v->showTries(m->getTries());
  for(m->counter=0; m->counter < m->getTries(); m->counter++){
    v->askGuess(m->counter, m->getName());
    cin >> m->temp;
    m->setGuess();
  }
  v->showGuess(m->getGuess());
}