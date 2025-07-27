#include<stdio.h>

//---------------------------------------------
// FUNCTIONS
//---------------------------------------------

//function prototype/declaration
void printHello();

int main(){
  printHello();  //function call single time or multiple
  printHello();
  printHello();
  return 0;
}

//function definition
void printHello(){
  printf("hello\n");
}


//--------------------------------
//write 2 f'n -one to print hello and 2nd to print goodbye
//-----------------------------------

void printhello();
void printgoodbye();

int main(){
  printhello();
  printgoodbye();
  return 0;
}

void printhello(){
  printf("hello\n");
}
void printgoodbye(){
  printf("goodbye\n");
}

//---------------------------------------------------
//a f'n that prints namaste if indian & bojour if french
//-----------------------------------------------------

void namaste();
void bonjour();

int main(){
  printf("enter f for french & i for indian");
  char ch;
  scanf("%c",&ch);
  if(ch=='i'){
    namaste();
  }
  else{
  bonjour();}

  return 0;
}
void namaste(){
  printf("namaste\n");
}
void bonjour(){
  printf("bonjour\n");
}


//---------------------------------------------------
// FUNCTIONS WITH PARAMETERS
//---------------------------------------------------

int sum(int a, int b); // function declare

int main(){
  int a,b;
  printf("enter first no: ");
  scanf("%d",&a);
  printf("enter second no: ");
  scanf("%d",&b);
  sum(a,b);
  int s=sum(a,b);
  printf("sum is %d ",s);
  return 0;
}

int sum(int a, int b){
  //printf("sum is : %d",a+b);
  return a+b;
  //return 12; will also be correct by compiler b/c in the end it is returning an interger but is not logically correct as if a=1 and b=5 then sum is 6 
  //return 3.14; // error as not an int return type
}


//---------------------------------------------------
// Function to print table of n
//---------------------------------------------------

void table(int n);
int main(){
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  table(n); //arguement or actual parameter
}
void table(int n){  //parameter or formal parameter
  for (int i=1; i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }
}


//-------------------------------------------------------------
// changes to parameter in fn dont change the values in calling fn
//-------------------------------------------------------------

void calculatePrice(float value);
int main(){
  float value = 100.0;
  calculatePrice(value);  // ans- 118
  printf("value is : %f",value); // ans 100
  return 0;
}

void calculatePrice(float value){
  value = value + (0.18*value); // added 18% gst to value
  printf("final value = %f ",value);
}


//------------------------------------------
//square of a number using library fn
//-------------------------------------------
//pow
#include<math.h>
int main(){
  int n=4;
  //printf("%d",pow(n,2)); will show error as pow takes double not int
printf("%f",pow(n,2));
  return 0;
}


//-------------------------------------------
//fn to calc area of square,circle,rect
//--------------------------------------------

float areaSquare(float side);
float areaCircle(float radius);
float areaRect(float length, float breadth);
int main(){
  float side = 3;
  float radius = 4;
  float length=4;
  float breadth = 8;
areaSquare(side);
areaCircle(radius);
areaRect(length,breadth);
  return 0;
}

float areaSquare(float side){
  return side*side;
}
float areaCircle(float radius){
  //printf("area of circle is : %f\n",radius*radius*3.14);
  return 3.14*radius*radius;
}
float areaRect(float length, float breadth){
  return length*breadth;
}


//----------------------------------------------------
//RECURSIONS
//----------------------------------------------------

void printHW (int count);

int main() {
  printHW(5);
  return 0;
}


// recursive function
void printHW (int count) {
  if (count == 0) {
    return;
  }

  printf("HELLO WORLD!\n");  // print 1 time , remaining count-1 prints
  printHW(count - 1); // count - 1 prints by calling itself
}


//-------------------------------
// SUM OF 1ST N NATURAL NUMBERS
//--------------------------------

// n => 1+2+3+........+(n-1)+n   = sum(n-1) + n
// 5 => 1+2+3+4+5                = sum(4) + 5
// 4 => 1+2=3+4                  = sum(3) + 4
// 3 => 1+2+3                    = sum(2) + 3
// 2 => 1+2                      = sum(1) + 2
// 1 => 1

// pattern observed that all 1st digit is '1' in all sums.
// sum func calling itself for n-1 calculation of sum till n=1 i.e, BASE CASE

int sum(int n);

int main() {
  printf("sum is %d", sum(5));
  return 0;
}

//recursive f'n
int sum(int n){
  if (n==1) {    // base case - one that stops recurssion
  return 1;
}
  int sumNm1 = sum(n-1);// sum of 1 to (n-1)
  int sumN = n + sumNm1; // sum of n numbers
  return sumN;
}


//--------------------------------------
//FACTORIAL OF N
//--------------------------------------

// n! = n*(n-1)*(n-2)*............*2*1  =  n * facorial(n-1)

int factorial (int n);

int main()
{
  printf("Factorial is : %d", factorial(4) );
  return 0;
}

int factorial (int n) {
if (n == 1) {
  return 1;
}
int factNm1 = factorial(n-1);
int factM = n*factNm1;
return factM;

}


//--------------------------------
// F'N TO CONVERT CELSIUS TO FAHRENHEIT
//---------------------------------

// f = (c*(9/5)) + 32

float cel2far (float celsius);

int main(){
  float fahrenheit = cel2far(32);
  printf("far : %f", fahrenheit);
  return 0;
}

float cel2far (float celsius) {
  float far = celsius*(9.0/5.0) + 32;
  return far;
}


//-------------------------------------------
// F'N TO PRINT N TERMS OF FIBONACCI SEQUENCE
//-------------------------------------------

// f(n) = f(n-1) + f(n-2)
// f(0)=0, f(1) = 1  --> fixed
// seq = 0,1,1,2,3,5,8,13,.............

int fib (int n);

int main(){
  
  printf("%d", fib(5));
  return 0;
}

int fib(int n) {
  
    if(n==0) {
      return 0;
    }
    if(n==1){
      return 1;
    }
   
  int fibNm1 = fib(n-1);
  int fibNm2 = fib(n-2);
  int fibN = fibNm1 + fibNm2;
  //printf("fib of %d is: %d\n", n, fibN);
  return fibN;
}
