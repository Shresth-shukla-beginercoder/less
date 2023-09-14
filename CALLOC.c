# include<stdio.h>
# include<stdlib.h>

int main (){
int n ;
printf("enter number :");

scanf("%d", &n);


int *ptr;

ptr = (int*) calloc(n,sizeof(int));// continues allocation  of '0'


for(int i =0 ; i < n; i++)
{
    printf("%d\n", ptr[i]);
}
    return 0 ;
}



    