#include<stdio.h>

int main(){
  
  //--------------------------------------------
  //INSTRUCTIONS-TYPE DECLARATION
  //--------------------------------------------
  /*
  int a =22;
  int b=a;
  int c=b+1;
  int d=1,e;

  //not valid ex
  int oldAge = 45;
  int newAge = oldAge + years;   // showing error at years bc not declared before 
  int years =6;     // even if declared after still not valid & shows error

  //int x,y,z;
  //x=y=z=4;      //valid

  int x=y=z=4;    //not valid  as use & declaration is happening together
  return 0;
  */

//--------------------------------------------------
// PRACTICE QUES
//-----------------------------------------------
/*
int a = 1.9999999;   // int will round off
printf ("%d",a);      // what will be value of a -> 1 or 2
// ans = 1
// should not have come 1 as float (a big value ) is being stored in int(small) -- error shown but my compiler has not shown any error
// but to convert float value to int we use type conversion as
int b = (int) 2.4444444444;  // completely removed .44444444444 and did not round off 
printf ("%d",b);   // ans = 2
return 0;
*/

//----------------------------------------------
// WAP TO CHECK IF NO. IS DIVISIBLE BY 2 OR NOT
//-----------------------------------------------
/*
int a;
printf("enter value of a \n");
scanf ("%d",&a);
printf("%d", (a%2)==0);   // op = 0 if not divisible else 1
*/

//-----------------------------------------------
//WAP TO CHECK IF NO. EVEN OR ODD
//----------------------------------------------
/*
int a;
printf("enter value of a \n");
scanf ("%d",&a);
printf("%d", (a%2)==0);
*/

//-------------------------------------------------
//MISC
//-------------------------------------------------
/*
char stars='**';  // will show error as char type can only have 1 character  
char star='* ';  // will show error even if space is used
printf("%s", stars);  
printf("%s", star);  
*/

//------------------------------------------------------
//WAP TO PRINT AVG OF 3 NUMBERS
//---------------------------------------------------
/*
float a,b,c;
float avg =0;
printf("enter value of a,b,c \n");
scanf ("%f %f %f",&a,&b,&c);
avg = (a+b+c)/3;
printf("average of three numbers is : %f",avg);
*/

//------------------------------------------------------
//WAP TO PRINT SMALLEST OF 2 NUMBERS
//---------------------------------------------------
int a,b;
printf("enter value of a,b \n");
scanf ("%d %d",&a,&b);
printf("Smallest of %d and %d is %d", a,b,((a<b)?a:b));
return 0;
}