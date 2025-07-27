#include<iostream>
using namespace std;

//----------------------------------------
// Printing output and new line
//----------------------------------------
/*
int main(){
  cout<<"Hello world"<<endl; 
  return 0;

// endl for next line
//std::cout<<"Hello world"; // when not using namespace 
}
*/
//----------------------------------------------
// DATA TYPES (same as C , just a few new ones)
//-----------------------------------------------
/*
int main(){
  int a = 12;              
  char ch = 'a';           
  float const price = 23.4;     // fixed cannot change  
  short sa = 5667;         
  long c;
  double score = 456.546;
  long double cost;
  long long d;
  string name = "suhani";  
// short < int < long < long long
//float < double < long double
  cout<<"A="<<a<<endl;
  a = 4; // reinitialized integer variable a
  price = 45.5; // error showing as cannot modify

  return 0;
}
  */
//----------------------------------------
// USER INPUT 
//----------------------------------------
/*
int main(){
  int n, m;
  cout<<"enter n:"<<endl;
  cin>>n;
  cout<<"enter m:"<<endl;
  cin>>m;
  cout<<"sum is "<<n+m<<endl;
  return 0;
}
  */
//-------------------------------------------
// TYPECASTING
//--------------------------------------------
// cout<<"sum is "<<(float)n/m<<endl;

//----------------------------------------------
// CONDITIONAL STATEMENTS  (same as C)
//-----------------------------------------------
/*
// else if
int main(){
  int age;
  cout<<"enter ypu age"<<endl;
  cin>>age;
  if(age>150 || age<1){
    cout<<"INVALID AGE"<<endl;
  }
  else if(age>18){
    cout<<"YOU CAN VOTE"<<endl;
  }
  else{
    cout<<"YOU CANNOT VOTE"<<endl;
  }
  return 0;
}


//switch case
int main(){
  int age;
  cout<<"enter ypu age"<<endl;
  cin>>age;
  switch (age)
  {
  case 12:
    cout<<"You are 12 years old."<<endl;
    break;
  case 18:
    cout<<"You are 18 years old."<<endl;
    break;
  
  default:
  cout<<"You are neither 12 or 18 years old."<<endl;
    break;
  }
  return 0;
}
  */

// NOTE: THE CONCEPTS OF FUNCTIONS, ARRAYS , STRINGS , POINTERS ARE SAME AS DONE IN C.
// ONLY SOME SYNTAX CHANGES ARE THERE.

// REFER TO THIS CODE HERE TO SEE THE DIFFERENCES BETWEEN THEM

#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    
    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }
//-----------------------------------------------------------------------------------
    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);
//-------------------------------------------------------------------------------------
    // for (int i = 1; i <= 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }
//----------------------------------------------------------------------------------------
// FUNCTIONS
    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<add(a,b);
//-----------------------------------------------------------------------------------------
//ARRAYS
    //     int arr[] = {1, 3, 6};
    // // Array Index   0  1  2
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }
//--------------------------------------------------------------------------------------
    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }
//--------------------------------------------------------------------------------------
// TYPECASTING
    // int a =343;
    // float b = 87.94;
    // cout<<(float) a/34<<endl;
//-----------------------------------------------------------------------------------------
// STRINGS
    // cout<<(int) b;

    // string name = "harry";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(1,155)<<endl;
    // cout<<"The name is "<<name.substr(2,3);
//--------------------------------------------------------------------------------------
//POINTERS
    // float a = 34.34;
    // float* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;
//------------------------------------------------------------------------------------

    return 0;
}
