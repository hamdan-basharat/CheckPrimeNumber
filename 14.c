#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k=0, n;
    do{
        printf("Please enter a positive integer (other than 1): ");
        scanf("%d", &n);
    }while(n<0 || n==1);
    for(i=2;i<n;++i){
        j=n%i;
        if(j==0){
            printf("This is not a prime number");
            k=1;
            break;
        }
        else continue;
    }
    if(k==0){
        printf("This is a prime number");
    }
    return 0;
}
