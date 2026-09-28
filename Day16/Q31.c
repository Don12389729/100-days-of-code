#include <stdio.h>
int main(){int n,a[32],i=0;scanf("%d",&n);if(n==0){printf("0");return 0;}while(n){a[i++]=n%2;n/=2;}while(i)printf("%d",a[--i]);return 0;}