#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Vui long nhap du lieu vao vi tri arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    float tong,trung_binh;
    int bien_dem=0;
    for(int i=0;i<n;i++){
        if(arr[i]%3 == 0){
            tong += arr[i];
            bien_dem++;
        }
    }
    trung_binh = tong/bien_dem;
    if(bien_dem == 0){  
        printf("Trong mang khong co so nao chia het cho 3 \n");
    }else{
        printf("Gia tri trung binh: %.3f\n",trung_binh);
    }
    return 0;
}
