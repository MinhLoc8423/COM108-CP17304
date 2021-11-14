#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Nhap du lieu vao vi tri arr[%d] ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int max =0,min;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    min = max;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Gia tri lon nhat cua mang la: %d\n",max);
    printf("Gia tri nho nhat cua mang la: %d\n",min);
    return 0;
}
