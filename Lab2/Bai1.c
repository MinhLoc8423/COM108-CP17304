#include <stdio.h>

int main()
{
    int so_thu_nhat,so_thu_hai;   
    printf("*********Bai 1: Xay dung chuong trinh cong tru hai so********* \n");
    printf("So thu nhat: ");
    scanf("%d", &so_thu_nhat);   
    printf("So thu hai: ");
    scanf("%d", &so_thu_hai);
    printf("Tong hai so: %d \n", so_thu_nhat + so_thu_hai);
    printf("Hieu hai so: %d \n", so_thu_nhat - so_thu_hai);
    return 0;
}
