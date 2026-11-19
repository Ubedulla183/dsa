#include<iostream>
using namespace std;
 long power( long a, long b){
    long result =1;

    while (b>0){
        if(b&1){
            result *= a;

        }
        a *=a;
        b >>=1;
    }
    return result;
 }
 int main(){
    cout<<power(3,5);
    return 0;
 }