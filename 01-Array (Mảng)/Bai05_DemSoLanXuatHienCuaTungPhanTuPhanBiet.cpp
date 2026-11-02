#include<iostream>
using namespace std;
int main(){
    int a[] = {2, 5, 2, 7, 5, 2, 8, 7, 9};
    int n = 9;

    for(int i =0;i<n;i++){
        int dem = 0;
        bool daXuatHien = false;
        for(int j =0; j <i;j++){
            if(a[i]== a[j]){
                daXuatHien = true;
                break;
            }
        }
        for(int j = 0;j<n;j++){
            if(a[i] == a[j]){
                dem++;
            }
        }
        if (daXuatHien == false){
            cout<<"Số "<<a[i]<<"Xuất hiện" <<dem << "lan"<<endl;
        }
    }

    return 0;
}
