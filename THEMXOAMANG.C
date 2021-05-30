#include <stdio.h>

void nhap_mang(int a[], int n);
void xuat_mang(int a[],int n);
void them_phan_tu(int a[], int n,int x, int k);
void xoa_phan_tu(int a[], int n, int k);

int main(void) {

 int n,x,k;
 
 printf("nhap n =");
 scanf("%d", &n);
 int  a[n];
 nhap_mang(a,n);
 xuat_mang(a,n);

 printf("\n nhap phan tu can them :");
 scanf("%d", &x);
 printf("\n nhap vi tri muon them :");
 scanf("%d", &k);
 them_phan_tu(a,n,x,k);
 printf("\n mang sau khi them : ");
 xuat_mang(a,n);
 printf("\n nhap vi tri muon xoa :");
 scanf("%d", &k);
 xoa_phan_tu(a,n,k);
 printf("\n mang sau khi xoa :");
 xuat_mang(a,n);
  return 0;
}

void nhap_mang(int a[], int n){

  for( int i = 0; i < n; i++){
     printf(" phan tu a[%d]",i);
     scanf("%d", &a[i]);
  }
  }
void xuat_mang(int a[], int n){
   for(int i = 0; i < n; i++){
     printf("%d\t", a[i]);
     }
  }  
void them_phan_tu(int a[], int n, int x, int k){

    if ( k < 0){
        k = 0;
        }
  
    else if(k > n){
      k = n;  
      }  
  
    for(int i = n; i < k;i--){
      a[i]=a[i-1];
      }
 
      a[k]=x;
    
  ++n;
    }
void xoa_phan_tu(int a[], int n, int k){
  
  if(n<=0){
    return;
    }
  
  if(k < 0){
      k = 0;
      }
  else if( k >= n){
      k = n-1;
  }

  for(int i = k; i <n -1; i++){
    a[i]= a[i+1];
  }
  
  --n;
  }
