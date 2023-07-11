#include <stdio.h>

void printLinesUsingFgetc(FILE *file)
{
    int lineNum = 1;
    int ch;

    printf("%d  ", lineNum++);

    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);

        if (ch == '\n')
        {
            printf("%d  ", lineNum++);
        }
    }
}

void printLinesUsingFgets(FILE *file)
{
    int lineNum = 1;
    char buffer[256];

    printf("%d  ", lineNum++);

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
        printf("%d  ", lineNum++);
    }
}

int main()
{
    FILE *file = fopen("hello.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Using fgetc()
    printf("Printing lines using fgetc():\n");
    rewind(file);
    printLinesUsingFgetc(file);

    // Using fgets()
    printf("\nPrinting lines using fgets():\n");
    rewind(file);
    printLinesUsingFgets(file);

    fclose(file);
    return 0;
}
