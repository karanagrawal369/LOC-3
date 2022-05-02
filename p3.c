//oddeven
#include <stdio.h>

int oddeve(int);

//create function
int oddeve(int num){
if(num%2==0){
    printf("\n%d is an even number",num);
}
else{
    printf("\n%d is an odd number",num);
}
}
int main()
{
    int num;
    printf("Enter a number to check odd or even\n");
    scanf("%d",&num);
    oddeve(num);
    getch();
    return 0;
}