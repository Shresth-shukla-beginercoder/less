# include<stdio.h>
#include<stdlib.h>

int main(){
int n ;

printf("enter number:");
scanf("%d", &n);
int *ptr;
ptr = (int *)calloc(n,sizeof(int));
for(int i = 0 ; i<n; i++){
    printf("%d\n", ptr[i]);
}
// use the the pointer 
free(ptr);
int y;
printf("enter number :");
scanf("%d", &y);

ptr = (int *) calloc(y,sizeof(int));

for(int i =0; i < y; i++)
{
    printf("%d\n", ptr[i]);

}
 free(ptr);
    return 0 ;
}