#include <stdio.h>
#include <math.h>

// g++ C/codewars/closest-elevator.c -o test.exe && ./test.exe && rm ./test.exe


const char* elevator(int left, int right, int call) {
  int diff_left = abs(left - call);
  int diff_right = abs(right - call);  
  if(diff_left < diff_right){
    return "left";
  }
  return "right";


    // return abs(call - left) < abs(call - right) ? "left" : "right";
    // primera solucio

}

int main(){
const char* test1 = elevator(0, 1, 0); // => "left"
const char* test2 = elevator(0, 1, 1); // => "right"
const char* test3 = elevator(0, 1, 2); // => "right"
const char* test4 = elevator(0, 0, 0); // => "right"
const char* test5 = elevator(0, 2, 1); // => "right"

printf("results -> %s %s %s %s %s", test1, test2, test3, test4, test5);
// printf("results -> %s",  test5);
  return 0;
}