#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lo = 0;
    int hi = n-1;
    int z = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==mid){
            z = mid;
            hi=mid-1;
        }
        else if(arr[mid]>mid){lo=mid+1;}
    }
    cout<<z<<endl;
}