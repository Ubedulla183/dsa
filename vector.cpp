#include<iostream>
#include<vector>
using namespace std;
int main(){
  /*  vector<int> vec(5,0);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

    for(int i : vec){
        cout<<i<<endl;
    }*/
 /*  vector<char> vec={'a','b','c','d'};
   cout<<"size ="<<vec.size()<<endl;

   for(char val : vec){
    cout<<val<<endl;
   }
*/
   vector<int> vecc;

   vecc.push_back(25);
   vecc.push_back(35);
   vecc.push_back(45);

   cout<<" after push backsize ="<<vecc.size()<<endl;

   vecc.pop_back();
   ;
   for(int val : vecc)
   {
    cout<<val<<endl;
   }
   cout<<"after pop back size="<<vecc.size()<<endl;
   cout<<"vector capacity="<<vecc.capacity()<<endl;
    return 0;
}