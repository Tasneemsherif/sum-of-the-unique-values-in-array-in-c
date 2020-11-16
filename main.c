#include <stdio.h>
#include <stdlib.h>
int sum(int arr[])
{
    int sum = 0,i;
    for(i = 0 ;i <= 19 ;i++ ){
        sum = sum + arr[i] ;
    }
    return sum;
}

int main()
{
    int arr[20]= {},i,k,o,n,num;

    printf("enter 20 value :\n");

    for(i = 0 ;i <= 19 ;i++ ) {
        o = 0;
        scanf("%d",&num);

        for(k = 0 ; k < i; k++){
            if (num == arr[k]){
                o = 1;
            }
        }
        if (o == 1){
            continue;
        }
         arr[i] = num;
    }
    printf("the unique values are: ");
    for(i = 0 ;i <= 19 ;i++ ){
        n = 0;
        for(k = 0 ; k < i; k++){
            if (arr[i] == arr[k]){
                n = 1;
            }
        }
        if (n == 1){
            continue;
        }
        printf("%d ",arr[i]);
    }
    printf("\n the sum of the values is : ");
    printf("%d ", sum(arr));
    return 0;
}
