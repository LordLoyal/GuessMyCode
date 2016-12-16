#include "mh.h"


void view::showName(string n){
  cout << "Dein Name ist " + n << endl;
}

void view::askName(){
  cout << "Wie heisst du ?" << endl;
}

void view::askCode(int counter, string name){  
  cout << "Wie lautet die " << counter +1 << " Stelle deines Codes, " << name << " ?" << endl;
}

void view::showCode(string* s){
  cout << "Dein Code lautet " << s[0] << " " << s[1] << " " << s[2] << " " << s[3] << endl;
}

void view::askTries(){
  cout << "Wie oft darf geraten werden?" << endl;
}

void view::showTries(int tries){
  cout << "Du darfst " << tries << " mal raten um den geheimen Code zu erraten" << endl;
}

void view::askGuess(int counter, string name){  
  cout << "Wie lautet die " << counter +1 << " Stelle deines Codes, " << name << " ?" << endl;
}

void view::showGuess(string* s){
    cout << "Dein Versuch lautet " << s[0] << " " << s[1] << " " << s[2] << " " << s[3] << endl;
}

void view::emptyLines(){
  cout << string(80, '\n');
  // \x1b[2J  Escape Sequence  
}