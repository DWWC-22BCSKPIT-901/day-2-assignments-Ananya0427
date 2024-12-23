#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int largest=0;
    while(n>0){
        if(n % 10 > largest){
            largest=n%10;
        }
        n=n/10;
    }
    cout<<largest;
    return 0;
}