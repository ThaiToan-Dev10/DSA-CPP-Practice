#include<iostream>
using namespace std;
int main(){
    int a[] = {2, 5, 2, 7, 5, 2, 8};
    int n = 7;
    int maxDem = 0;
    int soNhieuNhat = a[0];

    for(int i =0;i<n;i++){
            int dem = 0;
        for (int j =0; j<n;j++){
            if(a[j] == a[i]){
                dem++;
            }
        }

        if(dem > maxDem){
            maxDem =dem;
            soNhieuNhat = a[i];
        }
    }
    cout<<"Số xuất hiện nhiều nhất là: "<<soNhieuNhat<<endl;
    cout<<"Số xuat hien là:"<<maxDem;
}
