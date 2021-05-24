//Viết chương trình nhập vào 1 mảng, thực hiện các thao tác thêm 1 phần tử vào mảng và xóa 1 phần tử khỏi mảng.
// khoi hàm khai bao
#include <stdio.h>

void nhap_mang(int a[], int n);
void xuat_mang(int a[],int n);
void them_phan_tu(int a[], int n,int x, int k);
void xoa_phan_tu(int a[], int n, int k);
// khoi ham main
int main(void) {
 // x là phần tử cần thêm, k là vị trí muốn thêm
 int n,x,k;
 
 printf("nhap n =");
 scanf("%d", &n);
 int a[n];
 nhap_mang(a,n);
 xuat_mang(a,n);
 printf("\n/////// THEM PHAN TU ///////\n");
 printf("\nnhap phan tu can them :");
 scanf("%d", &x);
 printf("\nnhap vi tri muon them :");
 scanf("%d", &k);
 them_phan_tu(a,n,x,k);
 printf("\nmang sau khi them : ");
 xuat_mang(a,n);
 printf("\n////// XOA PHAN TU ///////\n");
 printf("\nnhap vi tri muon xoa :");
 scanf("%d", &k);
 xoa_phan_tu(a,n,k);
 printf("\nmang sau khi xoa :");
 xuat_mang(a,n);
  return 0;
}
// khoi đinh nghia ham
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
void them_phan_tu(int a[], int &n, int x, int k){
   // nếu k <= 0 thêm vào đầu
    if ( k < 0){
        k = 0;
        }
  // nếu k >= n thêm vào cuối
    else if(k > n){
      k = n;  
      }  
  // dịch chuyển mảng để tạo ô trống trước khi chèn
    for(int i = n; i < k;i--){
      a[i]=a[i-1];
      }
  // thêm x tại vị trí k
      a[k]=x;
  //tăng số lượng phần tử sau khi thêm  
  ++n;
    }
void xoa_phan_tu(int a[], int n, int k){
  // mãng trống
  if(n<=0){
    return;
    }
  // nếu k <= 0 xoá phần đầu
  if(k < 0){
      k = 0;
      }
  // nếu k >= n xoá phần cuối
  else if( k >= n){
      k = n-1;
  }
  // dịch chuyển mảng
  for(int i = k; i <n -1; i++){
    a[i]= a[i+1];
  }
  //giảm số lượng phần tử sau khi xoá
  --n;
  }
