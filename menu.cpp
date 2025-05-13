#include <iostream>
#include <conio.h>
using namespace std;

int i, n, c, a, x;
int *nilai = nullptr;
int temp;

void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Melakukan input nilai array"<<"\n";            
cout<<"2. Menampilkan array"<<"\n";            
cout<<"3. Melakukan sorting pada nilai array"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka: ";       
}

void main1(){
  system("cls"); 
    cout << "Masukan index array: " << endl;
    cin >> n;
    
    if(nilai != nullptr){
      delete[] nilai;
    }

    nilai = new int[n];
    for(i = 0; i < n; i++){
      cout << "Masukan nilai index-" << i << ":";
      cin >> nilai[i];
    }
    cout << "\nAnda sudah melakukan input, tekan untuk kembali ke menu" << endl;
    getch();
  }

  void main2(){
    system("cls");
    if(nilai == nullptr || n <= 0){
      cout << "===================================\n";
      cout << "==Nilai array kosong, harap diisi==\n";
      cout << "===================================\n";
    }else{
    cout << "Isi array: ";
        for (i = 0; i < n; i++) {
            cout << "\nindex-" << i << ": " << nilai[i];
    }
    }
    cout << "\nTekan untuk kembali ke menu";
    getch();
    }

  void main3(){
    system("cls");

      if(nilai == nullptr || n <= 0){
      cout << "===================================\n";
      cout << "==Nilai array kosong, harap diisi==\n";
      cout << "===================================\n";
    }else{
    cout << "Selamat datang pada menu sorting";
    cout << "\n1. Ascending sort"<<"\n";            
    cout << "2. Descending sort"<<"\n";            
    cout << "Pilih opsi (1 atau 2): ";
    cin >> c;}

      if(c == 1){
      for(i = 1; i < n; i++){
        temp = nilai[i];
        a = i - 1;

        while(nilai[a] > temp && a >= 0){
          nilai[a + 1] = nilai[a];
          a--;
        }
        nilai[a + 1] = temp;

        cout << "\nTahap-" << i << endl;
        for(x = 0; x < n; x++){
          cout << nilai[x] << " ";
        }
      }
      cout << "\nHasil sortir ascending: " << endl;
      for(int z = 0; z < n; z++){
        cout << nilai[z] << " ";
      }
  }else if(c == 2){
      for(i = 1; i < n; i++){
        temp = nilai[i];
        a = i - 1;

        while(nilai[a] < temp && a >= 0){
          nilai[a + 1] = nilai[a];
          a--;
        }
        nilai[a + 1] = temp;

        cout << "\nTahap-" << i << endl;
        for(x = 0; x < n; x++){
          cout << nilai[x] << " ";
        }
      }
      cout << "\nHasil sortir descending: " << endl;
      for(int z = 0; z < n; z++){
        cout << nilai[z] << " ";
      }
      
  }else{
      cout << "Pilihan tidak tersedia.";
  }

  cout << "\nTekan untuk kembali ke menu.";
  getch();
}
  
  void main4(){
    system("cls");
    cout << "Nama: Dzaki Ahmad Andreaz" << endl;
    cout << "NIM : C030324115" << endl;
    getch();
  }

int main(){
char pl;
do{
    dMenu();
    pl=getch();
  switch (pl){
   case '1':
    /* code */
    main1();
    break;
   case '2':
    main2();
    /* code */ 
    break;  
   case '3':
    main3();
    /* code */
    break;  
   case '4':
    main4();
    /* code */
    break;  
  case '5':
    /* code */
    break;

  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}