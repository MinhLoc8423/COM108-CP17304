#include <stdio.h>

int main()
{
    int choose;
    do
    {
        printf("* =======================MENU======================= *\n");
        printf("*       1: Kien tra so nguyen                        *\n");
        printf("*       2: Tim uoc chung va boi chung cua 2 so       *\n");
        printf("*       3: Chuong trinh tinh tien cho quan karaoke   *\n");
        printf("*       4: Chuong trinh tinh tien dien               *\n");
        printf("*       5: Chuong trinh tinh doi tien                *\n");
        printf("*       6: Tinh lai xuat vay ngan hang vay tra gop   *\n");
        printf("*       7: Chuong trinh vay tien mua xe              *\n");
        printf("*       8: Sap xep thong tin sinh vien               *\n");
        printf("*       9: Game FPOLY-LOTT                           *\n");
        printf("*       10: Chuong trinh tinh toan phan so           *\n");
        printf("*       11: Thoat chuong trinh                       *\n");
        printf("******************************************************\n");
        printf("Lua chon chuong trinh: ");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:{
            printf("Ban da chon bai 1\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 2:{
            printf("Ban da chon bai 2\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 3:{
            printf("Ban da chon bai 3\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 4:{
            printf("Ban da chon bai 4\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 5:{
            printf("Ban da chon bai 5\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 6:{
            printf("Ban da chon bai 6\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 7:{
            printf("Ban da chon bai 7\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 8:{
            printf("Ban da chon bai 8\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 9:{
            printf("Ban da chon bai 9\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 10:{
            printf("Ban da chon bai 10\n");
            printf("        _______________________________________       \n");
            break;
        }
        case 11:{
            printf("*========================Exit========================*\n");
            break;
        }
        default:
            printf("Vui long chon dung chuong trinh\n");
            printf("        _______________________________________       \n");
            break;
        }
    } while (choose != 11);
    
    return 0;
}
