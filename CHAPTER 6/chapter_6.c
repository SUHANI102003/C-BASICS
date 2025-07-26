#include<stdio.h>

//---------------------------
// POINTERS
//----------------------------

int main() {
  int age = 22;
  int *ptr = &age; // means value at the address of (*) ptr is the address of age
  int _age = *ptr;
  
  printf("%d", _age);
  return 0;
}

//------------------------------
// ADDRESS PRINTING
//---------------------------

int main(){
  int age = 22;
  int *ptr = &age;

  printf("%p\n", &age);  // 0061FF1C - hex value  (address of age)
  printf("%u\n", &age); // 6422296 - unsigned int
  printf("%p\n", ptr);// 0061FF1C  (address of age stored in ptr)
  printf("%p\n", &ptr); // 0061FF18 (address of pointer)
  return 0;
}
  
//------------------------------
// VALUE PRINTING
//-----------------------------

int main(){
  int age = 22;
  int *ptr = &age;

  printf("%d\n", age); // 22

  printf("%d\n", *ptr); // 22

  printf("%d\n", *(&age)); //22
  return 0;
}
  

  //---------------------------------
  // Practice questions
  //----------------------------------

  int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;  // x=0

    printf("x=%d\n", x);       //0
    printf("*ptr=%d\n", *ptr);   //0

    *ptr += 5;  // important line
    printf("x=%d\n", x);       // 5
    printf("*ptr=%d\n", *ptr);   //5

    (*ptr)++ ;  // important line
    printf("x=%d\n", x);       //6
    printf("*ptr=%d\n", *ptr);   //6

    return 0;
  }
    

    //---------------------------------
    // POINTER TO POINTER
    //------------------------------------

    // int main(){
    //   float price = 100.00;
    //   float *ptr = &price;   // pointer for price
    //   float **pptr = &ptr;   // pointer for ptr  (**)
    //   return 0;
    // }

    //----------------------------------------------
    // print the value of 'i' from its pointer to pointer
    //------------------------------------------------

    int main(){
      int i = 5;
      int *ptr = &i;
      int **pptr = &ptr;

      printf("%d\n", **pptr);
      return 0;
    }
      


//---------------------------------------------
// POINTERS IN FUNCTION CALL
//---------------------------------------------
//--------------------------------------------
// 1. CALL BY VALUE
//-------------------------------------------

void square (int n);
int main(){
  int number = 4;
  square(number);
  printf("number = %d\n", number);   ///
  return 0;
}
// we are passign the value of variable number as arguement. Not the actual value
void square(int n){    /
  n=n*n;
  printf("square = %d\n", n);

  // here in this function a copy of variable number is created. so even if we change it inside function, the original value does not change. therefore, we see at output number = 4 and not 16.
}
  

  //-------------------------------
  //2. CALL BY REFERANCE 
  //-------------------------------

  void _square(int *n);

  int main(){
  int number = 4;
  _square(&number);
  printf("number = %d\n", number);   ///
  return 0;
}

void _square(int *n){
*n = (*n) * (*n);  //4*4
printf("square = %d\n", *n);
}
//o/p = 
// square = 16
// number = 16  // value changed


//----------------------------------------------
// SWAP 2 NUMBERS A & B
//---------------------------------------------

void swap(int a, int b); // call by value
void _swap(int *a, int*b); // call by ref

int main(){
  int x = 2;
  int y = 3;
  //swap(x,y);  // not swapped by call by value
  _swap(&x,&y); // swapped
  printf("x = %d, y = %d", x,y);  
  return 0;
}

void swap(int a, int b){
  int t = a;
  a=b;
  b=t;
  printf("a = %d, b = %d\n", a,b);
}

void _swap(int *a, int*b){
  int t = *a;
  *a = *b;
  *b = t;
}
  

  //-------------------------------
  // practice question
  //-----------------------------
  
  void printAddress(int n);

  int main(){
    int n=4;
    printAddress(n);  // 0061ff00
    printf("address of n is : %p\n", &n); // 0061ff1c
    return 0;
  }
// both are different - call by value
  void printAddress(int n){
printf("address of n is : %p\n", &n);
  }


//--------------------------------------------------
// Write a f'n to calculate sum, product & average of 2 numbers. Print that average in the main function.
//------------------------------------------------

// we know that function only passes 1 value. so for multiple output values we will use pointers

void doWork (int a, int b, int *sum, int *prod, int*avg);

int main(){
  int a =3; int b=5;
  int sum, prod, avg;
  doWork(a,b,&sum,&prod,&avg);

  printf("sum = %d, prod = %d, avg = %d\n", sum,prod,avg);
  return 0;
}

void doWork (int a, int b, int *sum, int *prod, int*avg){
  *sum = a+b;
  *prod = a*b;
  *avg = (a+b)/2;
}
  

  //---------------------------------------------------
  //Fint maximum number between 2 no's using pointer
  //-------------------------------------------------

    void funcMaxNo(int *a, int *b);

  int main(){
    int a = 5; int b = 3;
    funcMaxNo(&a,&b);
    return 0;
  }

  void funcMaxNo(int *a, int *b){
    if(*a>*b){
      printf("%d is maximum", *a);
    }
    else{
      printf("%d is maximum", *b);
    }
  }
    

    //-------------------------------------------
    //Print elements of an array in reverse order
    //-------------------------------------------

    void arrRev (int arr[]);
    int main(){
      int arr[] = {1,2,3,4,5}; 
      arrRev(arr);
      return 0;
    } 

    void arrRev (int arr[]){
      for (int i = 4; i>=0; i--){
        printf("%d", arr[i]);
      }
    }
