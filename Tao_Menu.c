#include<stdio.h>

void Menu(){
    printf("Nhap giao vien uu thich : ");
    printf("\n1. Maria Ozawa");
    printf("\n2. Yui Hanato");
    printf("\n3. Eimi Fukada");
    printf("\n4. Thoat");
}

int main(){
    int n;

    while(1){
    Menu();

    printf("\nLua chon : ");scanf("%d",&n);

    switch(n){
      case 1:
        printf("\nBan da chon Maria Ozawa\n");
        break;
      case 2:
        printf("\n Ban da chon Yui Hanato\n");
        break;
      case 3:
        printf("\n Ban da chon Eimi Fukada\n");
        break;
      case 4:
        printf("\n Ban da chon thoat\n");
        exit(0);
      default:
        printf("\n ban phai nhap tu 1 den 4\n\n");
   
        break;
     }

   }
  return 0;
}
