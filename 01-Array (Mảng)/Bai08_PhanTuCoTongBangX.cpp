#include<iostream>
using namespace std;
int main(){
    int a[] = {2, 4, 3, 5, 7, 8};
    int n = 6;
    int x = 10;
    for(int i =0;i<n ;i++){
        for(int j =i+1;j<n;j++){
            if(a[i] + a[j] ==x){
                cout<<a[i] <<" "<< a[j]<< " ";
            }
        }
    }
    return 0;
}
