#include <iostream>
using namespace std;

int main(){
    try {
        cout << "selamat Belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataaan tidak akan dieksekusi" << endl;
    }
}