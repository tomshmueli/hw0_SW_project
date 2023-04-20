#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int inputCheck(char t)
{
    int x = scanf("%d");
    if (x == 1) {
        if (1<x<17)
        {
        return x;
        }
    } 
    if ( t == 's'){
        printf("Invalid source base!\n");
    }
    else{
        printf("Invalid target base!\n");
    }
    return NULL
}
    
    
    

int i = 0;
int sum = 0;
void reverse()
{
    char c;
    if ((c = getchar()) != '\n')
    {
        reverse();
        sum += (c - '0') * pow(2, i);
        i++;
    }
    return;
}
int main()
{
    int source;
    int target;
    printf("Enter the source base:\n");
    source = inputCheck('s');
    printf("Enter the target base:\n");
    target = inputCheck('t');
    printf("Enter a Binary number:\n");
    reverse();
    printf("The Decimal is: %d\n", sum);
    return 0;
}
