#include<stdio.h>

int main(){
    int a[10];
    int b;
    for(int i = 1; i<=10;i++){
        printf("\nnhap phan tu thu %d : ",i);scanf("%d",&a[i]);
       }
    
    printf("\n nhap so: ");scanf("%d",&b);
       for(int i = 1; i<=10;i++){
           if(b == a[i]){
                  printf("vi tri cua so do la : %d ",i);
                     break;
             }
          }
   return 0;
}
