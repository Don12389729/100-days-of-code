#include <stdio.h>
int main(){int n,p=1,d,found=0;scanf("%d",&n);while(n){d=n%10;if(d%2){p*=d;found=1;}n/=10;}printf("%d",found?p:1);return 0;}