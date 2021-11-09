#include <stdio.h>

void main(){ 
    int input = 4;
    do
    {
        printf("\n");
        printf("====================Menu====================\n");
        printf("*      Chuc nang 1: Tinh trung binh tong   *\n");
        printf("*      Chuc nang 2: Tim so nguyen to       *\n");
        printf("*      Chuc nang 3: Tim so chinh phuong    *\n");
        printf("*      Chuc nang 4: Thoat                  *\n");   
        printf("====================****====================\n");
        printf("Vui long chon chuong trinh(1,2,3,4): ");
        scanf("%d",&input);
        printf("____________________________________________\n");
        printf("\n"); 
        switch (input)
        {
        case 1:{
            int min,max;
            float tong=0,bien_dem_case1=0,trung_binh;
            printf("         ***Tim trung binh tong***          \n");
            printf("Nhap gia tri min: ");
            scanf("%d", &min);
            printf("Nhap gia tri max: ");
            scanf("%d", &max);
            int i = min;
            while (i<= max)
            {
                if(i%2 == 0){
                    printf("%d ",i);
                    tong += i;
                    bien_dem_case1 ++;
                }
                i++;
            }
            trung_binh = tong/bien_dem_case1;
            printf("\nTrung binh tong cua cac so tu nhien chia het cho 2: %f\n", trung_binh);
            break;
        }
        case 2:{
            int x,bien_dem_case2=0;
            printf("           ***Tim so nguyen to***           \n");
            printf("Nhap so nguyen to: ");
            scanf("%d",&x);
            for (int i = 2; i < x; i++)
            {
                if(x%i ==0){
                    bien_dem_case2++;
                }
            }
            if(bien_dem_case2 == 0){
                printf("%d la so nguyen to\n", x);
            }else{
                printf("%d khong phai la so nguyen to \n",x);
            }
            break;
        }
        case 3:{
            int chinh_phuong,bien_dem_case3=0;
            printf("          ***Tim so chinh phuong***         \n");
            printf("Nhap so chinh phuong: ");
            scanf("%d",&chinh_phuong);
            for(int i = 1;i<chinh_phuong;i++){
                if(i*i == chinh_phuong){
                    bien_dem_case3++;
                    break;
                }
            }
            if(bien_dem_case3 == 0){
                printf("%d khong phai la so chinh phuong\n",chinh_phuong);
            }
            else{
                printf("%d la so chinh phuong\n",chinh_phuong);
            }
            break;
        }
        case 4:
            printf("        !!! Ket thuc chuong trinh !!!         \n");
            break;
        default:
            printf("    !!!     Lua chon khong dung      !!!    \n");
            break;
        }
    } while (input != 4);
    
}