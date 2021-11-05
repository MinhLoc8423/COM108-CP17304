#include <stdio.h>

#define pi = 3.14;

int main()
{
    int a,b,c;
    printf("Nhap canh a: ");
    scanf("%d", &a);
    printf("Nhap canh b: ");
    scanf("%d", &b);
    printf("Nhap canh c: ");
    scanf("%d", &c);
    if( (a+b>c) && (a+c>b) && (c+b>a)){
        printf("Ba canh nay la cua tam giac \n");
    }else{
        printf("Ba canh nay khong phai la  tam giac \n");
    }
    return 0;
}
