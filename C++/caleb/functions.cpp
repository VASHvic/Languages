#include <iostream>
#include <string>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

// g++ C++/caleb/functions.cpp -o test.exe && ./test.exe && rm ./test.exe

bool playGame(int guesses, int number){
  cout << "Playing Game\n";
  int correct = number;
  cout << "Guess a number, you get " << guesses << " guesses.\n";
  while(guesses > 0){
  int guess;
  cin >> guess;
  if(guess == correct){
    return true;
  }
  cout << "try again!\n";
  guesses--;
  }
  return false;
}

int main(){
  srand(time(nullptr));
  int random_number = (rand() % 10) + 1;
  cout << random_number << endl;


  bool result = playGame(2, random_number);
  if(result == true){
    cout << "correct! \n";
  }else{
    cout << "wrong!\n";
  }
  return 0;
}