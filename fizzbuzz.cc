//fizzbuzz.cc - a ROOT macro to solve the fizzbuzz challenge in the nuclear techniques course
//
//
#include <iostream>
using namespace std;
#include "TMath.h"

void fizzbuzz() {

  cout << "The fizzbuzz challenge. List the numbers 1 to 100." << endl;
  cout << "If the number divides by 3, output the word ``Fizz''" << endl;
  cout << "If the number divides by 5, output the word ``Buzz''" << endl;
  cout << "If the number divides by 3 AND 5, output the word ``FizzBuzz''" << endl; 
  
  for(int i=1;i<101;i++){
      cout << i << endl;
  }
  
}
