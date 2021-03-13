#include <stdio.h>

int main()
{
    int a[50];
    int n;
    printf("nhap so phan tu cho mang : ");scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("[%d]:  ",i);
        scanf("%d",&a[i]);
    }

    printf("\nday dao nguoc : ");
    for(int i = n; i>0;i--){
        printf("  %d  ",a[i]);
    }
    return 0;
}
