#include <stdio.h>
#include <conio.h>

int main(){
for(int i = 1;i<=5;i++){
for(int j = 1;j<=i;j++){
printf("%c",'*');
}
printf("\n");
}

for(int i = 5;i>=1;i--){
for(int j = 1;j<=i;j++){
printf("%c",'*');
}
printf("\n");
}

for(int i = 1;i<=5;i++){
for(int j = i;j>=1;j--){
printf("%d",i);
}
printf("\n");
}

for(int i = 1;i<=5;i++){
for(int s = 1; s<=5-i;s++){
printf(" ");
}
for(int j = 2*i-1;j>=1;j--){
printf("%d",i);
}
printf("\n");
}

return 0;
}