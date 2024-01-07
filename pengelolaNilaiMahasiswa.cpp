#include<iostream>
#include<iomanip>
#include<windows.h>
#include <stack>
#include <cstdint>
using namespace std;
struct biodata{
    string nama,npm,predikat;
    char nilai_huruf;
    double uas,uts,quiz,absen,nilai_akhir;
}mahasiswa[5][1000];
string namamatkul;
int main();
int arraymatkul();
void inputdata();
void tampilsemuamatkul();
void caripredikat();
void tampildetail();
void predikat(int h, int i);
void tukarMahasiswa(biodata* mhs1, biodata* mhs2);
void tampiltukar();
void cekquiz();
int main(){
    char menuselect;
    awal:
    system("CLS");
    cout<<"======================================================================================================================"<<endl;
    cout<<"|                                                                                                                    |"<<endl;
    cout<<"|                               SELAMAT DATANG DI SISTEM PENGELOLAHAN NILAI MAHASISWA                                |"<<endl;
    cout<<"|                                                                                                                    |"<<endl;
    cout<<"|                                                                                                                    |"<<endl;
    cout<<"======================================================================================================================"<<endl;
    cout<<"=======================================================  MENU  =======================================================\n\n"<<endl;
    cout<<"1. Memasukkan nilai mahasiswa pada mata kuliah tertentu"<<endl;
    cout<<"2. Menampilkan semua data mahasiswa yang telah diisi pada mata kuliah tertentu"<<endl;
    cout<<"3. Mencari data mahasiswa berdasarkan predikat pada mata kuliah tertentu"<<endl;
    cout<<"4. Mencari data mahasiswa dan menampilkan semua detail"<<endl;
    cout<<"5. Tukar nilai mahasiswa pada mata kuliah tertentu"<<endl;
    cout<<"6. Mengecek nilai quiz yang kosong dan memberi nilai"<<endl;
    cout<<"Menu yang Anda pilih : ";
    cin>>menuselect;
    switch(menuselect){
    case '1':
        inputdata();
        break;
    case '2':
        tampilsemuamatkul();
        break;
    case '3':
        caripredikat();
        break;
    case '4':
        tampildetail();
        break;
    case '5':
        tampiltukar();
        break;
    case '6':
        cekquiz();
        break;
    default:
        cout<<"Wrong..."<<endl;
        Sleep(5000);
        main();
        break;
}
}
void tampilsemuamatkul(){
    mainmenu:
    system("CLS");
    cout<<"==========================================      MENAMPILKAN SEMUA DATA   =============================================\n\n"<<endl;
    char next;
    int awal,s,h,irow;
    h=arraymatkul();
    cout<<"Berapa jumlah data mahasiswa tiap halaman yang ingin Anda lihat? : ";
    cin>>irow;
    habis:
    awal=0;
    s=irow;
    do{
            system("CLS");
cout<<"======================================================================================================================"<<endl;
cout<<"                                               "<<namamatkul<<"                                                       "<<endl;
cout<<"======================================================================================================================"<<endl;
cout<<"|      NPM     |            NAMA MAHASISWA               | ABSEN | QUIZ  |  UTS  |  UAS  | NILAI AKHIR | NILAI HURUF |"<<endl;
cout<<"======================================================================================================================"<<endl;
 for(int i=awal;i<s;i++){
        if (mahasiswa[h][i].npm==""){
            cout<<"Semua data telah ditampilkan, Anda bisa kembali ke halaman data pertama atau ke main menu"<<endl;
            cout<<"Kembali ke main menu? (y/n) : ";
            char askmain;
            cin>>askmain;
            if(askmain=='y'){
            cout<<"kami akan mengarahkan Anda ke main menu dalam 3 detik...."<<endl;
            Sleep(1000);
            cout<<"..";
            Sleep(500);
            cout<<"*";
            Sleep(1000);
            cout<<"..";
            Sleep(500);
            goto mainmenu;}else{
            cout<<"kami akan mengarahkan Anda halaman data pertama ...."<<endl;
            cout<<"Silahkan klik enter"<<endl;
            system("Pause");
            goto habis;}
        }else{
  cout<<"| "<<setiosflags(ios::left)<<setw(13)<<mahasiswa[h][i].npm<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<mahasiswa[h][i].nama<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].absen<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].quiz<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uts<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uas<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(12)<<setprecision(10)<<mahasiswa[h][i].nilai_akhir<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(12)<<mahasiswa[h][i].nilai_huruf<<"|";
  cout<<"\n======================================================================================================================\n";}
 }
 cout<<"lanjut? (y/n) : ";
  cin>>next;
s=s+irow;
awal=awal+irow;
  system("cls");
    }while(next != 'n');
    main();
}
void caripredikat(){
    char next;
    mainmenu:
    system("CLS");
    int awal,s,h,irow;
    cout<<"==========================================  PENCARIAN BERDASARKAN PREDIKAT  ==========================================\n\n"<<endl;
    h=arraymatkul();
    char huruf;
    cout<<"masukkan predikat yang ingin dicari : ";
    cin>>huruf;
    do{
        system("CLS");
    cout<<"======================================================================================================================"<<endl;
    cout<<"|      NPM     |            NAMA MAHASISWA               | ABSEN | QUIZ  |  UTS  |  UAS  | NILAI AKHIR | NILAI HURUF |"<<endl;
    cout<<"======================================================================================================================"<<endl;
    for(int i=0;i<1000;i++){
        if (mahasiswa[h][i].npm==""){
            cout<<"Semua data telah ditampilkan, Anda akan diarahkan ke main menu setelah klik enter"<<endl;
            cout<<"kami akan mengarahkan Anda ke main menu ...."<<endl;
            cout<<"Silahkan klik enter"<<endl;
            system("Pause");
            goto mainmenu;
        }else if(mahasiswa[h][i].nilai_huruf==huruf){
                cout<<"| "<<setiosflags(ios::left)<<setw(13)<<mahasiswa[h][i].npm<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(40)<<mahasiswa[h][i].nama<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].absen<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].quiz<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uts<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uas<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(12)<<setprecision(10)<<mahasiswa[h][i].nilai_akhir<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(12)<<mahasiswa[h][i].nilai_huruf<<"|";
                cout<<"\n======================================================================================================================\n";
        }else{}

    }
    cout<<"lanjut? (y/n) : ";
  cin>>next;
    }while(next != 'n');
    main();
}
void tampildetail(){
    system("CLS");
    char next,menuselect;
    string npms,matkul;
    int i,h,lasti,lasth;
    bool found;
    cout<<"==========================================       PENCARIAN DATA DETAIL   =============================================\n\n"<<endl;
    cout<<"NPM data yang ingin dicari : ";
    cin>>npms;
        cout<<"==================================================================================================================================="<<endl;
        cout<<"|           MATA KULIAH          | ABSEN | QUIZ  |  UTS  |  UAS  | NILAI AKHIR | NILAI HURUF |      REKOMENDASI MENGULANG         |"<<endl;
        cout<<"==================================================================================================================================="<<endl;
    for (h=0;h<5;h++){
        for(i=0;i<1000;i++){
                if (mahasiswa[h][i].npm==npms){
                        found=1;
                        if (h==0){matkul="Algoritma dan pemrograman";
                        }else if(h==1){matkul="Matematika Diskrit";
                        }else if(h==2){matkul="Kalkulus";
                        }else if(h==3){matkul="Fisika Dasar I";
                        }else if(h==4){matkul="Pengantar Teknologi Informasi";}
                        lasth=h;
                        lasti=i;
        cout<<"| "<<setiosflags(ios::left)<<setw(31)<<matkul<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].absen<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].quiz<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uts<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(6)<<setprecision(4)<<mahasiswa[h][i].uas<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(12)<<setprecision(10)<<mahasiswa[h][i].nilai_akhir<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(12)<<mahasiswa[h][i].nilai_huruf<<"|";
        cout<<" "<<setiosflags(ios::left)<<setw(35)<<mahasiswa[h][i].predikat<<"|";
        cout<<"\n===================================================================================================================================\n";
        }else{}
        }
    }
    if (found==1){
    cout<<"Nama mahasiswa : "<<mahasiswa[lasth][lasti].nama<<endl;
    cout<<"NPM            : "<<npms<<"\n\n\n"<<endl;
    cout << "apakah ada nilai yang ingin di diganti? (y/n): ";
    cin >> next;
    if(next=='y'){
            system("CLS");
    cout<<"Masukkan matkul yang ingin diubah"<<endl;
        h=arraymatkul();
            for(int i=0;i<1000;i++){
                if (mahasiswa[h][i].npm==npms){
                    cout<<"1. ABSEN"<<endl;
                    cout<<"2. QUIZ"<<endl;
                    cout<<"3. UTS"<<endl;
                    cout<<"4. UAS"<<endl;
                    cout<<"Silahkan pilih nilai yang ingin anda ganti : ";
                    cin>>menuselect;
                    switch(menuselect){
                        case '1':
                            cout<<"Silahkan masukkan nilai baru : ";
                            cin>>mahasiswa[h][i].absen;
                            break;
                        case '2':
                            cout<<"Silahkan masukkan nilai baru : ";
                            cin>>mahasiswa[h][i].quiz;
                            break;
                        case '3':
                            cout<<"Silahkan masukkan nilai baru : ";
                            cin>>mahasiswa[h][i].uts;
                            break;
                        case '4':
                            cout<<"Silahkan masukkan nilai baru : ";
                            cin>>mahasiswa[h][i].uas;
                            break;
                        default:
                            cout<<"wrong"<<endl;
                            break;
                    }
                    predikat(h,i);
                }
            }
            tampildetail();}else{
    main();}
    }else{}
    cout<<"Tidak ada data lain yang ditemukan"<<endl;
    system("Pause");
    main();}
int arraymatkul(){
    awal:
    int h;
    string matkul;
    cout<<"=============================================== DAFTAR KODE MATA KULIAH =============================================="<<endl;
    cout<<"[001] Algoritma dan Pemrograman"<<endl;
    cout<<"[002] Matematika Diskrit"<<endl;
    cout<<"[003] Kalkulus"<<endl;
    cout<<"[004] Fisika Dasar I"<<endl;
    cout<<"[005] Pengantar Teknologi Informasi\n\n"<<endl;
    cout<<"[000] Exit"<<endl;
    cout<<"Masukkan kode mata kuliah\t\t\t\t: ";
    cin>>matkul;
    if (matkul=="001"){
        h=0,namamatkul="Algoritma dan pemrograman";
    }else if(matkul=="002"){
        h=1,namamatkul="Matematika Diskrit";
    }else if(matkul=="003"){
        h=2,namamatkul="Kalkulus";
    }else if(matkul=="004"){
        h=3, namamatkul="Fisika Dasar I";
    }else if(matkul=="005"){
        h=4, namamatkul="Pengantar Teknologi Informasi";
    }else if(matkul=="000"){
        main();
    }else{cout<<"\n\n\n!!!!!Kode mata kuliah tidak terdaftar, silahkan masukkan ulang!!!!!\n\n\n"<<endl;system("Pause");system("CLS");goto awal;}
    return h;
}
void inputdata(){
    system("CLS");
    cout<<"==========================================           INPUT DATA          =============================================\n\n"<<endl;
    awal:
    int pertemuan,h;
    double kehadiran;
    char next;
    h=arraymatkul();
    cout<<"Masukkan jumlah pertemuan dalam semester ini \t\t: ";
    cin>>pertemuan;
    int i=0;
    do{
        if(mahasiswa[h][i].npm!=""){i++;}else{
        cout << "\n\n===========input data mahasiswa ke-" << i+1 <<"===========\n\n"<< endl;
        cout << "Nama mahasiwa ke-"<<i+1<<" \t\t: ";
        cin >> mahasiswa[h][i].nama;
        cout << "NPM mahasiwa ke-"<<i+1<<" \t\t: ";
        cin >> mahasiswa[h][i].npm;
        cout << "Jumlah kehadiran mahasiswa ke-"<<i+1<<" : ";
        cin>>kehadiran;
        mahasiswa[h][i].absen=((kehadiran/pertemuan)*100);
        cout << "Nilai quiz mahasiwa ke-"<<i+1<<" \t: ";
        cin >> mahasiswa[h][i].quiz;
        cout << "Nilai uts mahasiwa ke-"<<i+1<<" \t: ";
        cin >> mahasiswa[h][i].uts;
        cout << "Nilai uas mahasiwa ke-"<<i+1<<" \t: ";
        cin >> mahasiswa[h][i].uas;
        predikat(h,i);
    cout<<"\n\nIngin memasukkan data lagi? (y/n) \t: ";
            cin>>next;
            i++;

    }
}while(next!='n');
main();
}
void predikat(int h,int i){
mahasiswa[h][i].nilai_akhir = ((mahasiswa[h][i].absen*0.1)+(mahasiswa[h][i].quiz*0.2)+(mahasiswa[h][i].uts*0.3)+(mahasiswa[h][i].uas*0.4));
        if (mahasiswa[h][i].nilai_akhir>=80){
            mahasiswa[h][i].nilai_huruf='A';
            mahasiswa[h][i].predikat="Direkomendasikan tidak mengulang";
        }else if (mahasiswa[h][i].nilai_akhir>=70){
            mahasiswa[h][i].nilai_huruf='B';
            mahasiswa[h][i].predikat="Tidak direkomendasikan mengulang";
        }else if(mahasiswa[h][i].nilai_akhir>=60){
            mahasiswa[h][i].nilai_huruf='C';
            mahasiswa[h][i].predikat="Direkomendasikan mengulang";
        }else if (mahasiswa[h][i].nilai_akhir>=50){
            mahasiswa[h][i].nilai_huruf='D';
            mahasiswa[h][i].predikat="Sangat direkomendasikan mengulang";
        }else {
            mahasiswa[h][i].nilai_huruf='E';
            mahasiswa[h][i].predikat="Amat direkomendasikan mengulang";
        }
}

void tampiltukar(){
    awal:
    system("CLS");
    bool found;
    int h;
        h=arraymatkul();
        string npms1,npms2;
        cout<<"Masukkan npm mahasiswa pertama : ";
        cin>>npms1;
        cout<<"Masukkan npm mahasiswa kedua : ";
        cin>>npms2;
        int posisi1,posisi2;
        for(int i=0;i<1000;i++){
        if (mahasiswa[h][i].npm==npms1){posisi1=i;found=1;}else if(mahasiswa[h][i].npm==npms2){posisi2=i;found=1;}}
        if (found==1){
        tukarMahasiswa(&mahasiswa[h][posisi1],&mahasiswa[h][posisi2]);
        cout<<"Nilai berhasil ditukar";
        system("PAUSE");
        }else{cout<<"npm tidak ditemukan"<<endl;goto awal;}
        main();
}

    void tukarMahasiswa(biodata* mhs1, biodata* mhs2) {

  string temp = mhs1->nama;
  mhs1->nama = mhs2->nama;
  mhs2->nama = temp;
  string temp1 = mhs1->npm;
  mhs1->npm = mhs2->npm;
  mhs2->npm = temp1;
}

void cekquiz(){
    system("CLS");
    bool found;
    char confirmremed;
    int h,i,j;
    h=arraymatkul();
        stack<int> quizkosong;
        for(i=0;i<1000;i++){
        if (mahasiswa[h][i].quiz==0 && mahasiswa[h][i].npm!=""){
                quizkosong.push(i);
                found=1;
        }
        }
        int* top = &quizkosong.top();
        while(!quizkosong.empty()){
        cout<<"\n\nNama mahasiswa : "<<mahasiswa[h][*top].nama<<endl;
        cout<<"NPM mahasiswa : "<<mahasiswa[h][*top].npm<<endl;
        cout<<"Masukkan nilai quiz setelah remedial"<<endl;
        cout<<"Jika mahasiswa tidak melakukan remedial silahkan isi nilai dengan 1 : ";
        cin>>mahasiswa[h][*top].quiz;
        cout<<"Nilai quiz "<<mahasiswa[h][*top].nama<<" telah berubah menjadi "<<mahasiswa[h][*top].quiz<<endl;
        j=*top;
        predikat(h,j);
        quizkosong.pop();
        *top--;
        }
        cout<<"\n\nSemua nilai telah terisi"<<endl;
        system("Pause");
        main();
}


