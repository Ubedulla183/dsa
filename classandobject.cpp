#include<iostream>
#include<string>
using namespace std;

class teacher{
    private: 
    double salary;
    public:
    string name;   //attributes
    string dept;
    string subject;
   
    
   //methods
   void changedept(string newdept){
       dept = newdept;
      }

      //setter
      void setsalary(double s){
        salary =s;
      }

      //getter
      double getsalary(){
        return salary;
      }


};

int main(){
    teacher t1;
    t1.name = " arjun";
    t1.dept = "ise";
    t1.subject ="cpp";
    t1.setsalary(35000);

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}
