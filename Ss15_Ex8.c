#include <stdio.h>

int main() {
    char text[] = "xin chao sinh vien k24 class jpn_B";

    for (int i = 0; text[i] != '\0'; i++) {
        if (i == 0 || text[i - 1] == ' ') {
            if (text[i] >= 'a' && text[i] <= 'z') {
                text[i] = text[i] - 'a' + 'A';
            }
        }
    }

    printf("Chuoi sau khi xu ly: %s\n", text);
    return 0;
}

