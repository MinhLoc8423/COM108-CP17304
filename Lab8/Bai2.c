#include <stdio.h>
#include <string.h>

struct sinh_vien{
    char ma_sv[10];
    char ten_sv[20];
    char nganh_hoc[20];
    float diem_tb;
};

int number_of_student(int *n){
    printf("Nhap so luong sinh vien can them:");
    scanf("%d",&(*n));
}

void input_sv(struct sinh_vien mang_sv[],int n){
    for(int i=0;i<n;i++){
        printf("***Sinh vien so %d***\n",i);
        printf("Ma so sinh vien:");
        while (getchar() != '\n');
        gets((mang_sv[i]).ma_sv);
        printf("Ten sinh vien:");
        gets((mang_sv[i]).ten_sv);
        printf("Nganh hoc:");
        gets((mang_sv[i]).nganh_hoc);
        printf("Diem trung binh:");
        scanf("%f",& (mang_sv[i]).diem_tb);
    }
}

void output_sv(struct sinh_vien mang_sv[],int n){
    for(int i=0;i<n;i++){
        printf("%-16s | %-30s | %-20s | %.2f \n",mang_sv[i].ma_sv,mang_sv[i].ten_sv,mang_sv[i].nganh_hoc,mang_sv[i].diem_tb);
    }
}

void sort_diem(struct sinh_vien mang_sv[],int n){
    printf("\nSap xep sinh vien theo diem tang dan\n");
    for(int i=0;i<n-1;i++){
        for (int j = i+1; j < n; j++)
        {
            if (mang_sv[i].diem_tb>mang_sv[j].diem_tb)
            {
                struct sinh_vien temp;
                temp = mang_sv[i];
                mang_sv[i] = mang_sv[j];
                mang_sv[j] = temp;
            }
            
        }
    }
    printf("%-16s | %-30s | %-20s | %s \n","MaSV","TenSV","Nganh Hoc","Diem TB");
    output_sv(mang_sv,n);
}

int main()
{   
    int bien_dem=0;
    number_of_student(&bien_dem);
    struct sinh_vien mang_sv[bien_dem];
    input_sv(mang_sv,bien_dem);
    printf("\nBang sinh vien\n");
    printf("%-16s | %-30s | %-20s | %s \n","MaSV","TenSV","Nganh Hoc","Diem TB");
    output_sv(mang_sv,bien_dem);
    sort_diem(mang_sv,bien_dem);
    return 0;
}

