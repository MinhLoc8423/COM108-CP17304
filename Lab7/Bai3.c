#include <stdio.h>
#include <string.h>

int main()
{
    printf("Chuong trinh sap xep chuoi\n");
    char str[5][50];
    for(int i=0;i<5;i++){
        printf("Nhap chuoi [%d]: ",i);
        gets(str[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(str[i],str[j]) > 0){
                char temp[50];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Chuoi xap xep theo bang chu cai:\n");
    for(int i=0;i<5;i++){
        printf("%s\n",str[i]);
    }
    printf("\n");
    return 0;
}

