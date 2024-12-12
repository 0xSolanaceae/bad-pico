#include <stdio.h>

int main() {
    FILE *duckyFile = fopen("ls_dir.dd", "w");

    if (duckyFile != NULL) {
        fprintf(duckyFile, "DELAY 1000\n");
        fprintf(duckyFile, "GUI r\n");
        fprintf(duckyFile, "DELAY 500\n");
        fprintf(duckyFile, "STRING cmd\n");
        fprintf(duckyFile, "ENTER\n");
        fprintf(duckyFile, "DELAY 1000\n");
        fprintf(duckyFile, "STRING dir C:\\\n");
        fprintf(duckyFile, "ENTER\n");
        fclose(duckyFile);
        printf("DuckyScript file generated successfully.\n");
    } else {
        fprintf(stderr, "Unable to open file for writing.\n");
    }

    return 0;
}