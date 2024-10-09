#include <stdio.h>
#include <locale.h>

int fibonacci(int);

int main (void){
    int entradas[]={1,35,11,21,144};

    for(int i=0;i<5;i++){
        if(fibonacci(entradas[i])){
            printf("O número %d pertence a sequência de Fibonacci\n",entradas[i]);
        }else{
            printf("O número %d não pertence a sequência de Fibonacci\n",entradas[i]);
        }
    }
    return 0;
}

int fibonacci(int num){
    int a,b,c;
    a=0;
    b=1;
    c=0;
    while(num>=c){
        c=a+b;
        a=b;
        b=c;
        if(num==c){
            return 1;
        }   
    }
    return 0;
}