#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    //membuka filr dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    //enlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //menempatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda masukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //membuka file dalam dalam moe mebaca
    ifstream infile;
    //menunjuk sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}
