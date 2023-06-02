#include <stdio.h>
#include "hoten.h"

int main(int argc, char *argv[])
{
    thongtin thongtinplayer[SO_LUONG];
    for(int i=0 ; i<SO_LUONG ; i++){
        printf("_________________\n Thong tin player %d:\n", i);
    printf("Nhap ho cua ban: ");
    scanf("%s", thongtinplayer[i].Ho);
    printf("Nhap ten dem cua ban: ");
    scanf("%s", thongtinplayer[i].Tendem);
    printf("Nhap ten cua ban: ");
    scanf("%s", thongtinplayer[i].Ten);
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &thongtinplayer[i].tuoi);
    printf("Gioi tinh cua ban:\n1.nam \n0.nu\nLua chon cua ban:");
    scanf("%d", &thongtinplayer[i].gioitinh);
    printf("________________________________\n");
    }
    for (int i=0 ; i<SO_LUONG ; i++){
        printf("Ho ten player %d: %s %s %s. %d tuoi.\n", i, thongtinplayer[i].Ho, thongtinplayer[i].Tendem, thongtinplayer[i].Ten, thongtinplayer[i].tuoi);
        if (thongtinplayer[i].gioitinh){
            printf("gioi tinh Nam\n________________________________\n");
        }
        else{
            printf("gioi tinh nu\n________________________________\n");
        }
    }
    return 0;
}



