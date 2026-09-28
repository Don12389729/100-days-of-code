#include <stdio.h>
int main(){char s[300],c;int i,n=0;fgets(s,sizeof(s),stdin);scanf(" %c",&c);for(i=0;s[i]&&s[i]!='\n';i++)if(s[i]==c)n++;printf("%d",n);return 0;}