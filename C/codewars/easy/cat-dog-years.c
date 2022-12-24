#include <stdio.h>
// g++ C/codewars/cat-dog-years.c -o test.exe && ./test.exe && rm ./test.exe
typedef struct Human_Cat_Dog_Years {
    unsigned human_years, cat_years, dog_years;
} years;



years human_years_cat_years_dog_years(unsigned human) {
years y;
y.human_years = human;
y.cat_years = human == 1 ? 15 : human == 2 ? 24 :  24 + ((human-2) * 4);
y.dog_years = human > 2 ? y.cat_years+(human-2 *1) : y.cat_years;
return y;    
}

int main(int argc, char** argv){
  years y = human_years_cat_years_dog_years(10);
  printf("dog: %d cat : %d \n",y.dog_years, y.cat_years);
  return 0;
}