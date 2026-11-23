#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    string name;   //attributes
    string dept;
    string subject;
    double salary;
    
   //methods
   void changedept(string newdept){
       dept = newdept;
      }


};

int main(){
    teacher t1;
    t1.name = " arjun";
    t1.dept = "ise";
    t1.subject ="cpp";
    t1.salary = 60000;

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    return 0;
}
