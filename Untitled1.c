#include <stdio.h>

int main() {
    int a, b, sum;
    char c;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter + or *: ");
    scanf(c);
    printf("Enter your second number: ");
    scanf("%d", &b);
    
    if (c == "+"){
    	sum = a+b;
    }else if (c=="*"){
    	sum = a*b;}
	printf("%d\n",sum);
	
	
	
	
	
    return 0;
}
