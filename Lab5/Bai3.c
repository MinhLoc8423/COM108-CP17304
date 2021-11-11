#include <stdio.h>

int swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return *num1,*num2;
}
int main()
{
    int a,b;
    printf("Ham hoan vi\n");
    printf("Nhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Gia tri a sau khi hoan vi: %d\n",a);
    printf("Gia tri b sau khi hoan vi: %d\n",b);
    return 0;
}
