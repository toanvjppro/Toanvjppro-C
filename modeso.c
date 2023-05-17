#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int songaunhien = 0, songaunhien0 = 0, songaunhien1 = 0, sochon =0, modetc = 0, lanchoi = 1, soduocchon = 0, replay = 1, dokho = 0;
    const int MAX = 100, MIN = 1, MAX0 = 1000, MAX1 = 10000;
    srand(time(NULL));
    songaunhien = (rand()%(MAX-MIN+1))+MIN;
    songaunhien0 = (rand()%(MAX0-MIN+1))+MIN;
    songaunhien1 = (rand()%(MAX1-MIN+1))+MIN;
    printf("_____________________________\n");
    printf("Chao mung ban den voi cho choi doan so ngau nhien\n");
    printf("Hay chon mode cua tro choi\n");
    printf("______________________\n");
    printf("1. Choi mot minh\n2. Choi 2 minh\n");
    scanf("%d", &modetc);
do
{    
    if (modetc == 1)
        {
        printf("Ban da chon mode Choi mot minh\n");
        printf("Hay chon do kho\n");
        printf("1.1-100\n2.1-1000\n3.1-10000\n");
        scanf("%d", &dokho);
        if (dokho==1)
        {
            do
            {
            printf("Du doan cua ban:");
            scanf("%d", &sochon);
                if (sochon<songaunhien)
                {
                    printf("Nho hon roi\n");
                }
                else if (sochon>songaunhien)
                {
                    printf("Lon hon roi\n");
                }
                else 
                {
                    printf("Chuc mung ban da doan trung so: %d sau %d lan choi\n", songaunhien, lanchoi);
                        if (lanchoi>=5)
                            {
                                printf("(ngu vai haha)");
                            }
                            else if (lanchoi<5)
                            {
                                printf("(Ban that thong minh)");
                            }
                }
            lanchoi++;
            }while(sochon != songaunhien);
        }
        else if (dokho==2)
        {
            do
            {
            printf("Du doan cua ban:");
            scanf("%d", &sochon);
                if (sochon<songaunhien0)
                {
                    printf("Nho hon roi\n");
                }
                else if (sochon>songaunhien0)
                {
                    printf("Lon hon roi\n");
                }
                else 
                {
                    printf("Chuc mung ban da doan trung so: %d sau %d lan choi\n", songaunhien0, lanchoi);
                        if (lanchoi>=5)
                            {
                                printf("(ngu vai haha)");
                            }
                            else if (lanchoi<5)
                            {
                                printf("(Ban that thong minh)");
                            }
                }
            lanchoi++;
            }while(sochon != songaunhien0);
        }
        else if (dokho==3);
        {
            do
            {
            printf("Du doan cua ban:");
            scanf("%d", &sochon);
                if (sochon<songaunhien1)
                {
                    printf("Nho hon roi\n");
                }
                else if (sochon>songaunhien1)
                {
                    printf("Lon hon roi\n");
                }
                else 
                {
                    printf("Chuc mung ban da doan trung so: %d sau %d lan choi\n", songaunhien1, lanchoi);
                        if (lanchoi>=5)
                            {
                                printf("(ngu vai haha)");
                            }
                            else if (lanchoi<5)
                            {
                                printf("(Ban that thong minh)");
                            }
                }
            lanchoi++;
            }while(sochon != songaunhien1);
        }
    }
    else if (modetc == 2)
    {
        printf("Ban da chon mode choi 2 minh\n");
        printf("Hay chon do kho:\n");
        printf("1.1-100\n2.1-1000\n3.1-10000\n");
        scanf("%d", &dokho);
        if (dokho==1)
        {
        do 
        {
        printf("Hay nhap so cua ban(1-100):");
        scanf("%d", &soduocchon);
        printf("\n\n\n\n\n\n\n\n\n\nDu doan cua ban:");
        scanf("%d", &sochon);
            if (sochon<soduocchon)
            {
                printf("Nho hon roi");
            }
            else if (sochon>soduocchon)
            {
                printf("Lon hon roi");
            }
            else 
            {
                printf("Chuc mung ban da doan trung so: %d sau %d lan choi", soduocchon, lanchoi);
            }
        }while (sochon != soduocchon);
        lanchoi++;
        }
        else if (dokho==2)
        {
        do 
        {
        printf("Hay nhap so cua ban(1-1000):");
        scanf("%d", &soduocchon);
        printf("\n\n\n\n\n\n\n\n\n\nDu doan cua ban:");
        scanf("%d", &sochon);
            if (sochon<soduocchon)
            {
                printf("Nho hon roi");
            }
            else if (sochon>soduocchon)
            {
                printf("Lon hon roi");
            }
            else 
            {
                printf("Chuc mung ban da doan trung so: %d sau %d lan choi", soduocchon, lanchoi);
            }
        }while (sochon != soduocchon);
        lanchoi++;
        }
        else if (dokho==3)
        {
        do 
        {
        printf("Hay nhap so cua ban(1-10000):");
        scanf("%d", &soduocchon);
        printf("\n\n\n\n\n\n\n\n\n\nDu doan cua ban:");
        scanf("%d", &sochon);
            if (sochon<soduocchon)
            {
                printf("Nho hon roi");
            }
            else if (sochon>soduocchon)
            {
                printf("Lon hon roi");
            }
            else 
            {
                printf("Chuc mung ban da doan trung so: %d sau %d lan choi", soduocchon, lanchoi);
            }
        }while (sochon != soduocchon);
        lanchoi++;
        }


    }
    else
    {
        printf("Nhap sai roi thang ngu");
    }
printf("\nBan co muon choi lai khong\n");
printf("1.Co\n2.Khong\n");
scanf("%d", &replay);
}while (replay==1);
system("PAUSE");
    return 0;
}
