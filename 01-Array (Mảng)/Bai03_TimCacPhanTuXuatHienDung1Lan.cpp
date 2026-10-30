#include<iostream>
using namespace std;
int main(){
    int a[] = {2, 5, 2, 7, 5, 9, 8};
    int n = 7;

    cout << "Cac so xuat hien dung 1 lan: ";
    for(int i =0;i<n;i++){
        int dem =0;
        for(int j =0;j<n;j++){
            if(a[i] == a[j]){
                dem++;
            }
        }
        if(dem == 1){
            cout<<a[i] << " ";
        }
    }

    return 0;
}
