#include <stdio.h>
int main(){
    char s[300];
    int i=0,start=1,spaces=0,lastSpace=0;
    fgets(s,sizeof(s),stdin);
    while(s[i]&&s[i]!='\n') i++;
    int end=i;
    i=0;
    while(i<end){
        if(s[i]!=' '&&start){
            if(i>0) printf("%c. ",s[i]);
            else printf("%c. ",s[i]);
            start=0;
        }
        if(s[i]==' '){start=1; lastSpace=i;}
        i++;
    }
    i=lastSpace+1;
    while(i<end){putchar(s[i]);i++;}
    return 0;
}