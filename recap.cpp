#include <iostream>
using namespace std;

// void tulis(){
//     cout << "haloo";
// }

void tulis(string name = "john"){
    cout << "haloo " << name;
}

void tambah(int x, int y, int z=5, string name="john"){
    cout << name << " " << x+y+z;
}

int kurang(int x, int y, int z=5){
    int jumlah = x-y-z;
    return jumlah;
}

double kurang(double x, double y){
    int jumlah = x-y;
    return jumlah;
}

void swap(int &x, int &y){
    int temp = x;
    x = y ;
    y = temp;
}

int sum(int num[5]){
    int jmlh = 0;
    for(int i = 0; i < 5; i++)
        jmlh += num[i];

    return jmlh;
}

void countDown(int x){
    if(x == 0){
        cout << "end";
    } else {
        cout << x << endl;
        countDown(x-1);
    }
}

class Mahasiswa{
    // access specifier
    private:
        // atribut
        string nama, npm;

        void nyapa(){
            cout << "haloo";
        }        

    public:
        // constructor default
        Mahasiswa(){
            this->nama="john";
            this->npm="2117051024";
        }

        Mahasiswa(string name, string npm){
            this->nama=name;
            this->npm=npm;
        }

        // method
        void nilai(){
            cout << "hadir";
        }

        // setter
        void setNama(string name){
            this->nama = name;
        }  

        // getter
        string getNama(){
            return this->nama;
        }      

        // setter
        void setNpm(string npm){ 
            this->npm = npm;
        }

        string getNpm(){
            return npm;
        }
};

// void Mahasiswa::nilai(){
//     cout << "hadir";
// }

int main(){
    // Function

    // void
    // tulis();

    // parameter
    // tulis("john");
    
    // default parameter
    // tulis();
    // cout << endl;
    // tambah();

    // multiple parameters
    // tambah(2,4);

    // return values
    // cout << kurang(2,4);

    // pass by reference
    //  &
    // int x = 10, y = 5;

    // cout << x << " " << y <<endl;
    // swap(x,y);
    // cout << x << " " << y;

    // pass arrays
    // int number[] = {2,4,6,8,10};
    // cout << sum(number);

    // recursion
    // countDown(10);

    // overloading
    // cout << kurang(5,2);

    // Array
    // array n Loop
    // int myNum[9] = {1,2,3,4,5,6,7,8,9};

    // for(int i = 0; i < 9; i++){
    //     cout << myNum[i] << " ";
    // }  

    // int jumlh = sizeof(myNum)/sizeof(int);

    // cout << jumlh << endl; 

    // for(int i = 0; i < jumlh; i++){
    //     cout << myNum[i] << " ";
    // }

    // for each
    // for (int x : myNum)
    //     cout << x << " ";

    // Class
    // object
    // Mahasiswa mhs;
    // mhs.nilai();
    // mhs.setNama("john");
    // cout << endl << mhs.getNama() << endl;
    // mhs.setNpm("2117051024");
    // cout << mhs.getNpm();

    // setter getter
    // constructor
    Mahasiswa mhs("wilken", "230193013");
    mhs.nilai();

    // method outside class


    return 0;
}