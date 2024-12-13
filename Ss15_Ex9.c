#include <stdio.h>

int main() {
    char text[] = "rikkeisoft";
    char remove;

    printf("Moi ban nhap ky tu can xoa: ");
    scanf(" %c", &remove);

    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        if (text[i] == remove) {
            for (int j = i; j < length; j++) {
                text[j] = text[j + 1];
            }
            length--;
            i--; 
        }
    }

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", remove, text);
    return 0;
}

