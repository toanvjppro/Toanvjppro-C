#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "danhmuc.h"

int chontu(char *tuDuocChon){
    FILE *danhmuc = NULL;
    int soThutucuatu = 0, sothututuduochon = 0;
    int luukytu = 0;
    danhmuc = fopen("tubimat.txt", "r");
    if (danhmuc = NULL){
        printf("Mo file that bai\n");
        return 0;
    }
    do{
        luukytu = fgetc(danhmuc);
        if(luukytu == '\n'){
            soThutucuatu++;
        }
    }while(luukytu != EOF);
    sothututuduochon = tungaunhien(soThutucuatu);
    rewind(danhmuc);
    while(sothututuduochon>0){
        luukytu = fgetc(danhmuc);
        if (luukytu == '\n')
        {
            sothututuduochon--;
        }
    }
    fgets(tuDuocChon, 100, danhmuc);
    tuDuocChon[strlen(tuDuocChon) - 1]= '\0';
    fclose(danhmuc);
    return 1;
}
int tungaunhien(int sothutulonnhat){
    srand(time(NULL));
    return (rand()%sothutulonnhat);
}
