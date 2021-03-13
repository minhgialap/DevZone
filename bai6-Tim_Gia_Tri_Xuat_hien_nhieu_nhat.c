#include<stdio.h>

int main(){
    int a[21];
    int n,gt,max,dem;
    max = 1;
    dem = 0;;
    printf("nhap chieu dai day~ : ");
    do{
       scanf("%d",&n);
       if( n<0 || n>21){
        printf("\n vui long nhap lai n:");
        }
    }while(n<0 || n>21);

    printf("\n nhap phan tu cho day:\n");

      for(int i=0;i<n;i++){
        printf("\t[%d]: ",i+1);
        scanf("%d",&a[i]);
      }

       for(int i=0;i<n-1;i++){
          for(int j = i+1;j<n;j++){
            if(a[i] == a[j]){
                dem++;
            }
             if(max < dem){
                max = dem;
                gt = a[i];
             }
          }
       }

       printf("\n gia tri %d xuat hien nhieu nhat voi %d lan xuat hien !!",gt,max);
       return 0;
    }
