#include <string.h>
#include <stdio.h>

int main()
{
    char Acc[50],Pass[50];
    printf("Chuong trinh dang nhap\n");
    printf("Nhap tai khoan: ");
    gets(Acc);
    printf("Nhap mat khau: ");
    gets(Pass);
    if (strcmp(Acc,"admin") == 0 && strcmp(Pass,"admin") == 0)
    {
        printf("Dang nhap thanh cong\n");
    }
    else
    {
        printf("Dang nhap that bai\n");
    }
    return 0;
}
