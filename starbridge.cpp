#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< " Enter no of rows must be odd: ";
    cin>>n;
    int m = n-1; 
    
    // no. of lines 4
    for(int i = 1 ; i <=2*n-1 ; i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(int i = 1 ; i <=m ; i++){ 
        for(int j = 1; j <= m-i+1 ; j++){
            cout<<"*"<<" ";
        }
        for(int j = 1; j <= 2*i-1 ; j++){
            cout<<" "<<" ";
        }
        for(int j = 1; j <= m-i+1 ; j++){
            cout<<"*"<<" ";
        }
        // ek line k baadh
        cout<<endl;
 
    }
}