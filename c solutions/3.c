#include<stdio.h>
int main(){
    //Leap Year Checker: Determine if a given year is a leap year.

    int year;
    int leap_year = 0;
    printf("Enter a year to check: ");
    scanf("%d",&year);
    if (year%400 == 0){
        leap_year = 1;
    }
    else if(year%100 == 0){
        leap_year = 0;
    }
    else if(year%4 == 0){
        leap_year = 1;
    }
    else{
        leap_year = 0;
    }
    printf("%d is %s\n",year,(leap_year==1?"Leap year":"Not leap year"));
}
