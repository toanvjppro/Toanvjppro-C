#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
    int luachon , so1 , so2, ketqua;
    double ketquac, sochia1, sochia2;
    printf("Hay lua chon phep tinh cong cua ban:\n");
    printf("1. phep tinh cong\n");
    printf("2. Phep tinh tru\n");
    printf("3. Phep tinh chia\n");
    printf("4. Phep tinh nhan\n");
    scanf("%d", &luachon);
    printf("_______________\n");
    if (luachon==1)
    {
      printf ("Hay nhap phep tinh cua ban:\n");
      scanf("%d", &so1);
      scanf("%d", &so2);
      printf("_______________\n");
      ketqua = so1 + so2;
      printf("Ket qua cua phep tinh: %d + %d = %d", so1, so2, ketqua);
    }
    else if (luachon==2)
    {
      printf("Hay nhap phep tinh cua ban:\n");
      scanf("%d", &so1);
      scanf("%d", &so2);
      printf("_______________\n");
      ketqua = so1 - so2;
      printf("Ket qua cua phep tinh: %d - %d = %d", so1, so2, ketqua);
    }
    else if (luachon==3)
    {
      printf("Hay nhap phep tinh cua ban:\n");
      scanf("%lf", &sochia1);
      scanf("%lf", &sochia2);
      printf("_______________\n");
      ketquac = sochia1 / sochia2;
      printf("Ket qua cua phep tinh: %lf : %lf = %lf", sochia1, sochia2, ketquac);
    }
    else if (luachon==4)
    {
      printf("Hay nhap phep tinh cua ban:\n");
      scanf("%d", &so1);
      scanf("%d", &so2);
      printf("___________\n");
      ketqua = so1 * so2;
      printf("Ket qua cua phep tinh: %d x %d = %d", so1, so2, ketqua);
    }
    else 
    {
      printf("Nhap sai, hay nhap lai");
    }
    return 0;
}
