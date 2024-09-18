#include "string.h"

void cargar_String(String &s){
    int i = 0;
    char c;
    scanf("%c", &c);
    while((i < MAX - 1) && (c != '\n')){
        s[i] = c;
        scanf("%c", &c);
        i++;
    }
    s[i] = '\0';
}

void mostrar_String(String s){
    int i = 0;
    while(s[i] != '\0'){
        printf("%c", s[i]);
        i++;
    }
}

void copy_string(String s1, String &s2){
    int i = 0;
    while(s1[i] != '\n'){
        s2[i] = s1[i];
        i++;
    };
    s2[i] = '\0';
}


