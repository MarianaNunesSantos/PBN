#include <stdio.h>

        void func1()
        {
            int vet[] = { 4, 9, 12 };
            int i, *ptr;
            ptr = vet;                          //int c = a++ posincremento
            for(i =0; i<3; i++)                 //int c = ++a preincremento
                printf("%d ", *ptr++);          //n misturar operadores
        }

        void func2()
        {
            int vet[] = { 4, 9, 12 };
            int i, *ptr;
            ptr = vet;
            for(i =0; i<3; i++)
                printf("%d ", (*ptr)++);
        }
        
int main(){
    //func1();
    //func2();
    int a =1;
    a = a++ + ++a; 
    printf("%d", a);
}