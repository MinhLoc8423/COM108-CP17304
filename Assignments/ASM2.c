#include <stdio.h>
#include <math.h>

void menu(){
    printf("* =========================MENU========================= *\n");
    printf("*         01: Kien tra so nguyen                         *\n");
    printf("*         02: Tim uoc chung va boi chung cua 2 so        *\n");
    printf("*         03: Chuong trinh tinh tien cho quan karaoke    *\n");
    printf("*         04: Chuong trinh tinh tien dien                *\n");
    printf("*         05: Chuong trinh doi tien                      *\n");
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
    int gio_batdau,gio_ketthuc,tong_gio;
    float tien;
    printf("\nChuong trinh so 3: Chuong trinh tinh tien cho quan karaoke\n");
    printf("Nhap gio bat dau(24h):");
    scanf("%d",&gio_batdau);
    printf("Nhap gio ket thuc(24h):");
    scanf("%d",&gio_ketthuc);
    tong_gio = gio_ketthuc - gio_batdau;
    if((gio_ketthuc < gio_batdau) || ((12 > gio_batdau) || (gio_ketthuc > 23)) ){        
        printf("Loi gio nhap !!!\n");
    }
    else{
        if (tong_gio > 3)
        {
            int so_du = tong_gio - 3;
            float tien_km = 0.7;
            tien = 3 * 150000;
            if( 14 <= gio_batdau && gio_batdau <= 17){
                tien_km = 0.6;
                tien = tien + (so_du *(150000*tien_km));
                printf("So tien can thanh toan la:%g\n",tien);
            }
            else{
                tien = tien + (so_du *(150000*tien_km));    
                printf("So tien can thanh toan la:%g\n",tien);
            }
        }
        else{
            tien = tong_gio * 150000;
            printf("So tien can thanh toan la:%g\n",tien);
        }
    }
}

void program_4(){
    float bac1,bac2,bac3,bac4,bac5,bac6,so_tien_dien;
    bac1 = 1.678;
    bac2 = 1.734;
    bac3 = 2.014;
    bac4 = 2.536;
    bac5 = 2.834;
    bac6 = 2.927;
    printf("\nChuong trinh so 4: Tinh tien dien\n");
    printf("Nhap so (kwh) dien su dung:");
    scanf("%f",&so_tien_dien);
    if(so_tien_dien <= 50){
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1);
    }else if (so_tien_dien <= 100){
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1 + (so_tien_dien-50)*bac2);
    }else if (so_tien_dien <= 200){
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1 + so_tien_dien*bac2 + (so_tien_dien-100)*bac3);
    }else if (so_tien_dien <= 300){
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1 + so_tien_dien*bac2 + so_tien_dien*bac3 + (so_tien_dien-200)*bac4 );
    }else if (so_tien_dien <= 400){
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1 + so_tien_dien*bac2 + so_tien_dien*bac3 + so_tien_dien*bac4 + (so_tien_dien-300)*bac5 );
    }else{
        printf("So tien phai tra la:%g\n",so_tien_dien*bac1 + so_tien_dien*bac2 + so_tien_dien*bac3 + so_tien_dien*bac4 + so_tien_dien*bac5 + (so_tien_dien-400)*bac6 );
    }
}

void program_5(){
    int menh_gia_tien[9] = {500,200,100,50,20,10,5,2,1};
    int arr[9]= {0};
    int input;
    printf("\nChuong trinh so 5: Chuc nang doi tien\n");
    printf("Nhap so tien can doi:");
    scanf("%d",&input);
    int i = 0;
    int so_tien = input;
    for (int j = 0; j < 9; j++){
        if (so_tien == menh_gia_tien[j])
        {
            i = j+1;
        }  
    }
    while (input != 0)
    {   
        while (input < menh_gia_tien[i])
        {
            i++;
        }
        input = input - menh_gia_tien[i];
        arr[i] += 1;
    }
    for ( i = 0; i < 9; i++)
    {
        if(arr[i] > 0){
            printf("%d to menh gia %d\n",arr[i],menh_gia_tien[i]);
        }
    }
}

void program_6(){
    int so_tien_vay,lai;
    printf("\nChuong trinh so 6: Chuc nang tinh lai xuat cho vay tra gop\n");
    printf("Nhap so tien muon vay:");
    scanf("%d",&so_tien_vay);
    int bien_tam = so_tien_vay;
    printf("%s| %-15s | %-15s | %-15s | %-15s\n","Ky han","Lai phai tra","Goc phai tra","So tien phai tra","So tien con lai");
    for(int i = 1;i<=12;i++){
        lai = so_tien_vay * 0.05;
        so_tien_vay = so_tien_vay - (bien_tam/12);
        printf("  %-3d | %-15d | %-15d | %-16d | %-15d\n",i,lai,(bien_tam/12),(bien_tam/12)+lai,so_tien_vay);
    }
}

void program_7(){
    float pham_tram_vay,lai,tien_no;
    int tien_co_dinh = 500000000;
    printf("\nChuong trinh so 7: Chuc nang vay tien mua xe\n");
    printf("Nhap so phan tram vay toi da(0-100):");
    scanf("%f",&pham_tram_vay);
    printf("So tien tra lan dau:%.0f\n",tien_co_dinh* ((100-pham_tram_vay) /100));
    tien_no = tien_co_dinh - (tien_co_dinh * ((100-pham_tram_vay) /100));
    float bien_tam = tien_no;
    printf("%s| %-15s | %-15s | %-15s | %-15s\n","Ky han","Lai phai tra","Goc phai tra","So tien phai tra","So tien con lai");
    int j = 0;
    for(int i = 1; i <= 288;i++){
        lai = tien_no * 0.006;
        tien_no = tien_no - (bien_tam/288);
        printf("  %-3d | %-15.2f | %-15.2f | %-16.2f | %-15.2f\n",i,lai,(bien_tam/288),(bien_tam/12)+lai,tien_no);
        if(i%12 == 0){
            j++;
            printf("---------------------------->Ket thuc nam thu %d<----------------------------\n",j);
        }
    }
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
            printf("\n");
            break;
        }
        case 4:{
            program_4();
            printf("\n");
            break;
        }
        case 5:{
            program_5();
            printf("\n");
            break;
        }
        case 6:{
            program_6();
            printf("\n");
            break;
        }
        case 7:{
            program_7();
            printf("\n");
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
