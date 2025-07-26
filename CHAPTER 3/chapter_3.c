#include<stdio.h>

//---------------------------------------
// CONDITIONALS
//---------------------------------------
int main(){
  int age;
  printf("enter age\n");
  scanf("%d",&age);

  if(age>=18){
    printf("ADULT\n");
    printf("they can vote\n");
  }
  else if(age>=13 && age<18){
    printf("TEENAGER\n");
  }
  else{
  printf("CHILD\n");
  }
  printf("thankyou"); // will always print as not in cond

 //----------------------------------------
 //TERNARY OPERATOR
 //----------------------------------------
 
 int age;
  printf("enter age\n");
  scanf("%d",&age);

  age>=18 ? printf("ADULT\n") : printf("UNDERAGE\n");
  

 //-------------------------------------------
 //SWITCH
 //-------------------------------------------
 
 int day;  // 1-mon, 2-tue, ......
  printf("enter day(1-7)\n");
  scanf("%d",&day);      // can use char too
  switch (day)
  {
  case 1 : printf("MONDAY\n");
    break;
  case 2 : printf("TUESDAY\n");
    break;
   case 3 : printf("WEDNESDAY\n");
   // break;                           // if not break o/p will be both case 3 & 4 & 5
  case 4 : printf("THURSDAY\n");
    //break;
  case 5 : printf("FRIDAY\n");
    break;
  case 6 : printf("SATURDAY\n");
    break;
  case 7 : printf("SUNDAY\n");
    break;
  default: printf("NOT VALID\n");
    
  }
  

 //-----------------------------------
 //NESTED COND
 //--------------------------------------
 
  int number;
   printf("enter number\n");
  scanf("%d",&number);

  if(number>=0){
    printf("posive\n");
    if(number % 2 ==0){
      printf("even\n");
    }
    else{
    printf("odd\n");
  }
  } 
  else{
    printf("negative\n");
  }
  return 0;
  

 //-----------------------------------------------
 // WAP TO CHECK IF STUDENT PASSED OR FAILED
 //----------------------------------------------
 
int marks;
printf("enter marks\n");
  scanf("%d",&marks);

  if(marks>=0 && marks<30){
    printf("FAIL\n");
  }
  else if(marks > 30 && marks<=100){
    printf("PASS\n");
  }
  else {
     printf("WRONG MARKS\n");
  }

  //OR
   marks>30 && marks<=100 ?  printf("PASS\n") :  printf("FAIL\n");
  return 0;
  

 //--------------------------------------
 //WAP TO GIVE GRADES TO A STUDENT
 //---------------------------------------
 
 int marks;
printf("enter marks\n");
  scanf("%d",&marks);

  if(marks>=90 && marks<=100){
    printf("A+\n");
  }
  else if(marks < 90 && marks>=70){
    printf("A\n");
  }
  else if(marks < 70 && marks>=30){
     printf("B\n");
  }
  else{
    printf("C\n");
  }
  return 0;
  

 //------------------------------------------------------------
 //WAP TO CHECK IF CHAR IS UPPERCASE OR NOT
 //---------------------------------------------------------
 
char letter ;
printf("enter character\n");
  scanf("%c",&letter);

if(letter >= 'a' && letter <='z'){
  printf("LOWERCASE\n");
}
else if(letter >= 'A' && letter <='Z'){
  printf("UPPERCASE\n");
}
else{
  printf("NOT A ENGLISH LETTER\n");
}
return 0;


//-----------------------------------------------
//WAP TO CHECK IF A NUMBER IS ARMSTRONG OR NOT 
//---------------------------------------------

int num,rem;
printf("enter num\n");  //ex. 153
  scanf("%d",&num);
int sum=0;
int temp=num;  // temp =153
  while(num>0){
  rem = num%10;  //rem = 3
  sum = sum + (rem*rem*rem);
  num = num/10;     //num = 15.3  but since it is int data type it will only store 15
  }
if(temp==sum){
  printf("ARMSTRONG NUMBER\n");
}
else{
  printf("NOT AN ARMSTRONG NUMBER\n");
}
return 0;

//-----------------------------------------------
//WAP TO CHECK IF A NUMBER IS NATURAL OR NOT  (positive values from 1 to inf)
//---------------------------------------------

int num;
printf("enter num\n");  //ex. 153
scanf("%d",&num);

if(num>=1){
 printf("NATURAL NUMBER\n");
}
else{
  printf("NOT A NATURAL NUMBER\n");
}
return 0;

}
