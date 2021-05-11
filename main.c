#include <stdio.h>

char toUpperCase(char x);
void initStruct();

struct letter{
    char *morse;
    char latin;
};



int main(int argc, char* argv[]) {

    struct letter alfie[26];
    initStruct(alfie);

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

void initStruct(struct letter morse[]) {

    struct letter A;
    A.morse = ".-\0";
    A.latin = 'A';
    struct letter B;
    B.morse = "-...\0";
    B.latin = 'B';
    struct letter C;
    C.morse = "-.-.\0";
    C.latin = 'C';
    struct letter D;
    D.morse = "-..\0";
    D.latin = 'D';
    struct letter E;
    E.morse = ".\0";
    E.latin = 'E';
    struct letter F;
    F.morse = "..-.\0";
    F.latin = 'F';
    struct letter G;
    G.morse = "--.\0";
    G.latin = 'G';
    struct letter H;
    H.morse = "....\0";
    H.latin = 'H';
    struct letter I;
    I.morse = "..\0";
    I.latin = 'I';
    struct letter J;
    J.morse = ".---\0";
    J.latin = 'J';
    struct letter K;
    K.morse = "-.-\0";
    K.latin = 'K';
    struct letter L;
    L.morse = ".-..\0";
    L.latin = 'L';
    struct letter M;
    M.morse = "--\0";
    M.latin = 'M';
    struct letter N;
    N.morse = "-.\0";
    N.latin = 'N';
    struct letter O;
    O.morse = "---\0";
    O.latin = 'O';
    struct letter P;
    P.morse = ".--.\0";
    P.latin = 'P';
    struct letter Q;
    Q.morse = "--.-\0";
    Q.latin = 'Q';
    struct letter R;
    R.morse = ".-.\0";
    R.latin = 'R';
    struct letter S;
    S.morse = "...\0";
    S.latin = 'S';
    struct letter T;
    T.morse = "-\0";
    T.latin = 'T';
    struct letter U;
    U.morse = "..-\0";
    U.latin = 'U';
    struct letter V;
    V.morse = "...\0";
    V.latin = 'V';
    struct letter W;
    W.morse = ".--\0";
    W.latin = 'W';
    struct letter X;
    X.morse = "-..-\0";
    X.latin = 'X';
    struct letter Y;
    Y.morse = "-.--\0";
    Y.latin = 'Y';
    struct letter Z;
    Z.morse = "--..\0";
    Z.latin = 'Z';


    morse[0] = A;
    morse[1] = B;
    morse[2] = C;
    morse[3] = D;
    morse[4] = E;
    morse[5] = F;
    morse[6] = G;
    morse[7] = H;
    morse[8] = I;
    morse[9] = J;
    morse[10] = K;
    morse[11] = L;
    morse[12] = M;
    morse[13] = N;
    morse[14] = O;
    morse[15] = P;
    morse[16] = Q;
    morse[17] = R;
    morse[18] = S;
    morse[19] = T;
    morse[20] = U;
    morse[21] = V;
    morse[22] = W;
    morse[23] = X;
    morse[24] = Y;
    morse[25] = Z;
}

char toUpperCase(char x){
    if(x >= 97 && x <= 122){
        return x-32;
    }
    else return x;
}