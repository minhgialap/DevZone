#include<stdio.h>



int main(){
    int a[100];
    int n;
    int b = 0;

    printf("mang? co chieu dai la: ");scanf("%d",&n);
    printf("\n nhap phan tu cho mang : \n");
    for(int i = 0;i<n;i++){
        printf("[%d]: \t",i+1);
        scanf("%d",&a[i]);
    }

      for(int i=0 ;i < n ;i++){
       if( a[i]>a[i+1])
           b = 1;
      }
      
        if(b == 1){
        printf("\n day so nay chua xep theo thu tu tang dan !");
          }else{
        printf("\n day so nay da xep theo thu tu tang dan !");
        }


    return 0;
}
