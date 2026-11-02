#include<iostream>
using namespace std;
int main(){
    int a[] = {2, 4, 7, 5, 9};
    int n = 5;
    bool tangDan = true;
    for(int i =0;i<n-1;i++){
        if(a[i] > a[i+1]){
            tangDan =false;
            break;
        }
    }
    if(tangDan == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
