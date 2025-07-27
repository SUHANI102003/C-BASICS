#include<stdio.h>
#include<stdlib.h>
//-------------------------------
// malloc() - memory allocation
//--------------------------------
/*
int main(){
  int *ptr;
  ptr = (int*)malloc(5*sizeof(int));  // 5*4 bytes = 20 bytes of int type memory (by type casting)

  ptr[0] = 1;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr[3] = 4;
  ptr[4] = 3;

  for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
  }

  return 0;
}
*/
//--------------------------------------------
// WAP to allocate memory to store 5 prices
//--------------------------------------------
/*
int main(){
  float *ptr;
  ptr = (float*)malloc(5*sizeof(float));
 
  ptr[0] = 1;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr[3] = 4;
  ptr[4] = 3;

  for(int i=0; i<5; i++){
    printf("%f\n", ptr[i]);
  }

  return 0;
}
*/

//-------------------------------
// calloc() - continous allocation
//--------------------------------
/*
int main(){
  int *ptr;
  ptr = (int*)calloc(5,sizeof(int)); // here 5 is number of location
 // initialized all memory location to 0

  ptr[0] = 1;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr[3] = 4;
  ptr[4] = 3;

  for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
  }

  return 0;
}
*/
//-------------------------------
// free()
//--------------------------------
/*
int main(){
  int *ptr;
  ptr = (int*)calloc(5,sizeof(int)); 

  for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
  }

  free(ptr);

  ptr = (int*)calloc(2,sizeof(int));
  for(int i=0; i<2; i++){
    printf("%d\n", ptr[i]);
  }

  return 0;
}
  */

//-------------------------------
// realloc()
//--------------------------------

int main(){
  int *ptr;
  ptr = (int*)calloc(5,sizeof(int)); 

  for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
  }

  free(ptr);

  ptr = (int*)calloc(2,sizeof(int));
  for(int i=0; i<2; i++){
    printf("%d\n", ptr[i]);
  }

  return 0;
}


 