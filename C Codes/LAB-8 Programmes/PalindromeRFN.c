#include <stdio.h>
int palindrome(int n, int rec){
    if (n==0)
        return rec;
    else{
        rec = rec*10 + n%10;
        return palindrome(n/10, rec);
    }
}
int main(){
    int n, rev=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    int rev_num = palindrome(n, rev);
    if (n == rev_num)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    return 0;
}