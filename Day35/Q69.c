#include <stdio.h>
#include <limits.h>
int main(){int a[100],n,i,first=INT_MIN,second=INT_MIN;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>first){second=first;first=a[i];}else if(a[i]>second&&a[i]!=first)second=a[i];}printf("%d",second);return 0;}