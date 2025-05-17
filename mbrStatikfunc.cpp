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