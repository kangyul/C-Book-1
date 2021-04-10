#include <stdio.h>

int main(void) {
    char voca[100];
    int len=0;
    char ascii=0;
    int index=0;
    scanf("%s", voca);
    while(voca[len] != 0)
        len++;
    
    for (int i=0; i<len; i++) {
        if(voca[i] > ascii) {
            ascii = voca[i];
            index = i;
        }
    }
    
    printf("A character with the biggest ASCII value: %c", voca[index]);
    
    printf("\n");
    return  0;
}
