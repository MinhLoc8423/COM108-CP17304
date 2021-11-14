#include <stdio.h>

int main(){
    int n,m;    
    printf("Nhap so hang(n): ");
    scanf("%d",&n);
    printf("Nhap so cot(m): ");
    scanf("%d",&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("Nhap du lieu vao ma tran arr[%d][%d]: ",i,j);
           scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%d \t",arr[i][j] * arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}