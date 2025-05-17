#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAII();

    static void setNim(int pNim);
    static int getNim();

    mahasiswa(string pnama):nama(pnama){setID();}
};

int mahasiswa::nim=0;

void mahasiswa::setID(){
    id = ++nim;
}

void mahasiswa::printAII(){
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs2("Budi Jatmiko");
    mahasiswa::setNim(9); 
    mahasiswa mhs3("Andi Janu");
    mahasiswa mhs4("Joko Wahono");

    mhs1.printAII();
    mhs2.printAII();
    mhs3.printAII();
    mhs4.printAII();

    cout<<"akses dari luat object = "<<mahasiswa::getNim()<<endl;

    return 0;
}