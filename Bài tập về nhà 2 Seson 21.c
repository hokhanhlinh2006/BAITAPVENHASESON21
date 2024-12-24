#include <stdio.h>

int main() {
    FILE *file;
    char firstChar;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("file khong mo duoc bt01.txt\n");
        return 1;
    }

  
    firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("ky tu dau tien trong file: %c\n", firstChar);
    } else {
        printf("File rong.\n");
    }
    fclose(file);
    return 0;
}
