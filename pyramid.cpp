#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter no of rows: ";
    cin>>n;
    
    // no. of lines 
    for(int i = 1 ; i <=n ; i++){  

        //no.of star in each lines
        int a=1;
        
        for(int j = 1 ; j <= n-i; j++){
            cout<<" "<<" ";
        }
        for(int k = 1 ; k <= i; k++){
            cout<<k<<" ";
            
        }
        for(int l = 1 ; l <= i-1; l++){
            
            cout<<i-l<<" ";

            
        }
        // ek line k baadh
        cout<<endl;
 
    }

}