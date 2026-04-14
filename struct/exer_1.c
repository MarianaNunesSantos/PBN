//criar duas funçaoe
//adiciona e multiplica, onde recebe duas funçoes e retorna na primeira

#include <stdio.h>

typedef struct {
    float N, D;
}Fracao;

Fracao multiplica (Fracao* f1, Fracao* f2);
Fracao multiplica (Fracao* f1, Fracao* f2){
    f1->N = f1->N * f2->N;
    f1->D = f1->D * f2->D;
    return *f1;
}

Fracao adiciona (Fracao* f1, Fracao* f2);
Fracao adiciona (Fracao* f1, Fracao* f2){
    float deno = f1->D * f2->D;
    f1->N = ((deno/f1->D) * f1->N) +  ((deno/f2->D) * f2->N);
    f1->D = deno;
    return *f1;
}

int main(){
    Fracao f1, f2;
    f1.N = 2;
    f1.D = 4;
    f2.N = 8;
    f2.D = 5;

}

