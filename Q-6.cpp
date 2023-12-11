#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    long long lo = 0;
    long long hi = n;
    while (lo<=hi){
        long long mid = lo + (hi-lo)/2;
        long long step = mid*(mid+1)/2;
        if(step == n){
            cout<<(int)mid;
            break;
        }
        else if(step<n){
            lo = mid + 1;
        }
        else{hi = mid-1;}
    }
    cout<<(int)hi;
}