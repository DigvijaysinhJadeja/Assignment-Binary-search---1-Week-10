#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n = 8;
    int x = 4;
    int lo = 0;
    int hi = n-1;
    int z = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            z = mid;
            lo = mid+1;
        }
        else if(arr[mid]<x){lo = mid+1;}
        else{hi=mid-1;}
    }
    cout<<z<<endl;
}