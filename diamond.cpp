#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter no of rows: ";
    cin>>n;
    
    // no. of lines 
    for(int i = 1 ; i <=2*n-1; i++){  
        if(i<=n){

        //no.of star in each lines
        int a=1;
        
        for(int j = 1 ; j <= n-i; j++){
            cout<<" "<<" ";
        }
        for(int k = 1 ; k <= i; k++){
            cout<<"*"<<" ";
            
        }
        for(int l = 1 ; l <= i-1; l++){
            
            cout<<"*"<<" ";

            
        }

        // ek line k baadh
        cout<<endl;
    }
    else{
        for(int k = 1 ; k <= i-n; k++){
            cout<<" "<<" ";
            
        }
        for(int m = 1 ; m<= 2*n-1-i+1; m++){
            cout<<"*"<<" ";
        }
        for(int m = 1 ; m<= 2*n-1-i; m++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
 
    }

}