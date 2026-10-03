#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums,int target){
    int n=nums.size();
    int st=0,end=n-1;
    while (st<=end)
    {int mid= st+(end-st)/2;
        if (nums[mid]==target)
        {
            return mid;
        }
        if(nums[st]==nums[mid] && nums[mid]== nums[end]){
            st++;
            end--;
            continue;
        }
       
        
        if(nums[st]<=nums[mid]){
            if (nums[st]<=target && target<nums[mid])
            {
                end= mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if (nums[mid]<target && target<=nums[end])
            {
                st=mid+1;
            }else{
                end=mid-1;
            }
            
        }
    }
    return -1;

}
 int main(){
    vector<int> nums={2,5,6,0,0,1,2};
    int tar=6;
    cout<<search(nums,tar);
    return 0;
 }
