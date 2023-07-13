
#include <stdio.h>
#include <math.h>
 int main(){
    int n , a, digit=0, sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    while(a){
      digit++;
      a=a/10;
    }
    printf("Digits are : %d\n",digit);
    a=n;
    while(a){
      sum=sum + pow(a%10, digit);
      a=a/10;
    }
    if(sum==n)
    printf("Armstrong number");
    else
    printf("Not an armstrong number");
    return 0;
 }
