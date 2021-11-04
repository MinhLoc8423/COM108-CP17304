#include <stdio.h>

int main()
{
    float toan,ly,hoa,diem_trung_binh;
    printf("*********Bai 4: Xay dung chuong trinh tinh diem trung binh********* \n");
    printf("Nhap diem toan: " );
    scanf("%f", &toan);  
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    diem_trung_binh = (hoa + (ly*2) + (toan*3)) /3;
    printf("Diem trung binh cua 3 mon: %f \n", diem_trung_binh);
    return 0;
}
