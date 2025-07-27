#include<iostream>
using namespace std;
#include<string>


//------------------------------
// CONSTRUCTORS
//------------------------------
/*
class teacher {  
    private:
      double salary;

    public: 
      teacher(){   // CONSTRUCTOR (non-parameterized) - does't have any return type
        cout<<"Hi! I am constructor\n";
      }
      string name;
      string dept;
      string subject;
      

    void changeDept(string newDept){
        dept = newDept;
    }

    // setter function
    void setSalary ( double s){
      salary = s;
    }

    // getter function
    double getSalary(){
      return salary;
    }
};

int main(){
  teacher t1;   // object creation 
// constructor call (auto natically) if not created one of your own.
// since I have created a constructor in class , compiler will use  that one
  teacher t2;
  t1.name = "suhani";   
  t1.subject = "science";
  cout<<t1.name<<endl; 
  t1.setSalary(25000);
  cout<<t1.getSalary()<<endl;  
  return 0;
}
//1. constructor is called only one at the time of object creation
//2. always declare constructor as public
*/


//------------------------------------------
//  Constructor used for initialization
//------------------------------------------
/*
class teacher {  
    private:
      double salary;

    public: 
    // non-parameterized constructor
      teacher(){      
        dept = "ece";  // initialized the value for dept
        // will not have to enter it again and again for every teacher
      }

      string name;
      string dept;
      string subject;
      

    void changeDept(string newDept){
        dept = newDept;
    }

    // setter function
    void setSalary ( double s){
      salary = s;
    }

    // getter function
    double getSalary(){
      return salary;
    }
};

int main(){
  teacher t1;   // object creation 
// constructor call (auto natically) if not created one of your own.
// since I have created a constructor in class , compiler will use  that one
  t1.name = "suhani";   
  t1.subject = "science";
  cout<<t1.name<<endl; 
  t1.setSalary(25000);
  cout<<t1.getSalary()<<endl;  
  cout<<t1.dept<<endl;
  return 0;
}
*/

//------------------------------------------
//  PARAMETERIZED CONSTRUCTOR
//------------------------------------------
/*
class teacher {  
    private:
      double salary;

    public: 

      // parameterized constructor
      teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        salary = sal;
        subject = s;
      }
      // using this constructor , will not have to give values to data members in main func

      string name;
      string dept;
      string subject;
      

    void changeDept(string newDept){
        dept = newDept;
    }

    // setter function
    void setSalary ( double s){
      salary = s;
    }

    // getter function
    double getSalary(){
      return salary;
    }

    void getInfo(){
      cout << "name : "<< name <<endl;
      cout << "subject : "<< subject <<endl;
    }
};

int main(){
  teacher t1("suhani", "ece", "math", 250000);   
  t1.getInfo();
  return 0;
}
*/

//------------------------------------------
//  MULTIPLE CONSTRUCTOR IN CLASS
//------------------------------------------
// only possible if the parameters are different 
//  called : constructor overloading (an example of polymorphism - later ) 

class teacher {  
    private:
      double salary;

    public: 

      //  constructor 1
      teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        salary = sal;
        subject = s;
      }
      // constructor 2
      teacher(){      
        dept = "ece";  
      }

      string name;
      string dept;
      string subject;
      

    void changeDept(string newDept){
        dept = newDept;
    }

    // setter function
    void setSalary ( double s){
      salary = s;
    }

    // getter function
    double getSalary(){
      return salary;
    }

    void getInfo(){
      cout << "name : "<< name <<endl;
      cout << "subject : "<< subject <<endl;
    }
};

int main(){
  teacher t1("suhani", "ece", "math", 250000);   
  t1.getInfo();
  return 0;
}
