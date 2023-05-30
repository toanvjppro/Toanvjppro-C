#include <stdio.h>
#include <stdlib.h>
#include "mang.h"

int main()
{
    int array[5]={23,33,11,0,12};
    int array1[5];
    hienthi(array, 5);
    printf("tong array la: %d \n", tongarr(array, 5));
    printf("trung binh array la: %f \n", tbar(array, 5));
    copyar(array, array1,5);
    printf("----------------\n");
    gtMax(array, 5, 23);
    sapxepar(array, 5);
   return 0;
}
void hienthi(int array[], int kichthuocar)
{
    int i;
    for(i=0 ; i<kichthuocar; i++)
    {
        printf("%d \n", array[i]);
    }
}
int tongarr(int array[], int kichthuocarr)
{
    int tong = 0, i;
    for(i=0 ; i<kichthuocarr ; i++)
    {
        tong += array[i];
    }
    return tong;
}
double tbar(int array[], int kichthuoc)
{
    double trungbinh = 0, tong = 0 ;
    int i = 0;
    for (i=0; i < kichthuoc ; i++)
    {
        tong += array[i];
    }
    return tong/kichthuoc;
}
int  copyar(int array1[], int array2[], int kickthuoc)
{
    int i;
    for (i=0 ; i < kickthuoc ; i++)
    {
        array2[i] = array1[i];
    }
    for (i=0 ; i<kickthuoc ; i++)
    {
        printf("%d\n", array2[i]);
    }
}
void gtMax(int array[], int kichthuoc, int giatrimax)
{
    int i;
    for (i=0 ; i<kichthuoc ; i++)
    {
        if (array[i]>giatrimax)
        {
            array[i]=0;
        }
        printf("%d\n", array[i]);
    }
}
void sapxepar(int array[], int kichthuoc)
{
   int i;
   for(i=0 ; i< kichthuoc ; i++)
   {
    array[i];
   } 
}