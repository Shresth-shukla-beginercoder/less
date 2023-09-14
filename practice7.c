#include <stdio.h>

int main()
{/*
initializing an array for character ,x and a pointer for an array */

    char alph[27];
    int x;
    char *ptr;
 	printf("\n\n Pointer : Print all the alphabets:\n"); 
	printf("----------------------------------------\n");
    /* point the pointer with first element of alphabet list*/
    ptr = alph;     
/*
create a for loop with a maximum number of loop equivalent to the maximum letter in a alphabet*/
    for(x=0;x<26;x++)
    {// fill each array elements with a letter from the alphabet

        *ptr=x+'A';
        // point the next memory
        ptr++;
    }
    //  point the pointer iwth first element of alphabet list
    ptr = alph;
// display all the letter
printf(" The Alphabets are : \n");
    for(x=0;x<26;x++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return(0);
}
