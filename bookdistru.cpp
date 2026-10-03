#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>&arr,int n,int m,int mid){
    int stud=1,pages=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>mid)
    {
        return false;
    }
    if (pages+ arr[i]<=mid)
    {
        pages+=arr[i];
    }else{
        stud++;
        pages=arr[i];
    }
    }
if (stud>m)
{
    return false;
}
    return true;

}


int allocatebook(vector<int>& book,int N,int M){
if (M>N)
{return -1;}

int sum=0;
for (int i = 0; i < N; i++)
{
sum+=book[i];
}
int ans=-1;
int st=0,end=sum;
while (st<=end)
{
    int mid=st+(end-st)/2;
    if (isvalid(book,N,M,mid))
    {
        ans=mid;
        end=mid-1;
    }else{
        st=mid+1;
    }
    
}
return ans;

}
int main(){
    vector<int>book={15,20,40};
    int M=2, N=3;
    cout<<allocatebook(book,N,M);
    return 0;
}