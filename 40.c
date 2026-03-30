#include <stdio.h>
int main(){
    int pilihan;
    printf("1. Halo\n2. Keluar\n");
    scanf("%d",&pilihan);
    if(pilihan==1)
        printf("Halo!");
    else
        printf("Bye");
}