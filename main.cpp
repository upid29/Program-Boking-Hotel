#include <iostream>
#include <windows.h>
#include <ctime>
#include <fstream>

using namespace std;

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}
void cetak(string lokasi[],int n)
{
    for(int i=0; i<n; i++){
        cout << "\t\t" <<i+1<< ". "<< lokasi[i]<<endl;
    }
}
int sequence_search(string lokasi[], int n, string k)
{
    int posisi,i,ketemu;

    if(n <= 0){
        posisi = -1;
    }else{
        ketemu = 0;
        i = 0;
        while((i<n) && !ketemu){
            if(lokasi[i] == k){
                posisi = i;
                ketemu = 1;
            }else{
                i++;
            }
        }
    }
    return posisi;
}

int SelectSort(string lokasi[], int panjang)
{
    int nilaimaks;
    string temp;
    for(int i=0; i<panjang-1; i++){
            nilaimaks=i;
            for(int j=i+1; j<panjang; j++){
                if(lokasi[j] < lokasi[nilaimaks]){
                        nilaimaks=j;
                }
        }
        if(nilaimaks !=1){
            temp=lokasi[i];
            lokasi[i] = lokasi[nilaimaks];
            lokasi[nilaimaks]=temp;
        }
}
}

int main()
{
int  kamar, no_kamar, harga_kamar, ranjang, jenis;
int  biaya, total, bayar, lebih, lama, um, kurang, diskon;
string jwb, checkin, checkout, pemesan, ka;
char jk, ktp[20], id_resepsionis[20], resepsionis[30], customer[30], hp[50];


cout << "\n\n";
system("pause");
system("cls");

awal:
    int i = 7;
    string k;
    string lokasi[]={"Bandung","Yogyakarta","Jakarta","Bali","Semarang","Surabaya","Medan"};

    cout << "\n\n\t\t------------------------------------------------";
    cout << "\n\t\tDaftar Lokasi" << endl;
    cout << "\t\t------------------------------------------------"; cout<<endl;
    SelectSort(lokasi,i);
    cetak(lokasi,i);
    cout << "\t\t------------------------------------------------";
    cout << endl << "\t\tMasukan Lokasi(1-7): ";
    cin >> i;
    int posisi = sequence_search(lokasi,i,k);
        if(i<=0 || i>=8){
            system("cls");
            setcolor(4);
            cout << "\n\n\t\t!!!lokasi yang anda masukan tidak ada"<<endl;
            cout << "\t\tSilahkan pilih ulang" << endl;
            setcolor(7);
            cout << endl;
            goto awal;
        }else{
            setcolor(10);
            cout << "\t\tlokasi yang anda pilih yaitu " << lokasi[i-1] << endl;
            setcolor(7);
        }
    cout << "\t\t------------------------------------------------";
    cout << "\n\n";
    system("pause");
    system("cls");

cout << "\n\n\t\t------------------------------------------------";
cout << "\n\t\tSilahkan Isi Form berikut ini";
cout << "\n\t\t------------------------------------------------"; cout<<endl;
    cin.ignore(1,'\n');
cout << "\t\tNama Pemesan         : "; cin.getline(customer,30);
cout << "\t\tNomer KTP            : "; cin >> ktp;
kelamin:
cout << "\t\tJenis Kelamin [L/P]  : "; cin >> jk;
    if(jk!='p' && jk!='P' && jk!='l' && jk!='L'){
        setcolor(4);
        cout << "\t\t\t!!!ulangi" << endl;
        setcolor(7);
        goto kelamin;
    }
cout << "\t\tNomor Telp/HP        : "; cin >> hp;
cout << "\t\tKota Asal            : "; cin >> ka;
cout << endl;
system("cls");


tipe:
    cout << "\n\n\t\t------------------------------------------------";
    cout << "\n\t\tSilahkan Pilih tipe kamar yang anda inginkan";
    cout << "\n\t\t------------------------------------------------";
    cout << "\n\t\t1. Standard";
    cout << "\n\t\t2. Premium";
    cout << "\n\t\t3. Deluxe";
    cout << "\n\t\t4. Suite";
    cout << "\n\t\t5. Presidential";
    cout << "\n\t\t------------------------------------------------";
    cout << "\n\t\tMasukkan Pilihan (1-5): "; cin >> kamar;
        if(kamar<=0 || kamar>=6){
            system("cls");
            setcolor(4);
            cout << "\n\n\t\t!!!Tipe kamar yang anda masukan tidak ada"<<endl;
            cout << "\t\tSilakan pilih ulang";
            setcolor(7);
            goto tipe;
            }
    system("cls");

ranjang:
    cout << "\n\n\t\t---------------------------------------------------";
    cout << "\n\t\tSilahkan Pilih jenis ranjang yang anda inginkan";
    cout << "\n\t\t---------------------------------------------------";
    cout << "\n\t\t1. Single";
    cout << "\n\t\t2. Twin";
    cout << "\n\t\t3. Double";
    cout << "\n\t\t4. Tripple";
    cout << "\n\t\t---------------------------------------------------";
    cout << "\n\t\tMasukkan Pilihan (1-4): "; cin >> ranjang;
        if(ranjang<=0 || ranjang>=5){
            system("cls");
            setcolor(4);
            cout << "\n\n\t\t!!! Jenis ranjang yang anda masukan tidak ada" << endl;
            cout << "\t\tSilakan pilih ulang";
            setcolor(7);
            goto ranjang;
            }

if(kamar==1 && ranjang==1){
    setcolor(2);
    cout << "\t\tAnda memilih kamar tipe STANDAR dengan ranjang SINGLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=250000;
    }
else if(kamar==1 && ranjang==2){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe STANDAR dengan ranjang TWIN ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=350000;
    }
else if(kamar==1 && ranjang==3){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe STANDAR dengan ranjang DOUBLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=500000;
    }
else if(kamar==1 && ranjang==4){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe STANDAR dengan ranjang TRIPPLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=750000;
    }
else if(kamar==2 && ranjang==1){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PREMIUM dengan ranjang SINGLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=350000;
    }
else if(kamar==2 && ranjang==2){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PREMIUM dengan ranjang TWIN ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=450000;
    }
else if(kamar==2 && ranjang==3){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PREMIUM dengan ranjang DOUBLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=650000;
    }
else if(kamar==2 && ranjang==4){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PREMIUM dengan ranjang TRIPPLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=800000;
    }
else if(kamar==3 && ranjang==1){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe DELUXE dengan ranjang SINGLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=500000;
    }
else if(kamar==3 && ranjang==2){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe DELUXE dengan ranjang TWIN ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=750000;
    }
else if(kamar==3 && ranjang==3){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe DELUXE dengan ranjang DOUBLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=900000;
    }
else if(kamar==3 && ranjang==4){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe DELUXE dengan ranjang TRIPPLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=1100000;
    }
else if(kamar==4 && ranjang==1){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe SUITE dengan ranjang SINGLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=100000;
    }
else if(kamar==4 && ranjang==2){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe SUITE dengan ranjang TWIN ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=1200000;
    }
else if(kamar==4 && ranjang==3){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe SUITE dengan ranjang DOUBLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=1400000;
    }
else if(kamar==4 && ranjang==4){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe SUITE dengan ranjang TRIPPLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=1600000;
    }
else if(kamar==5 && ranjang==1){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PRESIDENTIAL dengan ranjang SINGLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=1500000;
    }
else if(kamar==5 && ranjang==2){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PRESIDENTIAL dengan ranjang TWIN ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=2000000;
    }
else if(kamar==5 && ranjang==3){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PRESIDENTIAL dengan ranjang DOUBLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=2500000;
    }
else if(kamar==5 && ranjang==4){
    setcolor(2);
    cout << "\t\tAnda Memilih kamar tipe PRESIDENTIAL dengan ranjang TRIPPLE ";
    setcolor(7);
    cout << "\n\t\t---------------------------------------------------";
    harga_kamar=3000000;
    }
else{
    cout << "tidak ada";
    }
cout << "\n\n";
system("pause");
system("cls");

nomer:
cout << "\n\n\t\t------------------------------------------------";
cout << "\n\t\tPilih No. Kamar (1-100)  : "; cin >> no_kamar;
    if(no_kamar<=0 || no_kamar>=101){
        setcolor(4);
        cout << "\n\t\t!!!Maaf nomer kamar tidak tersedia";
        cout << "\n\t\tSilakan pilih ulang";
        setcolor(7);
        goto nomer;
    }
system("cls");

cout << "\n\n\t\t------------------------------------------------";
cout << "\n\t\tMenginap lebih dari 5 hari diskon 5%/hari";
cout << "\n\t\t------------------------------------------------";
cout << "\n\t\tLama Menginap (/hari)     : "; cin >> lama;
    if(lama > 5){
        diskon = 5;
    }
    else{
        diskon=0;
    }
cout << "\t\tTanggal CheckIn (DDMMYY)  : "; cin >> checkin;
cout << "\t\tTanggal CheckOut (DDMMYY) : "; cin >> checkout;
system("cls");


cout << "\n\n\t\t------------------------------------------------";
cout << "\n\t\t            Data Pemesanan kamar";
cout << "\n\t\t------------------------------------------------";
time_t now = time(0);
cout<<"\n\t\tTanggal Transaksi = "<<ctime(&now);

cout << "\n\t\tNama Pemesan       : " << customer;
cout << "\n\t\tNomer KTP          : " << ktp;
cout << "\n\t\tKota Asal          : " << ka;
cout << "\n\t\tNo Telp/HP         : " << hp;
cout << "\n\t\tTipe kamar         : " << kamar<<" , "<<ranjang;
cout << "\n\t\tNo. Kamar          : " << no_kamar;
cout << "\n\t\tLama Menginap      : " << lama << " Hari";
cout << "\n\t\tTanggal CheckIn    : " << checkin;
cout << "\n\t\tTanggal CheckOut   : " << checkout;
cout << "\n\t\t------------------------------------------------";
cout << "\n\t\tHarga per hari     : Rp. " << harga_kamar;
cout << "\n\t\tHarga Kamar total  : Rp. " << lama*harga_kamar;
cout << "\n\t\tDiskon             : Rp. " << lama*diskon*harga_kamar/100;
cout << "\n\t\t------------------------------------------------";
total = (harga_kamar*lama)-(lama*diskon*harga_kamar/100);
cout << "\n\t\tBiaya total        : Rp. " << total;
cout << "\n\n";


jenis:
    cout << "\n\n\t\t------------------------------------------------";
    cout << "\n\t\tJenis pembayaran ";
    cout << "\n\t\t------------------------------------------------";
    cout << "\n\t\t1. Langsung";
    cout << "\n\t\t2. Transfer";
    cout << "\n\t\t------------------------------------------------";
    cout << "\n\t\tPilih jenis pembayaran: "; cin >> jenis;
        if(jenis==1){
            setcolor(2);
            cout << "\t\tSilahkan bayar dengan uang tunai rupiah";
            setcolor(7);
            cout << "\n\t\t------------------------------------------------";
        }
        else if(jenis==2){
            cout << "\t\t------------------------------------------------";
            cout << "\n\t\t>BNI - 023 827 2088";
            cout << "\n\t\t>BRI - 034 101 000 743 303";
            cout << "\n\t\t>Mandiri - 0700 000 899 992";
            cout << "\n\t\t>BCA - 731 025 2527";
            cout << "\n\t\t------------------------------------------------";
            setcolor(2);
            cout << "\n\t\tSilahkan transfer ke salah satu nomer rekening di atas";
            setcolor(7);
            cout << "\n\t\t------------------------------------------------";
        }
        else{
            system("cls");
            setcolor(4);
            cout << "\n\n\t\t!!!Jenis pembayaran yang anda masukan tidak ada";
            setcolor(7);
            goto jenis;
        }
cout << "\n\n";


cout << "\n\n\t\t------------------------------------------------";
cout << "\n\t\tUang Muka          : Rp. "; cin >> um;
    kurang = total-um;
        if(total>um){
            cout << "\n\t\tKekurangan         : Rp. " << kurang;
        }
        else if(total<um){
            cout << "\n\t\tKembali            : Rp. " << kurang*(-1);
        }
        else{
            cout << "\n\t\tLunas";
        }
cout << "\n\t\t------------------------------------------------";
cout << "\n\n\t\tApakah anda ingin memesan kamar lagi? (Y/N): ";cin>>jwb;
system("cls");
    if(jwb=="Y" || jwb=="y"){
        goto awal;
    }
    else{
        cout << "\n\n\t\t------------------------------------------------";
        setcolor(2);
        cout << "\n\t\tTerimakasih telah memilih Hotel D'BOBO";
        cout << "\n\t\tSebagai tempat peristirahatan anda :) ";
        setcolor(7);
        cout << "\n\t\t------------------------------------------------";
    }
cout << endl;

ofstream StrukPembayaran;
StrukPembayaran.open("Data Pemesanan Kamar.txt", ios::app);
StrukPembayaran << "=========================================";
StrukPembayaran << "\n         Data Pemesanan Kamar";
StrukPembayaran << "\n=========================================";
StrukPembayaran << "\nTanggal Transaksi = " << ctime(&now);
StrukPembayaran << "\nNama Pemesan       : " << customer;
StrukPembayaran << "\nNomer KTP          : " << ktp;
StrukPembayaran << "\nKota Asal          : " << ka;
StrukPembayaran << "\nNo Telp/HP         : " << hp;
StrukPembayaran << "\nTipe kamar         : " << kamar<<" , "<<ranjang;
StrukPembayaran << "\nNo. Kamar          : " << no_kamar;
StrukPembayaran << "\nLama Menginap      : " << lama << " Hari";
StrukPembayaran << "\nTanggal CheckIn    : " << checkin;
StrukPembayaran << "\nTanggal CheckOut   : " << checkout;
StrukPembayaran << "\n=========================================";
StrukPembayaran << "\nHarga Per Hari     : Rp. " << harga_kamar;
StrukPembayaran << "\nHarga Kamar Total  : Rp. " << lama*harga_kamar;
StrukPembayaran << "\nDiskon             : Rp. " << lama*diskon*harga_kamar/100;
StrukPembayaran << "\n=========================================";
StrukPembayaran << "\nTotal Biaya        : Rp. " << total;
StrukPembayaran << "\n\n             Terimaksih";
StrukPembayaran.close();

return 0;
    }

