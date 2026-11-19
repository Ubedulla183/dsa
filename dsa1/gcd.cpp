#include<iostream>
using namespace std;
/*
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{

            b=b%a;
        }
    }
    if(a ==0) return b;
    return a;
}*/

int gcdrec(int a,int b){
    if(b==0) return a;

    return gcdrec(b,a%b);
}
int main(){
    cout<<gcdrec(8,0)<<endl;
    return 0;
}