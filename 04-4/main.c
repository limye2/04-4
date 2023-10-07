//
//  main.c
//  04-4
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    
    printf("input a year :");
    scanf("%i", &a);
    
    if ((a%4==0 && a%100!=0)||(a%400==0))
    {
        printf("is the year %d the leap year? : 1 \n", a);
    }
    else
    {
        printf("is the year %d the leat year? : 0 \n", a);
    }
    
    return 0;
}
