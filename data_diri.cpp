#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, kelas;
    int nim, umur;

    cout<<"masukan nama : ";
    getline(cin, nama); 

    cout<<"masukan kelas : ";
    cin >> kelas;
   
    cout<<"masukan nim : ";
    cin >> nim;

    cout<<"masukan umur : ";
    cin >> umur;

    cout<<"== DATA DIRI ==" << endl;
    cout<<"nama     : " << nama << endl;
    cout<<"kelas    : " << kelas << endl;
    cout<<"nim      : " << nim << endl;

    return 0;
}