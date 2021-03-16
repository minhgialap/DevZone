#include<stdio.h>
#include<math.h>

int GT(int n){
    int p = 1;
    for(int i = 1;i<=n;i++){
        p*=i;
    }
    return p;
}

int ToHop(int n , int k){
    int X;

   X = GT(n)/(GT(k)*GT(n-k));

  return X;
}


int main(){
   int n,k;
   printf("nhap k : ");scanf("%d",&k);
   printf("\nnhap n : ");scanf("%d",&n);
   printf("\n%dC%d = %d  ",k,n, ToHop(n,k));
   return 0;
}
