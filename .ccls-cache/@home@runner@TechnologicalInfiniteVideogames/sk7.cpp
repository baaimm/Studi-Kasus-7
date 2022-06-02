#include<iostream>
#include<string.h>

using namespace std;

class  mi7{
    public:
    void input();
    void proses();
    void output();

// tempat data disimpan
    string nama[50];
    string huruf;
// variabel
    int n;
    string cari;
    string temp;
};

void mi7::input(){
    cout << "\t\t\t\tBINATANG\n\n";
    cout << "Masukan banyak hewan ke database : ";
    cin >> n;
    cout << "\n";
    for (int i=0; i<n;i++){
        cout << "Masukan nama hewan : ";
        cin >> nama[i];
    }
}
void mi7::proses(){
    cout << "========================\n";
    cout << "DATA SEBELUM DIURUTKAN : \n";
    for(int i=0;i<n;i++){
        cout <<"nama hewan  = " << nama[i] << endl;
    }
//sorting
 for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(nama [j-1] > nama [j]){ 
                temp = nama[j-1];
                nama[j-1] = nama[j];
                nama[j] = temp;
            }
        }
    }
    cout << "==========================\n";
    cout << "DATA SETELAH DIURUTKAN : \n";
    for(int i=0;i<n;i++){
        cout << "Nama hewan = "<< nama[i] <<" \n";
    }

// melacak lokasi nama ada di index berapa
    cout<<"Pilih = ";
    cin>>cari;
    cout<<"Cari Karakter = ";
      cin >> huruf;
    for (int i=0;i<n;i++){
        if(cari == nama[i]){
            cout <<"Data Ditemukan Pada indeks - "<< i <<endl;
        }
        else{
            cout <<"Data tidak ditemukan pada indeks - "<< i << endl;
        }
    }
}

int main(){
    mi7 x;
    x.input();
    x.proses();
    return 0;
}