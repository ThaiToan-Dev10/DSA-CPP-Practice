#include<iostream>
using namespace std;

int main(){
    int a[] = {2, 5, 2, 7, 5, 9, 7};
    int n = 7;
    int dem =0;
    for(int i = 0; i< n;i++){
        bool daXuatHien = false;
        for (int j = 0;j<i;j++){
            if(a[i] == a[j]){
                daXuatHien = true;
                break;
            }
        }
        if(daXuatHien == false){
            dem++;
        }
    }
    cout<<"Số lượng phần tử phân biệt: "<<dem;
    return 0;
}
