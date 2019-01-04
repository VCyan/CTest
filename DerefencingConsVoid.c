#include <stdio.h>
#include <stdlib.h>

// https://stackoverflow.com/questions/37240869/get-the-content-of-a-const-void

int main(){
    const void * data;
    int b = 5;
    data = &b;
    //printf("data %d %p ",&data,&data);
    
    printf(" data value = %d\n data address of b = %p\n data address (pointer address) = %p\n\n", *(const int *) data, data, &data);
    
    printf(" b value = %d\n b address = %p\n", b, &b);
    
    // So correct form is: 
    // printf("data %d %p\n", *(const int *) data, data);
}
