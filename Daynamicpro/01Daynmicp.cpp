#include<iostream>
#include<vector>


using namespace std;

int fibofun(int n, vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!= -1) return dp[n];
    
    return dp[n]= fibofun(n-1, dp)+fibofun(n-2,dp);

    
}



int fibo2(int n ,  vector<int>&db){
     int i;
     // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;
     db[0]=0;
     db[1]=1;
     int a, b;
     for( i=2;i<n+1;i++){
       db[i]=db[i-1]+db[i-2];

     }

     return db[i];



}

int main(){
    int n;
    // give  in put
    cin>>n;
    cout <<"user input is n"<<n;
    vector<int>dp(n+1,-1);
    cout<<"your outp ut is "<< fibo2(n,dp);



     return 0;

}