#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>& prices){
    int minprice =prices[0];
    int profit =0;

    for(int i=1;i<prices.size();i++){
        minprice=min(minprice,prices[i]);

            profit =max(profit,prices[i]-minprice);

        
    }
    return profit;
  }
  int main(){
    vector<int> prices={7,5,4,3,2,1};
    cout<<maxprofit(prices);
  }
