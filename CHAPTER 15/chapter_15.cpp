#include<iostream>
using namespace std;
#include<string>


//------------------------------------------
//  this POINTER
//------------------------------------------
// why use it?? If we wnat to keep the name of parameters in the constructor same as the data member names , then it becomes confusing as we don't know to which we are referring.
// ex. name = name;
// to avoid this we use this pointer

class teacher {  
    private:
      double salary;

    public: 

      //  confusing 
      // teacher(string name, string dept, string subject, double salary){
      //   name = name;
      //   dept = dept;
      //   salary = salary;
      //   subject = subject;
      // }

      
      // solved using this pointer
      // RHS = constructor parameter
      // LHS = data member 
    teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        this->subject = subject;
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
