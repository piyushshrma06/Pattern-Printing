#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< " Enter no of rows: ";
    cin>>n;
    
    // no. of lines 
    for(int i = 1 ; i <=n ; i++){ 

        //no.of star in each lines

        for(int j = 1; j <= n ; j++){
            int t = j+64;
            cout<<(char)t<<" ";
        }
        // ek line k baadh
        cout<<endl;
 
    }
}