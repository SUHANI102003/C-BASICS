#include<stdio.h>
// LOOPS
int main(){
  /*
  printf("Hello world");
  printf("Hello world");
  printf("Hello world");
  what if want to print 100 times?? use loops
  
for (int i = 0; i < 5; i=i+1) //  i++/i--/i=i-1
{
  // i = iterator ; counter 
    printf("Hello world\n");
    printf("%d\n",i);
}


//-----------------------------------------
//PRINT NUMBERS FROM 1-10
//-----------------------------------------
for (int i = 0; i <=10; i++)
{
    printf("%d ",i);
}


// increment operator
//i++(post increment op) or ++i(pre increment op)

//decrement operator
// i--(post) or --i(pre)

int i=1;
// printf("%d\n",i--);  // use then increment/decrement
// printf("%d\n",i);

//printf("%d\n",--i);  //  decrement/increment, then use
//printf("%d\n",i);

// can have float and char as iterator
for (float i = 1.0; i < 5.0; i++)
{
  printf("%f\n",i);
}

for (char i = 'a'; i <='z'; i++)
{
  printf("%c\n",i);
}

//infinite loops
for (int i =1; ;i++)
{
  printf("hello");
}


// WHILE LOOP
int i=1;
while(i<=5){
  printf("%d\n",i);
  i=i+1;
}
*/

//---------------------------------------
//PRINT NUMBERS FROM 0-N
//---------------------------------------
/*
int n;
printf("enter n");
scanf("%d",&n);
for (int i=0;i<=n;i++){
  printf("%d\n",i);
}
*/

//DO WHILE LOOP
/*
int i=5;
do{
  printf("%d\n",i);
  i--;
}
while(i>=1);
*/

//-----------------------------------------------------
//PRINT THE SUM OF 1ST N NATURAL NUM (ALSO PRINT NO IN REVERSE)
//-------------------------------------------------------
/*
int n;
int sum=0;
printf("enter n\n");
scanf("%d",&n);
/*
 for (int i=1; i<=n; i++){
   sum=sum+i;
}
printf("sum is : %d",sum);

 for (int j=n; j>=1; j--){
   printf("%d\n",j);
 }
 */
//or
/*
for (int i=1, j=n; i<=n && j>=1; i++,j--){   
//same o/p even if we completely remove i
  sum=sum+i;   sum=sum+j;
  printf("%d\n",j);
}
printf("sum is : %d",sum);
*/

//----------------------------------------
//PRINT THE TABLE OF A NO.
//------------------------------------------
/*
int n;
int product =0;
printf("enter n\n");
scanf("%d",&n);
for(int i=0; i<=10; i++){
  product = n*i;              // printf("%d",n*i);
  printf("%d * %d = %d\n", n,i,product);
}
*/

//BREAK STATEMENT
/*
for(int i=1;i<=5;i++){
  if(i==3){
    break;
  }
  printf("%d\n",i);
}
printf("end");
*/

//----------------------------------
// KEEP TAKING I/P FROM USER UNTIL ENTERS ODD NUMBER
//---------------------------------------
/*
int n;
do{
 scanf("%d",&n);
 printf("%d\n",n); //infinite loop so use break if condition satisfies
 if(n%2 !=0){
  break;
 }
}
while (1);   //true
return 0;
*/

//----------------------------------
// KEEP TAKING I/P FROM USER UNTIL ENTERS NUMBER ie MULTIPLE OF 7
//---------------------------------------
/*
int n;
do{
  printf("enter the number:");
 scanf("%d",&n);
 printf("%d\n",n); //infinite loop so use break if condition satisfies
 if(n%7 ==0){
  break;
 }
}
while (1);   //true
return 0;
*/

//CONTINUE STATEMENT
//PRINT NO'S FRM 1-10 EXCEPT 6
/*
for(int i=1; i<=10; i++){
 if (i==6)
 {
  continue;  // dont print 3 or skip 3
 }
 printf("%d\n",i);
}
 return 0;
 */

//----------------------------------
// PRINT ALL ODD NO'S FROM 5-50
//---------------------------------------
/*
for(int i=5; i<=50; i++){
 if (i%2 ==0)
 {
  continue; 
 }
 printf("%d\n",i);
}
 return 0;

 //OR
 for(int i=5; i<=50; i++){
 if (i%2 !=0)
 {
  printf("%d\n",i);
 }
}
 return 0;
 */


//----------------------------------
// PRINT FACTORIAL OF A NUMBER N
//---------------------------------------
/*
int n;
int factorial=1;
printf("enter n:\n");
scanf("%d",&n);
for(int i=1; i<=n; i++){  
  factorial = factorial*i;
}
printf("factorial of %d = %d\n",n,factorial);
return 0;

if n=50 then int will not be able to store the factorial of 50 so use different menthod to store fact --will learn later
*/

//---------------------------------------
// PRINT REVERSE OF TABLE OF A NUMBER N
//---------------------------------------
int n;
printf("enter n:\n");
scanf("%d",&n);

for(int i=10; i>=1; i--){  
  printf("%d * %d = %d\n",n,i,n*i);
}
return 0;
}