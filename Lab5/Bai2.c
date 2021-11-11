#include <stdio.h>

int check_year(int year){
    int flag = 0;
    if (year % 4 == 0 && year%100 != 0)
    {
        flag = 1;
    }
    if(year % 400 == 0){
        flag = 1;
    }
    return flag;
}

int main()
{
    int input_year,result;
    printf("Tinh nam nhuan\n");
    printf("Nhap nam: ");
    scanf("%d",&input_year);
    result = check_year(input_year);
    if(result == 0){
        printf("%d khong phai la nam nhuan\n",input_year);
    }
    else{
        printf("%d la nam nhuan\n", input_year);
    }
    return 0;
}
