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
    //6 8 2 0 21  ---> 21 8 6 2 0
    //i<j
    //6
    for(int i=0;i< n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang duoc sap xep theo thu tu giam dan: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
