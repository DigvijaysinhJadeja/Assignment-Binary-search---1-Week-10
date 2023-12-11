#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,0,0,0,1,1};
    int n = 7;
    int x = 1;
    int lo = 0;
    int hi = n-1;
    int dega = -1;
    while(lo<=hi){ // last occurance of element
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            dega = mid;
            lo = mid+1;
        }
        else if(arr[mid]<x){lo = mid+1;}
        else{hi=mid-1;}
    }
    
    lo = 0;
    hi = n-1;
    int lega = -1;
    while(lo<=hi){ // first occurance of element
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            lega = mid;
            hi = mid-1;
        }
        else if(arr[mid]<x){lo = mid+1;}
        else{hi=mid-1;}
    }
    cout<<(dega-lega)+1<<endl;
}