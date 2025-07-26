#include<stdio.h>


int main(){
  printf("hello world");
  return 0;
}


//----------------------------
// VARIABLES
//----------------------------

int main(){

  int number = 5;    //variable = number & data = 5
  int age = 22;
  char star = '*';
  float pi = 3.14;

  int _age=22;   // correct
  int #age = 34; // not correct
  int final_price =100; //correct
  int final,price = 100; // not correct

  return 0;
}

//-------------------------------------------
//DATA TYPES
//-----------------------------------------

int main(){
  int age = 22;  //integer
  float pi = 3.14; // decimal value
  char hashtag = '#'; //character
  return 0;
}

//----------------------------------------------
//OUTPUT
//---------------------------------------------

int main(){
  printf("hello\n");  // will print hello in single line
  printf("hello");  // so use new line \n
  printf("hello\n"); 
  int age = 22;
  printf("age is age\n"); // will show string written in ""
  printf("age is %d",age); // correct 
  return 0;
}

//------------------------------------------------
//INPUT
//-------------------------------------------------

int main(){
  int age;
  printf("enter age\n");
  scanf("%d",&age);
  printf("age is %d",age);
  return 0;
}

//----------------------------------------------------
// SUM OF 2 NUMBERS
//-------------------------------------------------

int main(){
  int a,b;
  //int sum;
  printf("enter value of a \n");
  scanf("%d",&a);

  printf("enter value of b \n");
  scanf("%d",&b);

                             //sum = a+b;
  printf("sum is %d",a+b);  //printf("sum is %d",sum);  
  return 0;
}

//---------------------------------------------------
//AREA OF SQUARE
//------------------------------------------

int main(){
  int side; //float side;
  printf("enter value of side \n");
  scanf("%d",&side);  // %f

  printf("area of square is %d",side*side);
  return 0;
}

//---------------------------------------------
//AREA OF CIRCLE
//---------------------------------------------

int main(){
  float radius; 
  printf("enter value of radius \n");
  scanf("%f",&radius);  // %f
  printf("area of circle is %f",radius*radius*3.14);
  return 0;
}

//------------------------------------------------
//  COMMENT OUT THE CODES THAT YOU DON'T WANT TO RUN 
