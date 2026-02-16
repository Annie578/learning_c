//sample questions//
#include <stdio.h>

int main(){
/*char n;
scanf("%c",&n);
 switch(n){
 case 'A':
  printf("this is a boeing 737");
   break;
 case 'B':
  printf("this is an airbus a320");
   break;
 default :
  printf("this is a bombardier");
   break;
}*/
 
//flight hours calculator//
int f = 100000;
int hrs;
printf("Enter the number of flight hours:");
scanf("%d",&hrs);
while(hrs>0){
    int g = f-f/hrs;
    
    
    if(g<=88000)
    printf("fuel safety limit reached\n");
    printf("fuel consumed:%d\n",g);
    break;
    
}

//


return 0;
}

