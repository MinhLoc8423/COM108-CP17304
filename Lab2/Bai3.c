#include <stdio.h>

int main()
{
    float ban_kinh,chu_vi,dien_tich; 
    const float PI = 3.14159;
    printf("*********Bai 3: Xay dung chuong trinh tinh chu vi,dien tich hinh tron********* \n");
    printf("Vui long nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh);  
    chu_vi = 2*ban_kinh*PI; 
    dien_tich = ban_kinh*ban_kinh*PI; 
    printf("Chu vi hinh tron: %.2f \n", chu_vi);
    printf("Dien tich hinh tron: %.2f \n", dien_tich);
    return 0;
}
