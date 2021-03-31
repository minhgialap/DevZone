#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>


void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}
void TimViTri(int a[] , int n, int GiaTri){
     for(int i=0 ; i<n ;i++){
        if(a[i] == GiaTri ){
            printf("\nvi tri cua phan tu %d la : %d",GiaTri,i+1);
        }
     }
}
void ThemPhanTu(int a[],int *n,int GiaTri){
     for(int i=0 ; i<= (*n) ;i++){
            if( i == (*n)){
                a[(*n)] = GiaTri;
            }
     }
     ++(*n);
}

void xoaPhanTu(int a[], int *n,int VT)
{

    printf("\nvi tri phan tu muon xoa: ");
    scanf("%d", &VT);
    for(int i=VT; i<(*n); i++){
        a[i] = a[i+1];
    }
    --(*n);
}

void ChenPhanTu(int a[], int *n, int GiaTri, int VT){

       for(int i = (*n); i > VT; i--){
                a[i] = a[i-1];
          }
          a[VT] = GiaTri;

         ++(*n);
}



void menu(){
   printf("\t 1. Nhap Mang.\n");
   printf("\t 2. Them Phan Tu vao trong mang.\n");
   printf("\t 3. Chen phan tu vao vi tri bat ki.\n");
   printf("\t 4. Xoa phan tu trong mang.\n");
   printf("\t 5. Tim vi tri cua phan tu.\n");
   printf("\t 6. Thoat .... !! ");
   printf("\n-----------------------------------------------------------------");
}

int main(){
    int a[100];
    int n,GiaTri,VT,c;

    while(1){
        menu();
        printf("\nVui long chon chuc nang : ");
        scanf("%d",&c);
        switch(c){
         case 1 :
            system("cls");
            
            printf("\tBAN DA CHON NHAP MANG !!\n");
            printf("nhap size cho mang : ");
            scanf("%d",&n);
            NhapMang(a,n);
            break;
         case 2 :
             system("cls");
             
             printf("\tBAN DA CHON THEM PHAN TU CHO MANG !!\n");
             printf("nhap gia tri can them : ");
             scanf("%d",&GiaTri);
             ThemPhanTu(a,&n,GiaTri);
             printf("\n Mang moi la : ");
             XuatMang(a,n);
             break;
         case 3 :
             system("cls");

             printf("\tBAN DA CHON CHEN THEM 1 PHAN TU VAO MANG !!\n");
             printf("Mang Ban dau la : \n");

             XuatMang(a,n);
             printf("\nnhap vi tri can them :  ");
                scanf("%d",&VT);
             printf("\nnhap gia tri can them : ");
                scanf("%d",&GiaTri);

             ChenPhanTu(a,&n,GiaTri,VT);

             printf("\n Mang moi la : ");
             XuatMang(a,n);
             break;
         case 4:
             system("cls");
             
             printf("\t--- BAN DA CHON XOA 1 PHAN TU !! ---\n");
             printf("mang ban dau la : ");
             XuatMang(a,n);
             xoaPhanTu(a,&n,VT);
             printf("\nmang sau khi xoa la : ");
             XuatMang(a,n);
             break;
         case 5 :
            system("cls");
            
            printf("\t--- BAN DA CHON TIM KIEM VI TRI CUA 1 PHAN TU !! ---\n");
            printf("nhap phan tu can tim : ");
            scanf("%d",&GiaTri);
            TimViTri(a,n,GiaTri);
            printf("\n");
            printf("\t--MANG BAN DAU --\n");
            XuatMang(a,n);
            break;
         case 6:
            printf("\t-- BAN DA CHON THOAT !!--");
            exit(0);
         default :
            printf("\n nhap cac so tu 1 den 6 ! plzzz ");
            break;
        }
        printf("\n\tBam phim bat ky de ve menu\n");
        getch();
        system("cls");
    }

return 0;
}
