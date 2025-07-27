#include<stdio.h>

//------------------------------------------
//                 ARRAYS
//-----------------------------------------

int main(){
  // int marks1 = 97;
  // int marks3 = 94;
  // int marks3 = 93;

  int marks[3];
  printf("enter phy : ");
  scanf("%d", &marks[0]);

  printf("enter chem : ");
  scanf("%d", &marks[1]);

  printf("enter math : ");
  scanf("%d", &marks[2]);

  printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
  return 0;
}
  

//------------------------------------------------------------
// enter price of 3 items & print their final cost with gst
//------------------------------------------------------------

int main(){
  float price[3];  // or float price[] = {100.45, 56.6, 98};
  float final_cost[3];
  printf("enter price1 : ");
  scanf("%f", &price[0]);

  printf("enter price2 : ");
  scanf("%f", &price[1]);

  printf("enter price3 : ");
  scanf("%f", &price[2]);

  for(int i=0; i<3; i++){
  final_cost[i] = price[i] + 0.18*price[i];
  printf("final_cost[%d] = %f\n", i,final_cost[i]);
    }
  return 0;
}
  

  //----------------------------------------
  //POINTER ARITHMATIC
  //------------------------------------------
  
  int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %p\n", ptr);  // 0061ff18
    ptr++;
    printf("ptr = %p\n", ptr); // 0061ff1c  -> incremented by 4 bytes(size of int)
    ptr--;
    printf("ptr = %p\n", ptr); // 0061ff18  -> deccremented by 4 bytes(size of int)
    return 0;
  }
  // same will happen with float (increment/decrement with 4 bytes) and char (1 byte)
  

  //--------------------------------
  // subtraction / comparision of pointers
  //--------------------------------
  
  int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *ptr1 = &_age;
    
    printf("difference : %u\n", ptr-ptr1); //1
    printf("comparision : %u\n", ptr>ptr1); //1
    return 0;
  }
   // NOTE: the difference can be done only with same data type pointers. 
   // the difference is done on the bytes of data types.


//-------------------------------------------------
//TRAVENSE AN ARRAY
//-----------------------------------------------

int main(){
  int aadhar[5];

  //input
  int *ptr = &aadhar[0]; // create a pointer to 1st index location
  for (int i=0; i<5; i++){
    printf("%d index : ", i);
    //scanf("%d", aadhar[i]); 'or'
    scanf("%d", (ptr+i));
  }

  //output
   for (int i=0; i<5; i++){
  //printf("%d index : %d\n", i, aadhar[i]);  'or'
    printf("%d index : %d\n", i, *(ptr+i));
  }
  return 0;
}
  

  //----------------------------------
  // ARRAYS AS FUNCTION ARGUEMENTS
  //------------------------------------
  
void printNum (int arr[], int n); //*arr

int main(){
  int arr[] =  {1,2,3,4,5,6};
  printNum(arr,6);
   return 0;
}

void printNum (int arr[], int n){  // *arr
  for(int i=0; i<n; i++){
printf("%d \t", arr[i]);
  }
}
  

  //---------------------------------
  // MULTI - DIMMENSIONAL ARRAYS
  //---------------------------------

  int main(){

    // 2x3
    int marks[2][3];

     marks[0][0] = 90;
     marks[0][1] = 80;
     marks[0][2] = 99;

     marks[1][0] = 99;
     marks[1][1] = 97;
     marks[1][2] = 96;

    printf("%d", marks[0][1]);
    return 0;
  }
    
    //-------------------------------------------------------
    // function to count the number of odd no's in array
    //-------------------------------------------------------
      
    int oddFun (int arr[], int n);

    int main(){
      int arr[] = {1,2,3,4,5};
      oddFun(arr,5);
      
      return 0;
    }

    int oddFun (int arr[], int n){
      int count = 0;
      for (int i=0; i<n; i++){
        if(arr[i] %2 != 0){
           count = count + 1;
        }
      }
      printf("Number of off numbers in array is : %d", count);
      return count;
    }

    

    //-------------------------------------
    // WRITE A FUNCTION TO REVERSE AN ARRAY
    //-------------------------------------
    // classic approach
    
    void revArray(int arr[], int n);
    void printArr (int arr[], int n);

    int main(){
      int arr[] = {1,2,3,4,5};
      revArray(arr,5);
      printArr(arr,5);
      return 0;
    }

    void revArray(int arr[], int n){
      for (int i = 0; i<n/2; i++){
          int first_val = arr[i];
          int second_val = arr[n-i-1];
          arr[i] = second_val;
          arr[n-i-1] = first_val;
      }
    }

    void printArr (int arr[], int n){
      for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
      }
      printf("\n");
    }

    // whenever we pass array through functions it is call by referance because array is like a pointer.
    

    //---------------------------------------
    // PROGRAM TO STORE 1ST N FIBONACCI NO'S
    //---------------------------------------
    // f(n) = f(n-1) + f(n-2)
// 0,1,1,2,3,5,8,13,..............

    int main(){
      int n;
      printf("Enter n: ");
      scanf("%d", &n);

      int fib[n];
      fib[0] = 0;
      fib[1] = 1;
      for (int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
      }
      return 0;
    }
      

  //-----------------------------------------------
  // CRAETE 2D ARRAY, STORING THE TABLES OF 2 & 3  
  //-----------------------------------------------
void storeTable(int arr[][10], int n, int m, int number);

  int main(){
    int tab23 [2][10] ;
    storeTable(tab23, 0, 10, 2);
    storeTable(tab23, 1, 10, 3);
    for(int i=0; i<10; i++){
      printf(" %d\t", tab23[0][i]);
    }

    for(int i=0; i<10; i++){
      printf(" %d\t", tab23[1][i]);
    }
    printf("\n");
    return 0;
  }

  void storeTable(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){  // 0 to 10
      arr[n][i] = number*(i+1); // 2,4,6,8...
    }
  }
