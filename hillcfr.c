#include <stdio.h>
#include <string.h>

void caesar_decrypt(char *ciphertext, int shift) {
    int i;
    for (i = 0; ciphertext[i] != '\0'; i++) {
        if (ciphertext[i] == ' ') {
            printf(" ");
        } else {
            char decrypted_char = ((ciphertext[i] - 'A' - shift + 26) % 26) + 'A';
            printf("%c", decrypted_char);
        }
    }
}

void brute_force_caesar(char *ciphertext) {
    int shift;
    for (shift = 1; shift <= 25; shift++) {
        printf("Shift %02d: ", shift);
        caesar_decrypt(ciphertext, shift);
        printf("\n");
    }
}

int main() {
    char encrypted_message[] = "EBIIL TLOIA";
    brute_force_caesar(encrypted_message);
    return 0;
}

