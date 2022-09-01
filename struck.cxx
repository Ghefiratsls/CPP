#include <ctime>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()

{

time_t now = time(0);
char* dt = ctime(&now);
char lagi;
char ulang;
char isi;
int nama;
int pilihan;
int pilihan2;
int jumlah;
int dibayar;
int harga;
int total;
int kode;
int pilih;
int pilih2;

char mad;
do
{
	system("cls");
	cout<<"*************************************"<<endl;
	cout<<"          GHEFIRA BOOK BOOL\n";
	cout<<"*************************************"<<endl;
	cout<<endl;
	cout<<" 1:Daftar harga dan barang \n 2:Belanja\n 3:Exit\n";
	cout<<endl;
	cout<<"Masukkan Pilihan Anda  = ";
	cin>>pilih;
	
	
	if(pilih==1)
	{
	   
	   system("cls");
	   cout<<"-------------------------------------"<<endl;
	   cout<<"       DAFTAR BARANG DAN HARGA"<<endl;
	   cout<<"-------------------------------------"<<endl;
	   cout<<endl;
	   cout<<"1. Gabus Putih/warna       Rp.8500"<<endl;
	   cout<<"2. Penggaris Yamata        Rp.2800"<<endl;
	   cout<<"3. Kenko push pin          Rp.4500"<<endl;
	   cout<<"4. Pena kenko              Rp.3200"<<endl;
	   cout<<"5. Pena Tizo               Rp.2500"<<endl;
	   cout<<"6. Isi pena fancy          Rp.15000"<<endl;
	   cout<<"7. Sticky big              Rp.6500"<<endl;
	   cout<<"8. Double tip              Rp.6500"<<endl;
	   cout<<"9. Tipe-X Kenko            Rp.3000"<<endl;
	   cout<<"10.Buku BIG BOSS           Rp.6000"<<endl;
	   cout<<endl;
	   cout<<"-------------------------------------"<<endl;
	   cout<<"    Pilih Menu Lain? (y/t) : ";
	   cin>>mad;
	   cout<<"  Terima Kasih Atas Kunjungan Anda "<<endl;
	}

else if (pilih==2)
{
	
	system("cls");cout<<"====================================="<<endl;
	cout<<" Date/time: "<<dt<<endl;
	cout<<"         GHEFIRA BOOK BOOL         "<<endl;
	cout<<"          Jl.Pende No.233          "<<endl;
	cout<<endl;
	cout<<"Cashier: Ghefira"<<endl;
	cout<<"Bill To: TUNAI"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<endl;
	cout<<"1. Gabus Putih/warna       Rp.8500"<<endl;
	   cout<<"2. Penggaris Yamata        Rp.2800"<<endl;
	   cout<<"3. Kenko push pin          Rp.4500"<<endl;
	   cout<<"4. Pena kenko              Rp.3200"<<endl;
	   cout<<"5. Pena Tizo               Rp.2500"<<endl;
	   cout<<"6. Isi pena fancy          Rp.15000"<<endl;
	   cout<<"7. Sticky big              Rp.6500"<<endl;
	   cout<<"8. Double tip              Rp.6500"<<endl;
	   cout<<"9. Tipe-X Kenko            Rp.3000"<<endl;
	   cout<<"10.Buku BIG BOSS           Rp.6000"<<endl;
	   cout<<endl;
	   cout<<endl;
	   
	   
	   cout<<"Masukan Kode Barang = ";
	   cin>>kode;
	   switch(kode)
	   {
	       case 1 :
	       cout<<"Gabus putih/warna"<<endl;
	       harga=8500;
	       cout<<"Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                  Diskon = Rp.0"<<endl;
        cout<<"     Pembayaran tambahan = Rp.";
        cin>>pilihan;
        cout<<"            Jumlah Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"                 Dibayar = Rp.";
        cin>>dibayar;
        cout<<"                 Kembali = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        case 2 :

        cout<<"Penggaris Yamata"<<endl;
        harga=2800;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        case 3 :
    
        cout<<"Kenko push pin"<<endl;
        harga=4500;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        

        break;
        
    case 4 :
    
        cout<<"Pena kenko"<<endl;
        harga=3200;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        case 5 :

        cout<<"Pena Tizo"<<endl;
        harga=2500;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
cout<<"-------------------------------------"<<endl;
       cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        
        case 6 :
        cout<<"Isi pena fancy"<<endl;
        harga=15000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        
        case 7 :
        cout<<"Sticky big"<<endl;
        harga=6500;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        

        break;
        
        case 8 :
        cout<<"Double tip"<<endl;
        harga=6500;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        
        case 9 :
        cout<<"Tipe-X Kenko"<<endl;
        harga=3000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        
        break;
        
        case 10 :
        cout<<"Buku BIG BOSS"<<endl;
        harga=6000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
    cout<<"-------------------------------------"<<endl;
        cout<<"1 Item         Sub Total = Rp."<<total<<endl;
        cout<<"                Discount = Rp.0"<<endl;
        cout<<"           Other Payment = Rp.";
        cin>>pilihan;
        cout<<"           Receipt Total = Rp."<<total+pilihan<<endl;
        cout<<endl;
        cout<<"           Payment Taken = Rp.";
        cin>>dibayar;
        cout<<"            Change Given = Rp."<<dibayar-total<<endl;
        cout<<endl;
        
        break;
        
        default:
        cout<<"Kode tersebut tidak ada dalam menu"<<endl;
	   }
        cout<<"-------------------------------------"<<endl;
        cout<<"  Pilih Menu Lain? (y/t) = ";
        cin>>mad;
        cout<<endl;
        cout<<"  Terima Kasih Atas Kunjungan Anda "<<endl;
        cout<<"Dimohon untuk tidak berbelanja lagi :) "<<endl;
       
}



else if (pilih==3)
{
	cout<<endl;
	cout<<"-----------------------------------------"<<endl;
        cout<<endl;
        cout<<"  Terima Kasih Atas Kunjungan Anda "<<endl;
        cout<<"Dimohon untuk tidak berbelanja lagi :) "<<endl;
}

}
while (mad/='y');

return 0;

}
