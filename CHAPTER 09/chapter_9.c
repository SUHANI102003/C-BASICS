#include<stdio.h>
#include<string.h>
//-----------------------------------------
//                  STRUCTURES
//-----------------------------------------

struct student{     // datatype = struct student
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  // STUDENT 1
  struct student s1;  // variable name for datatype struct student = s1
  s1.roll = 23;  // initialize the variable s1 
  s1.cgpa = 9.5;
  // s1.name = "suhani"; // wrong as cannot directly initialze string array with a size mentioned
  strcpy(s1.name, "suhani");

  printf("student name = %s\n", s1.name);
  printf("student roll no = %d\n", s1.roll);
  printf("student cgpa = %f\n", s1.cgpa);

  // STUDENT 2
  struct student s2;  
  s2.roll = 24;  
  s2.cgpa = 9.1;
  strcpy(s2.name, "rohit");

  printf("student name = %s\n", s2.name);
  printf("student roll no = %d\n", s2.roll);
  printf("student cgpa = %f\n", s2.cgpa);

  // STUDENT 3
  struct student s3;  
  s3.roll = 24;  
  s3.cgpa = 9.5;
  strcpy(s3.name, "neha");

  printf("student name = %s\n", s3.name);
  printf("student roll no = %d\n", s3.roll);
  printf("student cgpa = %f\n", s3.cgpa);

return 0;
}

//---------------------------------------------
//ARRAY OF STRUCTURES
//---------------------------------------------

struct student{     
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  struct student ece[100];
  ece[0].roll= 23;
  ece[0].cgpa = 9.2;
  strcpy(ece[0].name, "suhani");

  printf("student name = %s\n", ece[0].name);
  return 0;
}
  
 //-------------------------------------
 // INITIALIZING STRUCTURES
 //--------------------------------------
 
 struct student{     
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1 = {23, 9.2, "suhani"}; // in same order as declared 
  printf("student name = %s\n", s1.name);
  return 0;
}
  

//------------------------------------------
// POINTERS TO STRUCTURES
//-----------------------------------------

struct student{     
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1 = {23, 9.2, "suhani"}; 
  printf("student name = %s\n", s1.name);

  struct student *ptr = &s1;
  printf("student name = %s", (*ptr).name);
  return 0;
}

//------------------------------------------
// ARROW OPERATOR (similar to pointer)
//-----------------------------------------

struct student{     
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1 = {23, 9.2, "suhani"}; 
  printf("student name = %s\n", s1.name);

  struct student *ptr = &s1;
  printf("student.name with ptr = %s\n", (*ptr).name);
  printf("student->roll = %s\n", ptr->name);  // for code simplicity
  printf("student->roll = %d\n", ptr->roll);
  printf("student->cgpa = %f\n", ptr->cgpa);
  return 0;
}
  

//-----------------------------------------
//PASSING STRUCTURE TO FUNCTIONS
//------------------------------------------

struct student{     
  int roll;
  float cgpa;
  char name[100];
};

// always define function after structure definition
void printInfo(struct student s1);

int main(){
  struct student s1 = {23, 9.2, "suhani"};
  printInfo(s1);
  printf("student.roll = %d\n", s1.roll);
  return 0;
}

void printInfo(struct student s1){  // call by value
  printf("student info:\n");
  printf("student.name = %s\n", s1.name);  
  printf("student.roll = %d\n", s1.roll);
  printf("student.cgpa = %f\n", s1.cgpa);

  s1.roll=45;  // change will not reflect in main function
  
}
  

//--------------------------------------
// TYPEDEF 
//--------------------------------------

typedef struct student{     
  int roll;
  float cgpa;
  char name[100];
} stu;

typedef struct electronicsengineerstudent{     
  int roll;
  float cgpa;
  char name[100];
} ece;

int main(){
  stu s1 = {23, 9.2, "suhani"};
  ece e1 = {26, 9.7, "suhani"};
  printf("student.roll = %d\n", s1.roll);
  printf("student.roll = %d\n", e1.roll);
  return 0;
}


//-----------------------------------------------------------
// Enter address (house no. , block, city, state) of 5 people
//-----------------------------------------------------------

typedef struct address{     
  int houseNo;
  int block;
  char city[100];
  char state[100];
} add;

void printAdd(struct address adds);

int main(){
  add adds[5];
  printf("Enter information for person 1 :\n");
  scanf("%d", &adds[0].houseNo);
  scanf("%d", &adds[0].block);
  scanf("%s", &adds[0].city);
  scanf("%s", &adds[0].state);

  printf("Enter information for person 2 :\n");
  scanf("%d", &adds[1].houseNo);
  scanf("%d", &adds[1].block);
  scanf("%s", &adds[1].city);
  scanf("%s", &adds[1].state);

  printf("Enter information for person 3 :\n");
  scanf("%d", &adds[2].houseNo);
  scanf("%d", &adds[2].block);
  scanf("%s", &adds[2].city);
  scanf("%s", &adds[2].state);

  printf("Enter information for person 4 :\n");
  scanf("%d", &adds[3].houseNo);
  scanf("%d", &adds[3].block);
  scanf("%s", &adds[3].city);
  scanf("%s", &adds[3].state);

  printf("Enter information for person 5 :\n");
  scanf("%d", &adds[4].houseNo);
  scanf("%d", &adds[4].block);
  scanf("%s", &adds[4].city);
  scanf("%s", &adds[4].state);

  printAdd(adds[0]);
  printAdd(adds[1]);
  printAdd(adds[2]);
  printAdd(adds[3]);
  printAdd(adds[43]);
  return 0;
}

void printAdd(struct address adds)
{
printf("Address is: %d, %d, %s, %s \n", adds.houseNo, adds.block, adds.city, adds.state);
}


//---------------------------------------------------
//Create structure to store vectors. Then make a function to return sum of 2 vectors
//----------------------------------------------------
// (x1+x2)i + (y1+y2)j

struct vector{     
  int x;
  int y;
};

void calSum(struct vector v1, struct vector v2, struct  vector sum);

int main(){
  struct vector v1 = {5, 10};
  struct vector v2 = {3, 7};
  struct vector sum = {0};
  calSum(v1,v2,sum);
  return 0;
}

void calSum(struct vector v1, struct vector v2, struct  vector sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("sum of x is : %d/n", sum.x);
  printf("sum of y is : %d", sum.y);
}


//-----------------------------------------------
//Create a structure to store complex numbers.(use arrow op)
//--------------------------------------------------
struct complex{     
  int real;
  int img;
};

int main(){
  struct complex num1 = {5, 10};
  struct complex *ptr = &num1;
  printf("real part: %d, img part: %d", ptr->real, ptr->img);
  return 0;
}

