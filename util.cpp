#include "util.h"

string randomElement(vector<string> inputVector){
  int size = inputVector.size();
  return inputVector[rand() % size];
}

double sum(vector<double> input){
  double sum = 0;
  for(int i = 0; i< input.size(); i++){
    sum+= input[i];
  }
  return sum;
}

double avg(vector<double> input){
  double sum = 0;
  for(int i = 0; i< input.size(); i++){
    sum+= input[i];
  }
  return (sum/(input.size()+1));
}

double lowest(vector<double> input){
  double lowest = input[0];
  for(int i = 0; i< input.size(); i++){
    if(input[i] < lowest){
      lowest = input[i];
    }
  }
  return lowest;
}

void camelCase(string &input){
  bool swap = true;
  for(int i=0; i< input.size(); i++){
    if(input[i] == ' '){ // if the value is a space, remove it and swap the case of the next character
      input.erase(i, 1);
      i--;
      swap = true;
    }
    else if(swap == true){ // if the character's case should be swapped, swap it
      if(islower(input[i])){
        input[i] = toupper(input[i]);
      }
      else{
        input[i] = tolower(input[i]);
      }
      swap = false;
    }
  }
}
