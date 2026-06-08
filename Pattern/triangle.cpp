#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        //Space
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //Star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }        
        cout<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern1(n);
    }
}