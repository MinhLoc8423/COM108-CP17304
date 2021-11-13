#include <stdio.h>

int main() {
    int a[7] = {3,1,52,2,9,7,10};
    int i,j,temp;
    for(i = 0; i<= 6;i++){
        for(j =i+1;j <= 6;j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int k=0;k <= 6;k++){
        printf("%d ",a[k]);
    }
}
