#include <stdio.h>
#include <math.h>


int main()
{
    char lua_chon;
    printf("* ====================MENU==================== *\n");
    printf("*       1: Chuong trinh tinh hoc luc           *\n");
    printf("*       2: Chuong trinh giai phuong trinh      *\n");
    printf("*       3: Chuong trinh tinh tien dien         *\n");
    printf("************************************************\n");
    printf("Lua chon chuong trinh: ");
    lua_chon = getchar();
    printf("        _________________________________       \n");
    switch (lua_chon)
    {
    case '1':{
        int diem;
        printf("\n");
        printf("******** Chuong trinh tinh diem hoc luc ******** \n");
        printf("\n");
        printf("Nhap diem cua sinh vien(0-10): ");
        scanf("%d", &diem);
        if (diem > 10 || diem < 0)
        {
            printf("Vui long so nhap diem tu 0 - 10 \n");
        }
        else if (diem >= 9)
        {
            printf("Hoc luc xuat sac \n");
        }
        else if (diem >= 8)
        {
            printf("Hoc luc gioi \n");
        }
        else if (diem >= 6.5)
        {
            printf("Hoc luc kha \n");
        }
        else if (diem >= 5)
        {
            printf("Hoc luc trung binh \n");
        }
        else if (diem >= 3.5)
        {
            printf("Hoc luc yeu \n");
        }
        else
        {
            printf("Hoc luc kem \n");
        }
        break;
        }
    case '2':{
            int lua_chon2;
            printf("\n");
            printf("* =======Chuong trinh giai phuong trinh======= *\n");
            printf("*           1: Phuong trinh bac 1              *\n");
            printf("*           2: Phuong trinh bac 2              *\n");
            printf("************************************************\n");
            printf("Lua chon chuong trinh: ");
            scanf("%d", &lua_chon2);
            printf("        _________________________________       \n");
            switch (lua_chon2)
            {
            case 1:{
                float a,b;
                printf("\n");
                printf("*==============Phuong trinh bac 1==============*\n");
                printf("        Phuong trinh co dang: ax + b = 0        \n");
                printf("Nhap gia tri a: ");
                scanf("%f",&a);
                printf("Nhap gia tri b: ");
                scanf("%f",&b);
                if (a == 0)
                {
                    if (b == 0)
                    {
                        printf("Phuong trinh vo so nghiem \n");
                    }
                    else
                    {
                        printf("Phuong trinh vo nghiem \n");
                    }
                }
                else
                {
                    printf("Phuong trinh co nghiem x= %.2f \n", -b/a );
                }
                break;
            }
            case 2:{
                float a,b,c;
                printf("\n");
                printf("*==============Phuong trinh bac 2==============*\n");
                printf("     Phuong trinh co dang: ax^2 + bx +c = 0     \n");
                printf("Nhap gia tri a: ");
                scanf("%f",&a);
                printf("Nhap gia tri b: ");
                scanf("%f",&b);
                printf("Nhap gia tri c: ");
                scanf("%f",&c);
                if (a == 0)
                {
                    printf("Phuong trinh co nghiem x= %.2f \n", -c/b );
                }
                else
                {
                    float delta = (b*b)- (4*a*c);
                    if (delta < 0 )
                    {
                        printf("Phuong trinh vo nghiem");
                    }
                    else if (delta == 0)
                    {
                        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f", -b/(2*a) );
                    }
                    else
                    {
                        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f \n", (-b + sqrt(delta))/(2*a ));
                        printf("Phuong trinh co hai nghiem phan biet: x2 = %.2f \n", (-b - sqrt(delta))/(2*a ));
                        // printf("Can bac hai cua %.2f \n", delta );
                    }
                    
                }
                
                break;
            }
            default:
                printf("\n");
                printf("================================================\n");
                printf("************Vui long nhap chinh xac*************\n");
                printf("================================================\n");
                break;
            }
            break;
        }
    case '3':{
        printf("3: Chuong trinh tinh tien dien \n");
        break;
    }   
    default:
        printf("\n");
        printf("================================================\n");
        printf("************Vui long nhap chinh xac*************\n");
        printf("================================================\n");
    }
    return 0;
}
