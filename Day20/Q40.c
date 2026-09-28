#include <stdio.h>
int main(){char c;while(scanf("%c",&c)==1&&c!='\n')if(c=='0')putchar('1');else if(c=='1')putchar('0');return 0;}