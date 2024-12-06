//Under working with it to make it more complexly better.
//Doesn't work...'
#include <stdio.h>
//int math(int x, int y, int z);
int main(){
    //Simple Calculator: Perform addition, subtraction, multiplication, and division.
    int x,y,z,i;
    x = 0;
    char sym[x];
    char arr[x];
    printf("Enter the number with the arithmetic symbol you want to execute.");
    for(i=0;i<x;i++){
    printf(">");
    scanf("%c",&arr[x]);
    if(arr[x] == "exit"){
    break;
    }
    else{
    printf(">");
    scanf("%c",&sym[x]);
    x += 1;
    }
    }
    for (i=0;i<x;i++){
    printf("%d\t",arr[x]);
    printf("%c", sym[x]);
    }
}

//int math(int x,int y,int z){}
