#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    cout << "masukkan Nama File : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

}