#include <stdio.h>

void incArray(int v[]);

void incArray(int v[]) {
    int c;
    for(c=0; c<10; c++)
    v[c]++;
}

int main() {
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    incArray(data);

    //artmética de ponteiros
    char c[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    char *p = c;    // não precisa &, c já é um ponteiro

    printf("%c\n", *p);    // exibe o primeiro elemento do array
    printf("%c\n", p[0]);  // idem

    printf("%p\n", p);     // exibe o endereço do primeiro elemento
    printf("%p\n", c);     // idem
    printf("%p\n", &c[0]); // idem 


    
    int m[] = { 3, 2, 1, 4, 5, 6, 9, 8, 7, 10 };

    printf("%p\n", m);     // end. do primeiro elem., e.g. 0x7fff5fbfebf8
    printf("%p\n", &m[0]); // idem
    printf("%p\n", m+1);   // end. do segundo elem., e.g. 0x7fff5fbfebfc
    printf("%p\n", &m[1]); // idem
}