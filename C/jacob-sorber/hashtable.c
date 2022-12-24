#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
// https://www.youtube.com/watch?v=2Ti5yvumFTU&list=WL&index=4
// no esta acabat, en el video fa funcions de borrar i actualizar

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
  char name[MAX_NAME];
  int age;
} person;

person * hash_table[TABLE_SIZE];

unsigned int hash(const char *name){
  int length = strnlen(name,MAX_NAME);
  unsigned int hash_value = 0;
  for(int i=0;i<length;i++){
    hash_value+=name[i];
    hash_value = hash_value * name[i] % TABLE_SIZE; // aso es per a que siguen del uno al 10
  }
  return hash_value;
}

void init_hash_table(){
  for(int i = 0;i< TABLE_SIZE;i++){
    hash_table[i] = NULL;
  }
}

void print_table(){
  for(int i = 0;i< TABLE_SIZE;i++){
    if(hash_table[i] == NULL){
      printf("\t%i\t---\n",i);
    }else{
      printf("\t%i\t%s\n",i, hash_table[i]->name);
    }
  }
}

bool hash_table_insert(person *p){
  if(p==NULL)return false;
  int index = hash(p->name);
  if(hash_table[index] != NULL){
    return false;
  }
  hash_table[index] = p;
  return true;
}
person *hash_table_lookup(const char *name){
  int index = hash(name);
  if(hash_table[index]!=NULL && strncmp(hash_table[index]->name,name,TABLE_SIZE)==0){
    return hash_table[index];
  }
  return NULL;
}


int main(){
  init_hash_table();

  person jacob = {.name="jacob",.age=23};
  person kate = {.name="kate",.age=23};
  person pete = {.name="pete",.age=23};

  hash_table_insert(&jacob);
  hash_table_insert(&kate);
  hash_table_insert(&pete);
  print_table();

  person *tmp = hash_table_lookup("kate");
  if(tmp == NULL){
    printf("not found");
  }else{
    printf("Found %s.\n",tmp->name);
  }

  return 0;
}