#include <stdio.h>

int main() {
    int a[20]={2,3,8,5,1,7,10};
    for(int i = 0; i < 7 - 1; i++){
        for(int j = i + 1; j < 7; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                int tg;
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d",a[i]);
    }
    
}
