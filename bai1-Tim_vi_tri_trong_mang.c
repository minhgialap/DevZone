#include<stdio.h>

int main(){
    int a[10];
    int b;
    int KT=0;
    for(int i = 1; i<=10;i++){
        printf("\nnhap phan tu thu %d : ",i);scanf("%d",&a[i]);
       }

    printf("\n nhap so: ");scanf("%d",&b);
       for(int i = 1; i<=10;i++){
           if(b == a[i]){
                  printf("vi tri cua so do la : %d ",i);
                  KT=1;
                     break;
             }
          }

      if(KT == 0){
        printf("\nvi tri cua so do la: -1");
      }
   return 0;
}
