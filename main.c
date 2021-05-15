#include <stdio.h>
#include <string.h>

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
        .morse = "...-\0",
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
    {
        .morse = "-----",
        .latin = '0',
    },
    {
        .morse = ".----",
        .latin = '1',
    },
    {
        .morse = "..---",
        .latin = '2',
    },
    {
        .morse = "...--",
        .latin = '3',
    },
    {
        .morse = "....-",
        .latin = '4',
    },
    {
        .morse = ".....",
        .latin = '5',
    },
    {
        .morse = "-....",
        .latin = '6',
    },
    {
        .morse = "--...",
        .latin = '7',
    },
    {
        .morse = "---..",
        .latin = '8',
    },
    {
        .morse = "----.",
        .latin = '9',
    },
};

char toUpperCase(char x){
    if(x >= 97 && x <= 122){
        return x-32;
    }
    else return x;
}

int isValid(char* d){
    for(int i = 0; i < 35; i++){
        if(strcmp(alfie[i].morse, d) == 0){
            return 1;
        }
    }

    for(int i = 0; i < strlen(d); i++){
        if((d[i] >= 97 && d[i] <= 122) || (d[i] >= 65 && d[i] <= 90) || (d[i] >= 48 && d[i] <= 57)){
            return 2;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    for (int o = 1; o < argc; o++) {

        int v = isValid(argv[o]);

        if(v == 1){
            for(int p = 0; p <= 35; p++){
                if(strcmp(alfie[p].morse, argv[o]) == 0){
                    printf("%c", alfie[p].latin);
                }
            }
        }else if (v == 2){
            for (int i = 0; argv[o][i] != '\0'; i++) {
                for (int j = 0; j <= 35; j++) {
                    if (toUpperCase(argv[o][i]) == alfie[j].latin) {
                        printf("%s ", alfie[j].morse);
                    }
                }
            }
        }else{
            printf("Invalid character(s)!");
        }
            printf(" ");
    }
    printf("\n");
    return 0;
}