//sample questions//

#include <stdio.h>

/*float calculatefuel(float distance){
float fuelburnrate=36.5;  
float result = distance*fuelburnrate;
return result;

}*/
/*calculate even odd number*/ 
int evenodd(n){

for(int n=1; n<=10; n++){
if(n%2 == 0){
  return 0;
}
else{
  return 1;
}
}
}

  


int main(){

/*//multiplication table//
int a,b;
//take the value of a from the user//
printf("enter a number:");
scanf("%d",&a);
   for(b = 1;b<=10;b++){
       printf("a x b = %d\n",a*b);//print the table//
}

//star ladder//
int i,j;
for(i = 1 ;i<=5; i++){
   for (j = 1;j<=i; j++){
       printf("*");
}
   printf("\n");
}

//prime number//
int k;
int p = 1;
printf("enter a number:");
scanf("%d",&k);
if(k <= 1 ){
printf("not a prime number\n");
}
  
for(p = 2;p < k; p++){
  if( k % p == 0){
    
     break;
    }
  if(p == k){
printf("prime number detected");
    }
   else{
  printf("not a prime number");
   }
     return 0;
    }*/
//calculate the amount of fuel required//
/*float distance;

for(int x = 1; x<4;x++){
printf("enter the distance travelled :");
scanf("%f",&distance);
float fuelconsumed = calculatefuel(distance);

printf("fuel consumed:%f\n",fuelconsumed);
 
}*/
 int n;
int check = evenodd(n);
printf("even/odd numbers:%d",check);


return 0;
}

