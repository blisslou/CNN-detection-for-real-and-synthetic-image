#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int size;
    int* ptr;
}ar;

int main(){
    
    ar *a=(ar*)malloc(5*sizeof(int));

a->size=5;


for (int i = 0; i < a->size; i++)
{
    scanf("%d",(a->ptr)+i);
}

for (int i = 0; i < a->size; i++)
{
    printf("%d",*(a->ptr)+4*i);
}

}