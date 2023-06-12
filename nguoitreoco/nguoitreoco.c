#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

char nhapKytu();
int demsotu(FILE* tutrongfile);

int main(int argc, char *argv[]){
    char chuBIMAT[] = "HELLO";
    int sotutrongfile = 0;
    int chucaiBIMAT = nhapKytu();
    FILE *Teptubimat = NULL;
    Teptubimat = fopen("tubimat.txt","r");
    sotutrongfile = demsotu(Teptubimat);
    printf("so tu trong file la: %d \n", sotutrongfile);

    fclose(Teptubimat);
    printf("%c", chucaiBIMAT);
    return 0;
}
char nhapKytu(){
    char kytuduocnhap = 0;

    kytuduocnhap = getchar();
    kytuduocnhap = toupper(kytuduocnhap);

    while(getchar() != '\n');

    return kytuduocnhap;
}
int demsotu(FILE* tutrongfile) {
    int sotu = 0;
    char tu = 0;
    do {
        tu = fgetc(tutrongfile);
        if (tu == ' ' || tu == '\n' || tu == '\t' || tu == '\r') {
            sotu++;
        }
    } while (tu != EOF);
    return sotu + 1;
}