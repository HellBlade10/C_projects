#include<stdio.h>
int main(){
    //Even or Odd: Check if a number is even or odd.
    int x;
    int odd = 0;
    int even = 0;
    //Logic for odd or even

    printf("Enter number to check: ");
    scanf("%d",&x);
        if(x%2 == 0){
    even += 1;
    }
    else{
        odd +=1 ;
    }
    printf("%d is %s",x, (x%2 == 0?"even num":"odd num"));
    return 0;
}
