#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i=0;
cout<<"Enter number of cases : ";
cin >>n;
int a[n];
while(i<n){
cout<<"Enter Number "<<(i+1)<<" : ";
cin>>a[i];
i++;
}
i--;
cout<<"Configured!";
while(i>=0){
cout<<"Number "<<(i+1)<<" = "<<a[i]<<"\n";
i--;
}
return 0;
}
