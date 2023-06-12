#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "danhmuc.h"

char nhapKytu();
int win(int sokytubimat[], long dodaitu);
int kiemtrakytu(char tubimat, char Kytubimat[], int sokytubimat[]);
int main(int argc, char *argv[]){
    
    int soluotdoan = 10;
    char tubimat = 0;
    int sokytubimat[100]={0};
    long dodaitu = 0;
    int *sotubimat = NULL;

    printf("Chao mung ban den voi tro choi Nguoi treo co\n");
    printf("Hay doan ky tu: ");
    tubimat = nhapKytu();
    if(!chonTu(tubimat))
        exit(0);
    dodaitu =strlen(sotubimat);
    sotubimat = malloc(dodaitu * sizeof(int));
    if(sotubimat = NULL)
        exit(0);
    for(int i = 0 ; i <dodaitu ; i++)
        sotubimat[i]=0;
    while (soluotdoan >0 && !win(sotubimat, dodaitu))
    {
        printf ("\n\n Ban co %d luot doan de choi ", soluotdoan);
        printf ("\n Tu bi mat la gi ?");
    
    for(int i = 0; i <dodaitu ; i++){
        if(sotubimat[i])
            printf("%c", tubimat);
        else
            printf("*");
    }
    printf("Hay nhap vao ky tu: ");
    tubimat = nhapKytu();
    if(!kiemtrakytu(tubimat, sokytubimat, sotubimat)){
        soluotdoan--;
    }
    }
    if (win(sotubimat, dodaitu))
        printf("\n chuc mung ban da thang. tu bi mat la: %s", sokytubimat);
    else
    printf("ban da thua. tu bi mat la: %s", sokytubimat);
    free(sotubimat);
    return 0;
}
char nhapKytu(){
    char kytuduocnhap = 0;

    kytuduocnhap = getchar();
    kytuduocnhap = toupper(kytuduocnhap);

    while(getchar() != '\n');

    return kytuduocnhap;
}
int win(int sokytubimat[], long dodaitu){
    int chienthang = 1;
    for(int i = 0; i < dodaitu ; i++){
        if (sokytubimat[i]==0){
            chienthang = 0;
        }
    }
    return chienthang;
}
int kiemtrakytu(char tubimat, char Kytubimat[], int sokytubimat[]){
    int kytuchinhxac = 0;
    for (int i = 0; Kytubimat[i] != '\0' ; i++){
        if (tubimat == Kytubimat[i]){
            kytuchinhxac = 1;
            sokytubimat[i] = 1;
        }
    }
    return kytuchinhxac;
}
