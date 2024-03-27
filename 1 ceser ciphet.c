#include <stdio.h>

void caesar_cipher(char *text, int shift) {
    while (*text) {
        if ((*text >= 'A' && *text <= 'Z') || (*text >= 'a' && *text <= 'z'))
            *text = (*text - 'A' + shift) % 26 + ((*text >= 'a') ? 'a' : 'A');
        text++;
    }
}

int main() {
    char text[100];
    int shift;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    caesar_cipher(text, shift);

    printf("Encrypted text: %s\n", text);

    return 0;
}
