// #include <stdio.h>

// int main(){
//      int a,b,c;
//      a=10;
//      b=20;
//      c=a>b?a:b;

//      printf("Gretest number is :%d",c);
// }

// ****************************************************

#include <stdio.h>

int main(){
     int a,b,c,d;
    printf("enter a three number: ");
    scanf("%d%d%d",&a,&b,&c);
     d=a>b&&a>c?:b>a&&b>c?b:c;

     printf("Gretest number is :%d",d);
}