#include <stdio.h>
#include <stdlib.h>

int UCLN(int a, int b);
int BCNN(int a, int b);

int main(int argc, char *argv[])
{
    int soa, sob;
    printf("Nhap:\nSo a = ");
    scanf("%d", &soa);
    printf("So b = ");
    scanf("%d", &sob);
    printf("UCLN cua %d va %d la: %d \n", soa, sob, UCLN(soa, sob));
    printf("BCNN cua %d va %d la: %d \n", soa, sob, BCNN(soa,sob));
    return 0;
}

int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a>b)
        {
           return a - b;
        }
        else if (a<b)
        {
            return b - a;
        }
        else
        {
            return a;
        }
    }
   
}
int BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}