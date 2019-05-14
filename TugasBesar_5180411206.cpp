#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
struct pus
{
    int nik;
    string nama,alamat,keluh,poli,dok;
    int umur;
}puskes[100];
int a=1,i,j,b,c,d,tgl,y=1;

void data_pas(pus){
    cout<<"---------------------------"<<endl;
    cout<<"Data Pasien"<<endl;
    cout<<"---------------------------"<<endl;
    int pilih=0,x;
    do{
        cout<<"1. Lihat Data"<<endl;
        cout<<"2. Tambah Data"<<endl;
        cout<<"3. Hapus Data"<<endl;
        cout<<"4. Edit Data"<<endl;
        cout<<"0. keluar"<<endl;
        cout<<"Pilih Menu = ";cin>>pilih;
        cout<<"---------------------------"<<endl;
    switch(pilih){
            case 1:{if(y==10){cout<<"Salah"<<endl;}else{
                    int i,j;
                    cout<<"\n===============================================Menampilkan Data=============================================\n\n";
                    cout<<"=========================================================================================================\n";
                    cout<<"||\tNo\t||\tNik\t||\tNama\t||\tUsia\t\t||\tAlamat\t||\tKeluhan\t||\n";
                    cout<<"========================================================================================================\n";
                    j=0;
                    for(i=1;i<a;++i)
                    { j=j+1;
                    cout<<"||\t"<<j<<"\t";
                    cout<<"||\t"<<puskes[i].nik<<"\t||";
                    cout<<"\t"<<puskes[i].nama<<"\t||";
                    cout<<"\t"<<puskes[i].umur<<" tahun\t||";
                    cout<<"\t"<<puskes[i].alamat<<"\t||";
                    cout<<"\t"<<puskes[i].keluh<<"\t||";
                    cout<<endl;
                    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
                    }
                    };};break;
            case 2:{if(y==10){cout<<"Masih Kosong"<<endl;}else{

                    cout<<"Masukan Jumlah Yang Akan Diinput = ";cin>>b;
                    d=0;
                    for(c=0;c<b;c++){
                    d=d+1;
                    cout<<"-------------------------------"<<endl;
                    cout<<"Data Ke-"<<d<<endl;
                    cout<<"Nik      =   ";cin>>puskes[a].nik;
                    cout<<"Nama     =   ";cin>>puskes[a].nama;
                    cout<<"Usia     =   ";cin>>puskes[a].umur;
                    cout<<"Alamat   =   ";cin>>puskes[a].alamat;
                    cout<<"Keluhan  =   ";cin>>puskes[a].keluh;
                    cout<<"-------------------------------"<<endl;
                    cout<<endl;
                    a++;
                    }
                    };};break;

            case 3:{if(y==10){cout<<"Salah"<<endl;}else{
                    cout<<"Hapus Date Ke-";cin>>x;
                    y=x-1;
                    a--;
                    for (int i=y;i<a;i++)
                    {puskes[i]=puskes[i+1];}
                    cout<<" Data Terhapus = "<<x<<endl;
                    ;}break;}
            case 4:{if(y==10){cout<<"Salah"<<endl;}else{
                int m,n;
                cout<<"Masukan Data Yang Akan DiEdit = ";cin>>m;
                n=m-1;
                    cout<<"Nik      =   ";cin>>puskes[a].nik;
                    cout<<"Nama     =   ";cin>>puskes[a].nama;
                    cout<<"Usia     =   ";cin>>puskes[a].umur;
                    cout<<"Alamat   =   ";cin>>puskes[a].alamat;
                    cout<<"Keluhan  =   ";cin>>puskes[a].keluh;
            };break;}
            case 0:cout<<"---------------Keluar Menu---------------"<<endl;break;
                default : cout<<"Masukan Salah"<<endl;
            }}
            while(pilih!=0);
            }
void data_poli(pus){
cout<<"===========Data POLI==========="<<endl;
int pilih=0,y=1,x;
    do{
        cout<<"1. Input Data"<<endl;
        cout<<"2. Lihat Data "<<endl;
        cout<<"3. Edit Data "<<endl;
        cout<<"4. Hapus Data "<<endl;
        cout<<"0. keluar"<<endl;
        cout<<"Pilih Menu =";cin>>pilih;
        cout<<"---------------------------------------------"<<endl;
    switch(pilih){
                case 1:{if(y==10){cout<<"Masih Kosong"<<endl;}else{
                        cout<<"||----------------------------||"<<endl;
                        cout<<"~~~~~~Tambah Poli~~~~~~"<<endl;

                        cout<<"Masukan Jumlah Yang Akan Diinput = ";cin>>b;
                        d=0;
                        for(c=0;c<b;c++){
                        d=d+1;
                        cout<<"Data ke-"<<d<<endl;
                        cout<<"Masukan Nama Poli = ";cin>>puskes[a].poli;
                        cout<<"Masukan Nama Dokter = ";cin>>puskes[a].dok;
                        cout<<"||----------------------------||"<<endl;
                        a++;}
                            };break;}
                case 2:{if(y==10){cout<<"Salah"<<endl;}else{
                        cout<<"\n==========================Menampilkan Data===============================\n\n";
                        cout<<"=================================================================\n";
                        cout<<"||\tNo\t||\tNama Poli\t||\tNama Dokter\t||\n";
                        cout<<"==================================================================\n";
                        j=0;
                        for(int i=1;i<a;i++){
                        j=j+1;
                        cout<<"||\t"<<j<<"\t||";
                        cout<<"||\t"<<puskes[i].poli<<"\t||";
                        cout<<"||\t"<<puskes[i].dok<<"\t||";
                        cout<<endl;
                };};break;}
                case 3:{if(y==10){cout<<"Salah"<<endl;}else{
                        int m,n;
                        cout<<"Masukan Data Yang Akan DiEdit = ";cin>>m;
                        n=m-1;
                            cout<<"Nama Poli      =   ";cin>>puskes[a].poli;
                            cout<<"Nama Dokter    =   ";cin>>puskes[a].dok;

                        };break;}

                case 4:{if(y==10){cout<<"Salah"<<endl;}else{
                        cout<<"Hapus Date Ke-";cin>>x;
                        y=x-1;
                        a--;
                        for (int i=y;i<a;i++)
                        {puskes[i]=puskes[i+1];}
                        cout<<" Data Terhapus = "<<x<<endl;
                        ;}break;}
                case 0: cout<<"----------Program Dihentikan---------"<<endl;;break;
                default : cout<<"Tidak Valid"<<endl;
                }}
                while(pilih!=0);

                }

void pendaftaran(pus){
        cout<<"Masukan Tanggal = ";cin>>tgl;
        cout<<"Masukan Nama    = ";cin>>puskes[a].nama;
        cout<<"Masukan Poli    = ";cin>>puskes[a].poli;
        cout<<"========================================="<<endl;
        cout<<"Seorang WNI pada Tanggal "<<tgl<<" Dengan Nama "<<puskes[a].nama<<" Telah Mencatatkan Namanya di Bagian poli"<<puskes[a].poli<<endl;
}
int main(){
    int pilih=0,y=1;
        do{
            cout<<"---------------------------------------------"<<endl;
            cout<<"Aplikasi Puskesmas"<<endl;
            cout<<"---------------------------------------------"<<endl;
            cout<<"1. Data Pasien"<<endl;
            cout<<"2. Data Poli"<<endl;
            cout<<"3. Pendaftaran"<<endl;
            cout<<"0. keluar"<<endl;
            cout<<"Pilih Menu = ";cin>>pilih;
            cout<<"---------------------------------------------"<<endl;
        switch(pilih){
                        case 1:{if(y==10){cout<<"Masih Kosong"<<endl;}else{data_pas(puskes[i]);};break;}
                        case 2:{if(y==10){cout<<"Salah"<<endl;}else{data_poli(puskes[i]);};break;}
                        case 3:{if(y==10){cout<<"Salah"<<endl;}else{pendaftaran(puskes[i]);};break;}
                        case 0: cout<<"++++++++++Program Selesai++++++++++";break;
                        default : cout<<"Tidak Valid"<<endl;
                    }}
                    while(pilih!=0);
return 0;
getch();
                    }

