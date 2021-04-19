#include <stdio.h>
int gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(void) {
  int a,b;
  printf("nhap so a=\n");
  scanf("%d",&a);
   printf("nhap so b=\n");
  scanf("%d",&b);
  printf("%d",gcd(a,b));
 // printf("%d",ucln)
  return 0;
}
