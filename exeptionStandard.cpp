#include <iostream>
#include <exception>
//untuk obyek exeption yang kan digunakan
#include <array>
//using obyek array yang akan kita gunakan
using namespace std;

int main(){
    cout << "Awal program" << endl; // penanda 1:...
    try {
        array<int, 3> data = { 10, 20, 30};
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penamgkap menggunakan obyek exeption 
        cout << e.what() << endl;
        /* akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
  