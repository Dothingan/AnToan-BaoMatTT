#include <stdio.h>
#include <string.h>

void caesarCipher(char* text, int shift) {
    char ch;
    for (int i = 0; text[i] != '\0'; ++i) {
        ch = text[i];

        // Mã hóa ký tự in hoa
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
            text[i] = ch;
        }
        // Mã hóa ký tự thường
        else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
            text[i] = ch;
        }
    }
}

void giaiMa(char* text, int shift) {
    char ch;
    for (int i = 0; text[i] != '\0'; ++i) {
        ch = text[i];

        
    }
}

int main() {
    char text[100];
    int shift;

    printf("Nhập chuỗi cần mã hóa: ");
    gets(text);

    printf("key: ");
    scanf("%d", &shift);

    caesarCipher(text, shift);

    printf("Chuỗi sau khi mã hóa: %s\n", text);

    return 0;
}

// #include iostream
// #include string
// using namespace std;
//  // hàm tìm rõ số của chữ cái
// int TimRoSo(string BangChuCai, char Chuoi) {
//  int temp = 0;
//  for (int i = 0; i < BangChuCai.length(); i++) {
//   if (BangChuCai[i] == Chuoi) {
//    temp = i;
//    break;
//   }
//  }
//  return temp;
// }
// // hàm tìm mã chữ
// string TimMaChu(string BangChuCai, string Chuoi, int k){
//  string MaChu = "";
//  int MaSo;
//  for (int i = 0; i < Chuoi.length(); i++) { // tìm từng chữ cái một
//   MaSo = TimRoSo(BangChuCai, Chuoi[i]); // tìm rõ số của chữ cái đó
//   int temp = (MaSo + k) % 26; // cộng thêm khoa k mod 26
//   MaChu += BangChuCai[temp]; // tìm chữ cái có mã số là temp và nối vào chuỗi MaChu
//  }
//  return MaChu;
// }
// // hàm giải mã.
// string TimGiaiMa(string BangChuCai, string Chuoi, int k){
//  string GiaiMa = "";
//  int MaSo;
//  for (int i = 0; i < Chuoi.length(); i++) {
//   MaSo = TimRoSo(BangChuCai, Chuoi[i]);
//   MaSo -= k;
//   if (MaSo < 0) {
//    int temp = 26 + MaSo;
//    MaSo = temp;
//   }
//   GiaiMa += BangChuCai[MaSo];
//  }
//  return GiaiMa;
// }
// int main(){
//  string BangChuCai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // có thể thêm nhiều ký tự khác vào để mã hóa
//  string Chuoi;
//  int k;
//  int chon;
//  do
//  {
//   system("cls");
//   cout << "1. Lap ma. " << endl;
//   cout << "2. Giai ma. " << endl;
//   cout << "Chon: ";
//   cin >> chon;
//   switch (chon)
//   {
//   case 1: {
//    cin.ignore();
//    cout << "Nhap chuoi: ";
//    getline(cin, Chuoi);
//    cout << "Nhap khoa: ";
//    cin >> k;
//    cout << TimMaChu(BangChuCai, Chuoi, k) << endl;
//    system("pause");
//    break;
//   }
//   case 2: {
//    cin.ignore();
//    cout << "Nhap chuoi: ";
//    getline(cin, Chuoi);
//    cout << "Nhap khoa: ";
//    cin >> k;
//    cout << TimGiaiMa(BangChuCai, Chuoi, k) << endl;
//    system("pause");
//    break;
//   }
//   }
//  } while (chon != 0);
//  return 0;
// }