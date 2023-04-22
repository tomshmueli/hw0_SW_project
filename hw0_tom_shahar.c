#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i = 0;
int sum = 0;

int inputCheck(char t)
{
    int x;
    scanf("%d", &x);
    if (x == 1) {   
        if (1<x && x<17)
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
    return 0;
}

void toTarget(int target)
{
    int divide = sum%target;
    if (divide<10)
    {
        printf("%d", divide);
    }
    else
    {
        char c = 97 + divide - 10;
        printf("%c", c);
    }
    sum = floor((float)sum/target);
}

void toDecimal(int source)
{
    char c;
    if ((c = getchar()) != '\n')
    {
        toDecimal(source);
        if ('a'<=c && c<='f')
        {
            sum += (c - 'a' + 10) * pow(source, i);
        }
        else{
            sum += (c - '0') * pow(source, i);
        }   
        i++;
    }
}

int main()
{
    int source;
    int target;
    printf("Enter the source base:\n");
    source = inputCheck('s');
    printf("Enter the target base:\n");
    target = inputCheck('t');
    printf("Enter a number in base %d:\n", source);
    toDecimal(source);
    printf("The number in base %d is:", target);
    toTarget(target);
    return 0;
}
