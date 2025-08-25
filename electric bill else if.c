#include <stdio.h>
int main (){
 int x , n,s,bill;
 printf("enter the unit:");
 scanf("%d",& n);
 if ( n<200)
{
  x= n*2 +50;
  s=((x*10)/100)+x;

}
else if (n>200 &&n<=300){
x=200*2+(n-200)*4 +50;
s=(( x*10)/100)+x;

}
else if (n>300&&n<=400){
    x=200*2+100*4+(n-300)*5+50;
    s=((x*10)/100)+x;

}
else {

    x=200*2+ 100*4+100*5+(n-400)*7+50;
    s=((x*10)/100)+x;

}
  printf("bill %d",s);
}
