#include <stdio.h>
#include <string.h>

struct sinh_vien{
    char ma_sv[10];
    char ten_sv[20];
    char nganh_hoc[20];
    float diem_tb;
};

void input_sv(struct sinh_vien *mang_sv){
    printf("Ma so sinh vien:");
    gets((*mang_sv).ma_sv);
    printf("Ten sinh vien:");
    gets((*mang_sv).ten_sv);
    printf("Nganh hoc:");
    gets((*mang_sv).nganh_hoc);
    printf("Diem trung binh:");
    scanf("%f",& (*mang_sv).diem_tb);
}

void output_sv(struct sinh_vien mang_sv){
    printf("%s |",mang_sv.ma_sv);
    printf(" %s |",mang_sv.ten_sv);
    printf(" %s |",mang_sv.nganh_hoc);
    printf(" %.2f",mang_sv.diem_tb);
}

int main()
{   
    struct sinh_vien mang_sv;
    input_sv(&mang_sv);
    output_sv(mang_sv);
    return 0;
}

