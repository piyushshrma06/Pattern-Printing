#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter no of rows: ";
    cin>>n;
    bool a = true;
    // no. of lines 
    for(int i = 1 ; i <=n ; i++){ 
        if(i%2!=0){
            a= true;
        }
        else{
            a= false;
        }

        //no.of star in each lines

        for(int j = 1 ; j <= i; j++){
            cout<<(int)a<<" ";
            if(a==true){
                a=false;
            }
            else{
                a =true;
            }
        }
        // ek line k baadh next line
        cout<<endl;
 
    }
}