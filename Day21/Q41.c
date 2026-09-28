#include <stdio.h>
int main(){int n,x,f,l,p=1;scanf("%d",&n);x=n;l=x%10;while(x>=10){x/=10;p*=10;}f=x;n=n-f*p-l+l*p+f;printf("%d",n);return 0;}