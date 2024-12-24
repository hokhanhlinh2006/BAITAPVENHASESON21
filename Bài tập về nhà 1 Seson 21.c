#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char input[50];
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }
    printf("Ban hay nhap mot chuoi de ghi vao file: ");
    fgets(input, sizeof(input), stdin);
    fprintf(file, "%s", input);
    printf("Da ghi vao file bt01.txt\n");
  
    fclose(file);

    return 0;
}
