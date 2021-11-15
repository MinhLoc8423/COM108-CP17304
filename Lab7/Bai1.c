#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Chuong trinh diem nguyen am va phu am\n");
    printf("Nhap chuoi: ");
    gets(str);
    int nguyen_am=0,phu_am=0;
    for (int i = 0; i < strlen(str); i++)
    {
        char ki_tu =  tolower(str[i]);
        if(ki_tu == 'a' || ki_tu == 'e' || ki_tu == 'i' || ki_tu == 'o' || ki_tu == 'u'){
            nguyen_am++;
        }else{
            phu_am++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am \n",str,nguyen_am,phu_am);
    return 0;
}
