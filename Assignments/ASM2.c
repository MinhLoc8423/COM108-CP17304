#include <stdio.h>
#include <math.h>

void menu(){
    printf("* =========================MENU========================= *\n");
    printf("*         01: Kien tra so nguyen                         *\n");
    printf("*         02: Tim uoc chung va boi chung cua 2 so        *\n");
    printf("*         03: Chuong trinh tinh tien cho quan karaoke    *\n");
    printf("*         04: Chuong trinh tinh tien dien                *\n");
    printf("*         05: Chuong trinh tinh doi tien                 *\n");
    printf("*         06: Tinh lai xuat vay ngan hang vay tra gop    *\n");
    printf("*         07: Chuong trinh vay tien mua xe               *\n");
    printf("*         08: Sap xep thong tin sinh vien                *\n");
    printf("*         09: Game FPOLY-LOTT                            *\n");
    printf("*         10: Chuong trinh tinh toan phan so             *\n");
    printf("*         11: Thoat chuong trinh                         *\n");
    printf("**********************************************************\n");
}

void program_1(){
    float x;
    printf("\nChuong trinh so 1: Kiem tra so nguyen\n");
    printf("Nhap so nguyen:");
    scanf("%f",&x);
    if(x == (int)x){
        int y = (int)x;
        int nguyen_to=0;
        int chinh_phuong=0;
        printf("So %d la so nguyen\n",y);
        for(int i=2;i<y;i++){
            if(y%i==0){
                nguyen_to++;
            }
        }
        if (nguyen_to == 0 && y>1 )
        {
            printf("So %d la so nguyen to\n",y);
        }
        else
        {
            printf("So %d khong phai la so nguyen to\n",y);
        }
        if(sqrt(y) == (int)sqrt(y)){
            printf("So %d la so chinh phuong\n",y);
        }
        else
        {
            printf("So %d khong phai la so chinh phuong\n",y);
        }
    }
    else{
        printf("So %g khong phai la so nguyen\n",x);
    }
    printf("Ket thuc chuong trinh 1\n");
}

int UCLN(int num1,int num2){
    while (num1 != num2)
    {
        if(num1 > num2){
            num1 = num1 - num2;
        }else{
            num2 = num2 - num1;
        }
    }
    return num1;
}

int BCNN(int a, int b) {
    return a / UCLN(a, b) * b; 
}

void program_2(){
    int x,y,ucln,bcnn;
    printf("\nChuong trinh so 2: Tim uoc so chung va boi chung cua 2 so\n");
    printf("Nhap so nguyen thu nhat:");
    scanf("%d",&x);
    printf("Nhap so nguyen thu hai:");
    scanf("%d",&y);
    ucln = UCLN(x,y);
    bcnn = BCNN(x,y);
    printf("Uoc chung lon nhat cua 2 so la:%d\n",ucln);
    printf("Boi chung nho nhat cua 2 so la:%d\n",bcnn);
}

void program_3(){

}

void lua_chon(){
    int choose;
    do
    {   
        menu();
        printf("-->Lua chon chuong trinh: ");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:{
            program_1();
            printf("\n");
            break;
        }
        case 2:{
            program_2();
            printf("\n");
            break;
        }
        case 3:{
            program_3();
            break;
        }
        case 4:{
            printf("Ban da chon bai 4\n");
            break;
        }
        case 5:{
            printf("Ban da chon bai 5\n");
            break;
        }
        case 6:{
            printf("Ban da chon bai 6\n");
            break;
        }
        case 7:{
            printf("Ban da chon bai 7\n");
            break;
        }
        case 8:{
            printf("Ban da chon bai 8\n");
            break;
        }
        case 9:{
            printf("Ban da chon bai 9\n");
            break;
        }
        case 10:{
            printf("Ban da chon bai 10\n");
            break;
        }
        case 11:{
            printf("*==========================Exit==========================*\n");
            break;
        }
        default:
            printf("Vui long chon dung chuong trinh\n");
            break;
        }
    } while (choose != 11);
}

int main()
{
    lua_chon();
    return 0;
}
