#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void maxi(vector<vector<int>>&v,int &n){
    int lo = 0;
    int hi = n-1;
    int x = 1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(v[mid][0]==x){
            cout<<"maximum number of 1's in a row."<<mid;
            break;
        }
        else if(v[mid][0]<x){
            lo = mid+1;
        }
    }
    return;
}
int main (){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    maxi(v,n);
}