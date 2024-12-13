#include <stdio.h>
#include <string.h> 

int main() {
    char Str[] = "bcdac";
    int Count[100] = {0};
    int Length = strlen(Str);

    for (int i = 0; i < Length; i++) {
        if (Str[i] < 100) {
            Count[Str[i]]++;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (Count[i] > 0) {
            printf("%c: %d\n", i, Count[i]);
        }
    }

    return 0;
}

