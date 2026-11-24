#include<iostream>
#include<string>
using namespace std;

class teacher{
    private: 
    double salary;
    public:
    /*teacher(){
        cout<< " hi, im constructor"<<endl;
        dept ="computer science";
    }*/

    teacher( string n,string d,string s,double sal){
   name = n;
   dept=d;
   subject=s;
   salary=sal;

}
string name;
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
      void getinfo(){
        cout<<" name:"<< name<<endl;
        cout<<"subject:"<< subject<<endl;
      }


};


int main(){
    teacher t1("arjun","cse"," cpp",35000);
    t1.getinfo();
   
    /*cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.getsalary()<<endl;*/
    return 0;
}