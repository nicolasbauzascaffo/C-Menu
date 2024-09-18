#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>

const int MAX = 80;
typedef char String[MAX];

void cargar_String(String &s);
void mostrar_String(String s);
void copy_string(String s1, String &s2);

#endif
