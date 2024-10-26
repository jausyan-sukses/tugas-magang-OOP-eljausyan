#include <iostream>
#include <string>
#include <iomanip>
#include "third.cpp"
using namespace std;

int add(string a, string b);

extern string obat_obatan_anemia;
extern string obat_obatan_hipertensi;
extern string obat_obatan_diabetes;
extern string treatment_diabet;
extern string nama_obat1[3];
extern string Manfaat[3];
extern string rujukan1;
extern string rujukan2;
extern string rujukan3;
extern int nomer[3];

struct Hipertensi {
    private:
    string Gejala;
    string Penyebab = "Penumpukan Lemak pada pembuluh darah";
    string Penyebab2 = "gaya hidup, riwayat keluarga, dan kondisi kesehatan tertentu. Faktor risiko seperti merokok, kelebihan berat badan, kurangnya olahraga, stres, dan konsumsi alkohol dapat meningkatkan risiko tekanan darah tinggi.";
    string NamaPasien;
    string Notelp;
    string obat;
    int NomerReg;
    int stadium = 1;

    public:
    string getPenyebab2() {
        return Penyebab2;
    }
    void setobat(string obathiper) {
        obat = obathiper;
    }
    string getobat() {
        return obat;
    }
    void setNamaPasien(string name) {
        NamaPasien = name;
    }
    string getNamaPasien() {
        return NamaPasien;
    }
    void setNomerReg(int reg) {
        NomerReg = reg;
    }
    void setNotelp(string telp) {
        Notelp = telp;
    }
    void setPenyebab() {
        Penyebab = "Penumpukan Lemak pada pembuluh darah";
    }
    string getPenyebab() {
        return Penyebab;
    }
};

class Anemia {
    private:
    string Gejala;
    string Penyebab = "penurunan jumlah trombosit pada sel sel darah";
    string NamaPasien;
    string Notelp;
    string obat;
    int stadium = 1;
    int NomerReg;

    public:
    void setobat(string obatanemia) {
        obat = obatanemia;
    }
    void setNamaPasien(string name) {
        NamaPasien = name;
    }
    string getNamaPasien() {
        return NamaPasien;
    }
    void setNomerReg(int reg) {
        NomerReg = reg;
    }
    void setNotelp(string telp) {
        Notelp = telp;
    }
    void setPenyebab() {
        Penyebab = "penurunan jumlah trombosit pada sel sel darah";
    }
    string getPenyebab() {
        return Penyebab;
    }
};

class Diabetes {
    protected:
    string penyebab;
    string Gejala;
    string Obat;
    string treatment;
    string NamaPasien;
    string Notelp;
    string obat;
    int NomerReg;
    int stadium;

    public:
    void setObat(string obatdiabetes) {
        Obat = obatdiabetes;
    }
    void setNamaPasien(string name) {
        NamaPasien = name;
    }
    void setNomerReg(int reg) {
        NomerReg = reg;
    }
    void setNotelp(string telp) {
        Notelp = telp;
    }
    void setpenyebab() {
        penyebab = "kurang melakukan aktivitas fisik, stres, dan konsumsi makanan tinggi gula";
    }
    string getNamaPasien() {
        return NamaPasien;
    }
};

class pneumonia {
    private:
    string Gejala;
    string Penyebab;
    string Penyebab2 = "gaya hidup, riwayat keluarga, dan kondisi kesehatan tertentu. Faktor risiko seperti merokok, kelebihan berat badan, kurangnya olahraga, stres, dan konsumsi alkohol dapat meningkatkan risiko tekanan darah tinggi.";
    string NamaPasien;
    string Notelp;
    string obat;
    int NomerReg;
    int stadium = 1;

    public:
    string getPenyebab2() {
        return Penyebab2;
    }
    void setobat(string obathiper) {
        obat = obathiper;
    }
    string getobat() {
        return obat;
    }
    void setNamaPasien(string name) {
        NamaPasien = name;
    }
    string getNamaPasien() {
        return NamaPasien;
    }
    void setNomerReg(int reg) {
        NomerReg = reg;
    }
    void setNotelp(string telp) {
        Notelp = telp;
    }
    void setPenyebab() {
        Penyebab = "Penumpukan cairan yang tidak normal pada paru-paru";
    }
    string getPenyebab() {
        return Penyebab;
    }
};

class kanker {
    private:
    string pat1 = "leukimia (pertumbuhan sel darah putih yang tidak stabil)";
    string pat2 = "nasofaring (masuknya bahan karsinogenik di paru-paru)";
    string pat3 = "tiroid (kebiasaan merokok atau vape)";
    public:
    string getpat1() {
        return pat1;
    }
    string getpat2() {
        return pat2;
    }
    string getpat3() {
        return pat3;
    }
};

void fiksakit(string n, int r, string t) {
    int level = 1;
    Hipertensi pasien;
    pasien.getobat();
    pasien.getPenyebab();
    cout << "Anda didiagnosis mengalami Hipertensi, segera lakukan pengobatan" << endl;
    cout << "Nama pasien    : " << n << endl;
    cout << "Nomer Reg      : " << r << endl;
    cout << "Nomer telepon  : " << t << endl;
    cout << "Stadium        : " << level << endl;
    cout << "penyebab       : " << pasien.getPenyebab() << endl;
};

void fikssakit2(string ismun, int raqm, string hatif) {
    int level = 2;
    Hipertensi pas;
    pas.getobat();
    pas.getPenyebab2();
    cout << "Anda didiagnosis mengalami Hipertensi, stadium 2 , segera lakukan Terapi" << endl;
    cout << "Nama pasien    : " << ismun << endl;
    cout << "Nomer Reg      : " << raqm << endl;
    cout << "Nomer telepon  : " << hatif << endl;
    cout << "Stadium        : " << level << endl;
    cout << "Penyebab       : " << pas.getPenyebab2() << endl;
    
};
void fiksanemia(string ismun1, int raqm1, string hatif1, string anem1, string anem2) {
    int level1 = 1;
    string jawaban;
    cout << "Anda didiagnosis mengalami Anemia, stadium 1 , segera lakukan pengobatan" << endl;
    cout << "Nama pasien    : " << ismun1 << endl;
    cout << "Nomer Reg      : " << raqm1 << endl;
    cout << "Nomer telepon  : " << hatif1 << endl;
    cout << "Stadium        : " << level1 << endl;
    cout << "Apakah anda merasakan nyeri pada kepala? (ketik ya/tidak)";
    cin >> jawaban;
    if (jawaban == "ya") {
        cout << "anda mengalami anemia akut" << endl;
        cout << "Obat anda  : " << anem1 << endl;
    } else if (jawaban == "tidak") {
        cout << "anda mengalami anemia ringan" << endl;
        cout << "Obat anda  : " << anem2 << endl;
    } else {
        cout << "coba untuk membeli obat" << endl;
        cout << "list obat : " << obat_obatan_anemia << endl;
    }
};

void diabet(string ismun2, int raqm2, string hatif2, string dawa2, string dawa3) {
    int level2 = 1;
    string jawaban;
    cout << "Anda didiagnosis mengalami Diabetes, stadium 1 , segera lakukan pengobatan" << endl;
    cout << "Nama pasien    : " << ismun2 << endl;
    cout << "Nomer Reg      : " << raqm2 << endl;
    cout << "Nomer telepon  : " << hatif2 << endl;
    cout << "Stadium        : " << level2 << endl;
    cout << "Apakah anda merasakan lemas dan sakit pada kaki? ketik (ya/tidak)";
    cin >> jawaban;
    if (jawaban == "ya") {
        cout << "anda mengalami diabetes melitus" << endl;
        cout << "Obat anda  : " << dawa2 << endl;
    } else if (jawaban == "tidak") {
        cout << "anda mengalami diabetes insipidus" << endl;
        cout << "Obat anda  : " << dawa3 << endl;
    } else {
        cout << "coba untuk membeli obat" << endl;
        cout << "list obat : " << obat_obatan_diabetes << endl;
        cout << "Apakah masih merasa sakit atau ada yang kurang? (Y/N) ";
        cin >> jawaban;
        if (jawaban == "Y") {
            level2++;
            cout << "stadium anda : " << level2 << endl;
            int nomer[3] = {1, 2, 3};
            string nama_obat1[3] = {"Metformin" , "Sulfonilurea", "Insulin"};
            string Manfaat[3] = {
            "Menurunkan produksi glukosa di hati",
            "Merangsang pelepasan Insulin dari pangkreas",
            "Mengontrol kadar gula darah",
            };
            cout << "coba lakukan beberapa treatment berikut" << treatment_diabet << endl;
            cout << setw(6) << "No" << setw(15) << "Nama Senyawa" << setw(40) << "Manfaat" << endl;
            cout << "--------------------------------------------------------------" << endl;
            for (int loop = 0; loop < 3; loop++) {
                cout << setw(6) << nomer[loop] << endl;
                cout << setw(15) << nama_obat1[loop] << endl;
                cout << setw(40) << Manfaat[loop] << endl;
            }
        }
    }
};

void fikspneumonia(string ismun3, int raqm3, string hatif3, string dawa3, string dawa4) {
    int level3 = 2;
    pneumonia pas;
    pas.getobat();
    pas.getPenyebab2();
    cout << "Anda didiagnosis mengalami pneumonia, stadium 2 , segera lakukan Terapi" << endl;
    cout << "Nama pasien    : " << ismun3 << endl;
    cout << "Nomer Reg      : " << raqm3 << endl;
    cout << "Nomer telepon  : " << hatif3 << endl;
    cout << "Stadium        : " << level3 << endl;
    cout << "Penyebab       : " << pas.getPenyebab2() << endl;
};

void fikskanker(string ismun4, int raqm4, string hatif4, string dawa4) {
    int level4 = 1;
    string keluh;
    kanker can;
    can.getpat1();
    can.getpat2();
    can.getpat3();
    cout << "masukan keluhan lanjutan : " << endl;
    getline(cin, keluh);
    if (keluh == "nyeri di kepala") {
        cout << "Anda didiagnosis mengalami Leukimia, stadium 1 , segera lakukan Terapi" << endl;
        cout << "Nama pasien    : " << ismun4 << endl;
        cout << "Nomer Reg      : " << raqm4 << endl;
        cout << "Nomer telepon  : " << hatif4 << endl;
        cout << "Stadium        : " << level4 << endl;
        cout << "Penyebab       : " << can.getpat1() << endl;
        cout << "Treatment      : " << dawa4 << endl;
    } else if (keluh == "sesak napas") {
        cout << "Anda didiagnosis mengalami kanker nasofaring, stadium 1 , segera lakukan Terapi" << endl;
        cout << "Nama pasien    : " << ismun4 << endl;
        cout << "Nomer Reg      : " << raqm4 << endl;
        cout << "Nomer telepon  : " << hatif4 << endl;
        cout << "Stadium        : " << level4 << endl;
        cout << "Penyebab       : " << can.getpat2() << endl;
        cout << "Treatment      : " << dawa4 << endl;
    } else {
        cout << "Anda didiagnosis mengalami kanker tiroid, stadium 1 , segera lakukan Terapi" << endl;
        cout << "Nama pasien    : " << ismun4 << endl;
        cout << "Nomer Reg      : " << raqm4 << endl;
        cout << "Nomer telepon  : " << hatif4 << endl;
        cout << "Stadium        : " << level4 << endl;
        cout << "Penyebab       : " << can.getpat3() << endl;
        cout << "Treatment      : " << dawa4 << endl;
    }
};

// void rujukan() {
//     cout << "mohon maaf kami tidak bisa melayani anda, anda akan kami rujuk ke rumah sakit berikut : " << endl;
//     cout << "1. " << rujukan1 << endl;
//     cout << "2. " << rujukan2 << endl;
//     cout << "3. " << rujukan3 << endl;
// };

int main() {
    string obatanemia = "Tonikum";
    string obatanemia2 = "Hemobion";
    string obathiper = "Lasix";
    string obatdiabetes = "Glucophage";
    string obatinsipidus = "Indometasin";
    string obatpneumonia1 = "Antibiotik";
    string obatpneumonia2 = "obat anti fungi";
    string khemo = "khemotheraphy";
    string pat11;
    string pat22;
    string pat33;
    string name;
    string gejala;
    string telp;
    int stadium;
    int reg;


    Hipertensi h1;
    h1.setNamaPasien(name);
    h1.setNomerReg(reg);
    h1.setNotelp(telp);
    h1.setobat(obathiper);
    h1.getPenyebab();

    Anemia a1;
    a1.setNamaPasien(name);
    a1.setNomerReg(reg);
    a1.setNotelp(telp);
    a1.setobat(obatanemia);
    a1.getPenyebab();

    Diabetes d1;
    d1.setNamaPasien(name);
    d1.setNomerReg(reg);
    d1.setNotelp(telp);
    d1.setObat(obatdiabetes);
    d1.setpenyebab();

    pneumonia p1;
    p1.setNamaPasien(name);
    p1.setNomerReg(reg);
    p1.setNotelp(telp);
    p1.setobat(obatpneumonia1);
    p1.getPenyebab();

    kanker k1;
    k1.getpat1();
    k1.getpat2();
    k1.getpat3();

    cout << "masukan nama pasien    : ";
    getline(cin, name);
    cout << "masukan nomer reg      : ";
    cin >> reg;
    cout << "masukan nomer telepon  : ";
    cin >> telp;
    cin .ignore();
    cout << "Masukan Keluhan anda   : ";
    getline(cin, gejala);

    if (gejala == "lemas") {
        fiksakit(name, reg, telp);
    } else if (gejala == "lemas dan pusing") {
        fikssakit2(name, reg, telp);
    } else if (gejala == "lemas banget") {
        fiksanemia(name, reg, telp, obatanemia, obatanemia2);
    } else if (gejala == "demam") {
        diabet(name, reg, telp, obatdiabetes, obatinsipidus);
    } else if (gejala == "sesak nafas") {
        fikspneumonia(name, reg, telp, obatpneumonia1, obatpneumonia2);
    } else if (gejala == "tidak satu pun") {
        fikskanker(name, reg, telp, khemo);
    }
    
    return 0;
}