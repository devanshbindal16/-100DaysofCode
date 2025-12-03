//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char source[100], dest[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    sourceFile = fopen(source, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file!");
        return 0;
    }

    destFile = fopen(dest, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file!");
        fclose(sourceFile);
        return 0;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s", dest);

    return 0;
}
