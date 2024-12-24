#include <stdio.h>

int main() {
    FILE *file;
    char input[50];
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf(" file khong mo bt01.txt\n");
        return 1;
    }
    printf("Nhap cuoi file: ");
    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);
    printf("Da ghi file bt01.txt\n");
    fclose(file);

    return 0;
}
