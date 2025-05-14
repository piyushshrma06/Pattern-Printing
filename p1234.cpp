#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<< " Enter no of rows: ";
    cin>>n;
    cout<< " Enter no of stars in each line: ";
    cin>>m;
    // no. of lines 
    for(int i = 1 ; i <=n ; i++){ 

        //no.of star in each lines

        for(int j = 1 ; j <= m ; j++){
            cout<<j<<" ";
        }
        // ek line k baadh
        cout<<endl;
 
    }
}