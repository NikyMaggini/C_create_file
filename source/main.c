#include "..\header\myLibrary.h"

#define content_size 500

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        fprintf(stderr, "You must specify the absolute path and the file name");
        return -1;
    }
    char *path = argv[1];
    char *file_name = argv[2];
    char *mode = argv[3];
    char content[content_size];

    if (*mode == 'N' || *content == 0)
    {
        
    }
    else if (*mode == 'Y')
    {
        fprintf(stderr, "Write the content: \n");
        fgets(content, content_size, stdin);
    }
    else
    {
        fprintf(stderr, "Wrong charachter");
    }

    // printf("contento %d", *content);
    char *str = str_combine(path, file_name);
    FILE *new_file = fopen(str, "w");
    fputs(content, new_file);
    fclose(new_file);
    free(str);

    return 0;
}