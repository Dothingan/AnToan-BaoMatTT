#include <stdio.h>
#include <string.h>

// Bảng ký tự trong Z29
char alphabet[] = "abcdefghijklmnopqrstuvwxyz@._";
int char_to_num(char c) {
    for (int i = 0; i < 29; i++) {
        if (alphabet[i] == c) return i;
    }
    return -1;
}
char num_to_char(int n) {
    return alphabet[n % 29];
}

// Hàm mã hóa Vigenère
void vigenere_encrypt(char text[], char key[]) {
    int text_len = strlen(text);
    int key_len = strlen(key);
    char encrypted_text[text_len + 1];

    for (int i = 0; i < text_len; i++) {
        int text_num = char_to_num(text[i]);
        int key_num = char_to_num(key[i % key_len]);
        encrypted_text[i] = num_to_char(text_num + key_num);
    }
    encrypted_text[text_len] = '\0';
    printf("Email mã hóa: %s\n", encrypted_text);
}

int main() {
    char email[] = "son.doantrung@phenikaa-uni.edu.vn";
    char key[] = "cgpw";  // C = 2, G = 7, P = 15, W = 27
    vigenere_encrypt(email, key);
    return 0;
}
