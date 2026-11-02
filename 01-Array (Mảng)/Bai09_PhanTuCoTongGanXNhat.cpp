#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[] = {2, 4, 7, 9, 12};
    int n = 5;
    int x = 15;
    int minKhoangCach = 1000000;
    int so1=0;
    int so2 =0;
    for(int i = 0; i<n;i++){
        for(int j= i+1; j<n;j++){
            int tong  = a[i] + a[j];
            int khoangCach = abs(tong - x);
            if(khoangCach < minKhoangCach){
                minKhoangCach = khoangCach;
                so1 = a[i];
                so2 = a[j];
            }
        }
    }
    cout<<so1<<" "<<so2<< " ";
    return 0;
}
