#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int attempts,guess,n;
// generate number between 1 TO 100
srand(time(0));
n=rand()%100+1;
printf("Guess the number between 1 and 100:\n");

while(guess!=n){
printf("Enter ur guess:\n");
scanf("%d",&guess);
attempts++;
if(guess>n){
printf("Too high\n");
}
else if(guess<n){
printf("Too low\n");
}
else{
printf("The guessed number is correct\n");
}
}
printf("The number of attempts is %d",attempts);
return 0;
}
