#include <stdio.h>
int main() {
    int a,b,hasil=1;
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++)
        hasil*=a;
    printf("%d",hasil);
}