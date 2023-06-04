#include<bits/stdc++.h>
using namespace std;
int maximumsum(int arr[],int n){
    int prefix_sum=0;
    int currsum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum>currsum){
            currsum=prefix_sum;
        }
        if(prefix_sum<0)
        {
            prefix_sum=0;
        }


    }
    return currsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


        

    }
    int result=maximumsum(arr,n);
    cout<<result;
    return 0;
}