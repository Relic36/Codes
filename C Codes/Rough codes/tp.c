#include <stdio.h>
#include <stdlib.h>
int main() {
   
   char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Your name is %s", str);
    return 0;
}
