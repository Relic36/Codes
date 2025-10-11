# include <stdio.h>

int raisedtopower(int base, int exp){
    if(exp==0)
        return 1;
    else
        return base * raisedtopower(base, exp-1);
}

int main(){
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);
    printf("%d raised to the power %d is: %d\n", b, e, raisedtopower(b, e));
    return 0;
}