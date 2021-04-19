#include <stdio.h>
int captho(int n){
  if (n<=1)
  return 1;
  else 
  return captho(n-1)+captho(n-2);
}
int main(void) {
  int n;
  printf("nhap so thang \n");
  scanf("%d",&n);
int dem =captho(n);
printf("sau %d tháng có %d cap tho",n,dem);
  return 0;
}
