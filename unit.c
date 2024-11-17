#include <stdio.h>
int main(){
     int a,b;
     printf("Enter a unit : ");
     scanf("%d",&a);
     if(a>400)
     b=(a-400)*5+950;
     else if(a>300)
     b=(a-300)*4+550;
     else if(a>200)
     b=(a-200)*3+250;
     else if(a>100)
     b=(a-100)*2+50;
     else if(a>50)
     b=(a-50)*1;
     else
     b=0;
     printf("%d",b);
}