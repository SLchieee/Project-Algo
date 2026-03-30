#include <stdio.h>
int main(){
    char str[100];
    int i=0;
    scanf("%s",str);
    while(str[i]!='\0') i++;
    for(int j=i-1;j>=0;j--)
        printf("%c",str[j]);
}