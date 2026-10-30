
#include<iostream>
using namespace std;

int main(){
    int a[] = {2, 5, 2, 7, 5, 9, 8, 7, 7};
    int n = 9;

    cout << "Cac so xuat hien dung 2 lan: ";

    for(int i = 0; i < n; i++){
        int dem = 0;
        bool daXuatHien = false;


        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                daXuatHien = true;
                break;
            }
        }


        for(int j = 0; j < n; j++){
            if(a[i] == a[j]){
                dem++;
            }
        }


        if(dem == 2 && daXuatHien == false){
            cout << a[i] << " ";
        }
    }

    return 0;
}
