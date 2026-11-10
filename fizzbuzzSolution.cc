//fizzbuzz.cc - a ROOT macro to solve the fizzbuzz challenge in the nuclear techniques course
//
//
#include <iostream>
using namespace std;
#include "TMath.h"

void fizzbuzz() {

  for(int i=1;i<101;i++){
    if((i%3==0)&&(i%5==0)){
      cout << "fizzbuzz" << endl;
    }
    else if(i%3==0){
      cout << "fizz" << endl;
    }
    else if(i%5==0){
      cout << "buzz" << endl;
    }
    else{
      cout << i << endl;
    }
  }
  
}
