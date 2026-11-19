#include<iostream>
using namespace std;

bool isarmstrong(int n){
    int copyN = n;
    int sumofcubes =0;

    while(n != 0)  {
        int dig = n%10;

        sumofcubes += (dig*dig*dig);

        n=n/10;
    }
    return sumofcubes == copyN;
    
}
int main(){
    int n=173;

    if(isarmstrong(n)){
        cout<<"is an armstrong number";

    }else{
        cout<<"not an armstrong number";
    }
    return 0;

}