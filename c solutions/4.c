#include <stdio.h>
int rec(int n){
    if (n <= 1){
        return 1;

    }
        else{
            return n * rec(n-1);
    }
}
int main(){
//Factorial of a Number: Calculate the factorial using a loop.
    int fact = 1;
    int i;
    int x;
    printf("Enter the number to find the factorial for: ");
    scanf("%d",&x);
    for (i=x;i>1;i--){
        fact *= i;
    }
    printf("Factorial of %d = %d\n", x , fact);
    int result = rec(x);
    printf("Fact = %d\n", result);
}
