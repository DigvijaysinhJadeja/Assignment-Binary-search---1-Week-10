#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        long long mid = lo+(hi-lo)/2;
        if((long long)(mid*mid)==(long long)(n)){
            flag = true;
            break;
        }
        else if((long long)(mid*mid)<(long long)(n)){
            lo = mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(flag){cout<<"yes"<<endl;}
    else{cout<<"no"<<endl;}
    
}