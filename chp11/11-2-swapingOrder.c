#include <stdio.h>

int main(void) {
    char voca[100];
    int len=0;
    char temp;
    scanf("%s", voca);
    while(voca[len] != 0)
        len++;
    for(int i=0; i<len/2; i++) {
        temp = voca[i];
        voca[i] = voca[len-i-1];
        voca[len-i-1] = temp;
    }
    
    printf("%s", voca);
    
    printf("\n");
    return  0;
}
