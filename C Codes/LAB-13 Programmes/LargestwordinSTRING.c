#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    int i, maxLen = 0, currLen = 0, startIndex = 0, maxStartIndex = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currLen++;
        } 
        else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStartIndex = startIndex;
            }
            currLen = 0;
            startIndex = i + 1;
        }
    }
    printf("The largest word is: ");
    for (i = maxStartIndex; i < maxStartIndex + maxLen; i++) {
        putchar(str[i]);
    }

}