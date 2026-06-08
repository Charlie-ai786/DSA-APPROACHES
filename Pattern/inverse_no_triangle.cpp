#include <iostream>
using namespace std;

void pattern1(int n){
    
    for(int i=0;i<n;i++){
        int no=1;
        for(int j=n;j>i;j--){
            cout<<no;
            no+=1;
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