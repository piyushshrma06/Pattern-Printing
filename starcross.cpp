#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< " Enter no of rows must be odd: ";
    cin>>n;
      
    
    // no. of lines 
    for(int i = 1 ; i <=n ; i++){ 

        //no.of star in each lines
        

        for(int j = 1; j <= n ; j++){
            if(j==i||j == n+1-i){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        // ek line k baadh
        cout<<endl;
 
    }
}