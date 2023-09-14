# include<stdio.h>
# include<stdlib.h>

int main(){
int *ptr;

ptr = (int *)calloc(5,sizeof(int ));
printf("enter (5) number :");
for(int i = 0; i < 5; i++){
    
    scanf("%d", &ptr[i]);
}

// print 
for(int i = 0; i < 5; i++){
   printf("number is %d:%d\n",i, ptr[i]);
}
    return 0 ;
}