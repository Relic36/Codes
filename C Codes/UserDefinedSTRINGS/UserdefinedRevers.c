#include <stdio.h>
int reverse(char str[]){
    int start = 0;
    int end = 0;
    while (str[end] != '\0' && str[end] != '\n'){
        end++;
    }
    end--; 

    while (start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return 0;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}