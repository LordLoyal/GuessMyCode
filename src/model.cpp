#include "mh.h"


string model::convertName(string n){
  for(unsigned int i = 0; i < n.length(); ++i) {
    n[i] = tolower(n[i]);
  }
  n[0] = toupper(n[0]);
  return n;
}

void model::setName(){
  name = convertName(temp);
}

string model::getName(){
  return name;
}
void model::setCode(){
  //cout << "Eingabe " << temp << endl;
  secret[counter] = temp;  
}

void model::setTries(){
  tries = stoi(temp);
}

int model::getTries(){
  return tries;
}

void model::setGuess(){
  //
  guess[counter] = temp;
}

string* model::getCode(){
  //cout << "Ausgabe " << temp << endl;
  return secret; 
}

string* model::getGuess(){
  return guess;
}