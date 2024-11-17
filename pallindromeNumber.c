#include <stdio.h>
int main(){
     int n,b,sum=0,t;
     for(n=1; n<=100; n++){
          t=n;
          while(t>0){
          b=t%10;
          sum=(sum*10)+b;
          t=t/10;
           }
           if(t==sum)
           printf("%d\t",sum);
           sum=0; 
}

}

//   ***************************************************************


// #include <stdio.h>
// int main(){
//      int a,b,sum=0,temp;
//      printf("enter a number : ");
//      scanf("%d",&a);
//      temp=a;
//      while(a>0){
//      b=a%10;
//      sum=sum*10+b;
//      a=a/10;
//      }
//      if(temp==sum)
//      printf("number is pallindrom");
//      else
//      printf("not a pallindrom"); 
// }