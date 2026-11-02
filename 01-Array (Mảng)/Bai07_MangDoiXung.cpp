#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 2, 1};
    int n = 5;
     bool doiXung = true;
    for(int i =0; i<n/2 ;i++){
        if(a[i] != a[n-1-i]){
            doiXung = false;
            break;
        }
    }
    if(doiXung == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
