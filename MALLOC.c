# include<stdio.h>
# include<stdlib.h>

int main (){
int *ptr;

ptr = (int*) malloc(5*sizeof(int));// memory allocation 

ptr[0] = 3;
ptr[1] = 6;
   ptr[2] = 7;
ptr[3] = 2;
ptr[4] = 1;
for(int i =0 ; i < 5; i++)
{
    printf("%d\n", ptr[i]);
}
    return 0 ;
}



    