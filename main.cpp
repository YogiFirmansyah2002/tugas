#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()

{
    int sisa,todet_mulai,todet_selesai,jam_mulai,menit_mulai,detik_mulai,jam_selesai,menit_selesai,detik_selesai,
    lama_pemakaian,menit_pemakaian,detik_pemakaian,durasi,total_bayar;

    cout << "Program Billing Warnet" << endl;
    cout << "----------------------" << endl;
    cout << "Moch Yogi Firmansyah" << endl;
    cout << "20051397044" << endl;
    cout << "----------------------" << endl;
    cout << "\n" << endl;

    cout << "Mulai\n" << endl;
    cout << "Jam Mulai = "; cin >> jam_mulai;
    cout << "Menit Mulai = "; cin >> menit_mulai;
    cout << "Detik Mulai = "; cin >> detik_mulai;
    todet_mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
    cout << "\n" << endl;

    cout << "Selesai\n" << endl;
    cout << "Jam Selesai = "; cin >> jam_selesai;
    cout << "Menit Selesai = "; cin >> menit_selesai;
    cout << "Detik Selesai = "; cin >> detik_selesai;
    todet_selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;

    total_bayar=1.388889* durasi;
    lama_pemakaian=durasi/3600;
    sisa=durasi%3600;
    menit_pemakaian=sisa/60;
    detik_pemakaian=sisa%60;
    cout << "\n" << endl;

    cout << "Lama Pemakaian\n" << endl;
    cout << " jam\n"; lama_pemakaian;
    cout << " Menit\n"; menit_pemakaian;
    cout << " Detik\n"; detik_pemakaian;

    cout << "Tarif = Rp.5000 - Per Jam \n" <<endl;
    cout << "Total biaya yang harus dibayar : RP. ",total_bayar;

    getch();
    return 0;
}
