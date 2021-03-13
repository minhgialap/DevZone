#include<stdio.h>



int main(){
    int a[5],b[5],c[10];
    int k=0;
    printf("nhap cac phan tu cho mang a : ");
    for(int i=0;i<5;i++){
        printf("\n [%d] : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("nhap cac phan tu cho mang b : ");
    for(int i=0;i<5;i++){
        printf("\n [%d] : ",i+1);
        scanf("%d",&b[i]);
    }

    for(int i=0;i<5;i++){
        c[i] = a[i];
    }
    for(int i = 5 ;i<=10;i++){
        c[i] = b[k++];
    }
     printf("mang c ghep' boi mang a va b la : \n");
    for(int i=0;i<10;i++){
        printf("%d    ",c[i]);

    }
    return 0;

}
