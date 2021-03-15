#include<stdio.h>

int tongSoChan(int n){
    int p;
    for(int i=1 ; i<=n ; i++){
        if(i%2 == 0){
            p+=i;
        }
    }
    return p;
}

int main(){
    int n;
    printf("nhap n : ");scanf("%d",&n);

    printf("\ tong cac so chan nho hon n la : %d",tongSoChan(n));

    return 0;
}
