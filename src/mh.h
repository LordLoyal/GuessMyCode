#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class model{
  private:  
  int tries;
  string name;
  string secret[5]={};
  string guess[5]={};
  string convertName(string n);
  int convertCode(int n);
  
  public:  
  string temp;
  int counter;
  int code;
  void setName();
  void setCode();
  void setGuess();
  string* getCode();
  string* getGuess();
  string getName();
  int getTries();
  void setTries();
};

class view{
  public:
  void showName(string n);
  void askName();
  void askCode(int counter, string name);
  void askGuess(int counter, string name);
  void showCode(string* s);
  void showGuess(string* s);
  void askTries();
  void showTries(int tries);
  void emptyLines();
};

class controller{
  public:
  void run();
  private:
  model* m;
  view* v;
};