#include <stdio.h>

void check(int num_1){
    int x = 2;
    int count = 0;
    for(x;x<num_1;x++){
        if(num_1 % x == 0){
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d la so nguyen to\n",num_1);
    }
    else
    {
        printf("%d khong phai la so nguyen to\n",num_1);
    }
    
}

int main()
{
    int input;
    printf("Ham kiem tra so nguyen to\n");
    printf("Nhap so:");
    scanf("%d",&input);
    check(input);
    return 0;
}
