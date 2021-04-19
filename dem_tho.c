#include <stdio.h>
int capvit(int n){
  if (n<=1)
  return 1;
  else 
  return capvit(n-1)+capvit(n-2);
}
int main(void) {
  int n;
  printf("nhap so thang \n");
  scanf("%d",&n);
int dem =capvit(n);
printf("sau %d tháng có %d cap vit",n,dem);
  return 0;
}
