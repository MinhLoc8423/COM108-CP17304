#include <stdio.h>

int main()
{
    int chieu_dai,chieu_rong,chu_vi,dien_tich;  
    printf("*********Bai 2: Xay dung chuong trinh tinh chu vi,dien tich hinh chu nhat********* \n");
    printf("Nhap chieu dai: ");
    scanf("%d", &chieu_dai);
    printf("Nhap chieu rong: "); 
    scanf("%d", &chieu_rong);
    chu_vi = 2*(chieu_dai+chieu_rong);
    dien_tich = chieu_dai*chieu_rong;
    printf("Chu vi hinh chu nhat: %d \n", chu_vi); 
    printf("Dien tich hinh chu nhat: %d \n", dien_tich); 
    return 0;
}
