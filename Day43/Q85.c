#include <stdio.h>
int main(){char s[300];int i,n=0;fgets(s,sizeof(s),stdin);while(s[n]&&s[n]!='\n')n++;for(i=n-1;i>=0;i--)putchar(s[i]);return 0;}