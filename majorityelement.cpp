#include<iostream>
#include<vector>
using namespace std;
class majorityelement
{
public:
       int majority_element(vector<int>& nums){
        int n=nums.size();
        for(int val : nums){
            int freq =0;
            for(int el : nums){
                if(el == val){
                    freq++;
                }
            }
            if(freq >n/2){
                return val;
            }
        }
    }
};
int main(){
    vector<int> nums={2,7,5,6,2,8}
    vector<int> maj = majority_element(nums);
    cout<<maj<<endl;
    return 0;
}
