#include<stdio.h>
#include<math.h>

int Luythua(int x,int y){
    int c;
    c = pow(x,y);
    return c;
}

int main(){
    int x,y;
    printf("nhap x : ");scanf("%d",&x);
    printf("\nnhap y: ");scanf("%d",&y);
    printf("%d^%d = %d",x,y,Luythua(x,y));

    return 0;
}
