//to find max vakue of an arrays//
#include <stdio.h>
#include <limits.h>

int getsum(int arr[] , int n){

int sum = 0;

for(int i = 0; i<n ; i++){

sum += arr[i];
}

return sum ;
}



int main(){
/*int arr[5] = {1,8,7,5,3};
int n = sizeof(arr)/sizeof(arr[0]);
int max = arr[0];

for(int i = 0;i<5 ; i++){
if(max < arr[i])
max =  arr[i];
}
printf("Array Elements: ");
for (int i = 0; i<n ;i++){
printf("%d\n", arr[i]);
}
printf("\n");

printf("The maximum value of the array is: %d" , res);*/

int arr[] = {2,12,16};
int n = sizeof(arr)/sizeof(arr[0]);
 int res = getsum(arr , n);

printf("the sum of array is : %d",res);
return 0;
}


