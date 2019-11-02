#include <iostream>

using namespace std;

int main(){
    int array[5]={14,13,12,11,10}
    int minimal, maksimal, jumlah=0;
    float rata;
    for (int i = 0; i < 5; i++)
    {
        cout << "data baris ke-" << i << "= " <<a[i] << endl;
        jumlah = jumlah + a[i];
    }
    rata = jumlah / 20;
    cout<< "jumlah= "<< jumlah << endl;
    cout<< "rata= "<< rata << endl;
    minimal = A[0];
    maksimal = A[0];
    for(int j = 0; j < 20; j++){
        if(A[j]>maksimal){
            maksimal=A[j];
        }
        if(A[j]>minimal){
            minimal=A[j];
        }
    }
    cout<<"nilai tertinggi adalah= " << maksimal << endl;
    cout<<"nilai terendah adalah= " << minimal << endl;
    system("pause");
    return 0;
}



