#include <stdio.h>

char toUpperCase(char x);

struct {
    char *morse;
    char latin;
} alfie[] = {
    {
        .morse = ".-\0",
        .latin = 'A',
    },
    {
        .morse = "-...\0",
        .latin = 'B',
    },
    {
        .morse = "-.-.\0",
        .latin = 'C',
    },
    {
        .morse = "-..\0",
        .latin = 'D',
    },
    {
        .morse = ".\0",
        .latin = 'E',
    },
    {
        .morse = "..-.\0",
        .latin = 'F',
    },
    {
        .morse = "--.\0",
        .latin = 'G',
    },
    {
        .morse = "....\0",
        .latin = 'H',
    },
    {
        .morse = "..\0",
        .latin = 'I',
    },
    {
        .morse = ".---\0",
        .latin = 'J',
    },
    {
        .morse = "-.-\0",
        .latin = 'K',
    },
    {
        .morse = ".-..\0",
        .latin = 'L',
    },
    {
        .morse = "--\0",
        .latin = 'M',
    },
    {
        .morse = "-.\0",
        .latin = 'N',
    },
    {
        .morse = "---\0",
        .latin = 'O',
    },
    {
        .morse = ".--.\0",
        .latin = 'P',
    },
    {
        .morse = "--.-\0",
        .latin = 'Q',
    },
    {
        .morse = ".-.\0",
        .latin = 'R',
    },
    {
        .morse = "...\0",
        .latin = 'S',
    },
    {
        .morse = "-\0",
        .latin = 'T',
    },
    {
        .morse = "..-\0",
        .latin = 'U',
    },
    {
        .morse = "...\0",
        .latin = 'V',
    },
    {
        .morse = ".--\0",
        .latin = 'W',
    },
    {
        .morse = "-..-\0",
        .latin = 'X',
    },
    {
        .morse = "-.--\0",
        .latin = 'Y',
    },
    {
        .morse = "--..\0",
        .latin = 'Z',
    },
};

char toUpperCase(char x){
    if(x >= 97 && x <= 122){
        return x-32;
    }
    else return x;
}

int main(int argc, char* argv[]) {
    for(int o = 1; o < argc; o++){
        for(int i = 0; argv[o][i] != '\0'; i++){
            for(int j = 0; j < 25; j++){
                if(toUpperCase(argv[o][i]) == alfie[j].latin){
                    printf("%s ", alfie[j].morse);
                }
            }
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
