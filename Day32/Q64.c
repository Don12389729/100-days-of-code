#include <stdio.h>
int main(){long long n;int c[10]={0},i,b=0;scanf("%lld",&n);if(n<0)n=-n;if(n==0)c[0]++;while(n){c[n%10]++;n/=10;}for(i=1;i<10;i++)if(c[i]>c[b])b=i;printf("%d",b);return 0;}