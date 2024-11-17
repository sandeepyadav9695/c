// #include <stdio.h>
// int main()
// {
//      int a,i,f=0;
//      for(a=100; a<=500; a++){
//           for(i=1; i<=a; i++)
//           if(a%i==0)
//           f=f+1;
//           if(f==2)
//                printf("%d\t",a);
//                f=0;
      
// }
// }


// *********************************

#include <stdio.h>
int main(){
     int i,j;
     for(i=100; i<=500; i++){
          for(j=2; j<=i; j++){
               if(i%j==0)
               break;
          }
          if(i==j){
               printf("%d ",j);
          }
     }
}