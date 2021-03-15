#include<stdio.h>

int GiaiThua(int n){
    int p=1;
    for(int i=1 ; i<=n ; i++){
        p *= i;
    }
    return p;
}

int main(){
    int n;
    printf("nhap n : ");scanf("%d",&n);

    printf("\ %d! = %d",n,GiaiThua(n));

    return 0;
}
