#pragma once
#define _CRT_SECURE_NO_WARNINGS 1 // serve per togliere i warning dati dalle funzione deprecate della libreria stdio.h -Deve essere deinito prima di usare i file .h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR -1
#define OK 0

char *str_combine(char *str1, char *str2);
