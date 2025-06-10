#include <iostream>
using namespace std;

int main(){
    try {
        cout << "selamat Belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataaan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengeculaian akan dieksekusi " << endl;
    }
    catch (int a) {
        //blok ini akan di eksekusi 
        cout << "Pengecualian akan dikesekusi" << endl;
    }
    catch (...) {
        /* jika selain integer maka blok ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}