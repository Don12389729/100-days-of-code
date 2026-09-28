#include <stdio.h>
int main(){char s[300];int i;fgets(s,sizeof(s),stdin);for(i=0;s[i];i++){if(s[i]==' ')s[i]='-';putchar(s[i]);}return 0;}