#include <stdio.h>
int main(){char s[300];int i,start=1;fgets(s,sizeof(s),stdin);for(i=0;s[i]&&s[i]!='\n';i++){if(start&&s[i]!=' '){printf("%c",s[i]);start=0;}if(s[i]==' ')start=1;}return 0;}