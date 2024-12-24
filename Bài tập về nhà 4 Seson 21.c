#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("khon mo file bt01.txt\n");
        return 1;
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("dong 1 trong file: %s", line);
    } else {
        printf("File trong.\n");
    }
    fclose(file);

    return 0;
}
