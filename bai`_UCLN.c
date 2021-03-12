#include<stdio.h>

int main(){
  int a,b,c,min;
  printf("nhap a: ");scanf("%d",&a);
  printf("nhap b: "); scanf("%d",&b);

  if(a == 0 && b == 0){
    printf("2 so nay ko co UCNLN");
  }else if(a != 0 && b == 0){
       printf("UCLN cua a va b la : %d",a);
     }else if(a == 0 && b!=0){
        printf("UCLN cua a va b la : %d",b);
       }else{
         if(a>b){
            min = b;
         }else{
            min = a;
           }
          for(int i = 1; i<min;i++){
                if(a%i==0 && b%i == 0)
                  c = i;
          }
          printf("UCLN cua a va b la : %d",c);
       }
       return 0;
}
