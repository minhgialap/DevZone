#include<stdio.h>
#include<math.h>

void KT_SNT(int n){
    int p = 0;
    for(int i=2; i<= sqrt(n);i++){
        if(n%i == 0){
            p = 1;
        }
    }
    if(p == 0){
        printf("\n %d la so nguyen to !!",n);
    }else{
        printf("\n %d khong phai la so nguyen to !!",n);
    }
}

int main(){
    int n;
    printf("nhap n : ");scanf("%d",&n);

    if(n == 1 || n == 0){
        printf("\n %d khong phai la so nguyen to !!",n);
       }else{
         KT_SNT(n);
         }

    return 0;
}
