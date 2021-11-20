#include <stdio.h>

int main() {
    // int a[20]={2,3,8,5,1,7,10};
    // for(int i = 0; i < 7 - 1; i++){
    //     for(int j = i + 1; j < 7; j++){
    //         if(a[i] < a[j]){
    //             // Hoan vi 2 so a[i] va a[j]
    //             int tg;
    //             tg = a[i];
    //             a[i] = a[j];
    //             a[j] = tg;        
    //         }
    //     }
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%d",a[i]);
    // }
    int menh_gia_tien[9] = {500,200,100,50,20,10,5,2,1};
    int arr[9]= {0,0,0,0,0,0,0,0,0};
    int input;
    printf("Nhap so tien can doi:");
    scanf("%d",&input);
    int i = 0;
    int so_tien = input;
    while (input != 0)
    {
        if(so_tien == menh_gia_tien[i]){
            i++;
        }
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
