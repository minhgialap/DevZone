#include<stdio.h>

int main(){
   int a[2];
   int c;
   for(int i = 0 ; i<2 ;i++){
    printf("nhap phan tu %d : ",i+1);
    scanf("%d",&a[i]);
   }
     printf("\n  vi tri ban dau cua 2 phan tu la : %d -- %d ",a[0],a[1]);
   
        c = a[0];
        a[0] = a[1];
        a[1] = c;

        printf("\n vi tri sau khi hoan doi : %d -- %d ",a[0],a[1]);
   
   return 0;
}
