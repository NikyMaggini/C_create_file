#include "..\header\myLibrary.h"

char *str_combine(char *str1, char *str2)
{
    char *str_;
    str_ = calloc(strlen(str1) + strlen(str2) + 1, sizeof(char));
    strcpy(str_, str1);
    strcat(str_, str2);
    if (!str_)
    {
        printf("Malloc not found..");
        return str_ = NULL;
    }

    return str_;
}