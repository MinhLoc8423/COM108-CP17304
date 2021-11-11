#include <stdio.h>

int max(int num_1,int num_2,int num_3){
    int max = num_1;
    if (max < num_2)
    {
        max = num_2;
    }
    if (max < num_3 ) 
    {
        max = num_3;
    }
    return max;
}

int main()
{
    int input_num_1,input_num_2,input_num_3;
    int result;
    printf("Nhap so thu nhat: ");
    scanf("%d",&input_num_1);
    printf("Nhap so thu hai: ");
    scanf("%d",&input_num_2);
    printf("Nhap so thu ba: ");
    scanf("%d",&input_num_3);
    result = max(input_num_1,input_num_2,input_num_3);
    printf("So lon nhat trong ba so la: %d\n", result);
    return 0;
}
