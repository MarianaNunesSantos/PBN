#include <stdio.h>

typedef struct 
{
    float p1,p2,trab;
    int faltas;
}Aluno;

void exibeAluno (Aluno a);
void exibeAlunoRef (const Aluno* a);

void exibeAluno (Aluno a){
    printf("Nota da P1 do aluno: %f\n",a.p1);
    printf("Nota da P2 do aluno: %f\n",a.p2);
    printf("Nota do Trabalho do aluno: %f\n",a.trab);
    printf("Número de faltas do aluno: %d\n",a.faltas);
}

void exibeAlunoRef (const Aluno* a){
    printf("Nota da P1 do aluno: %f\n",a->p1);
    printf("Nota da P2 do aluno: %f\n",a->p2);      
    printf("Nota do Trabalho do aluno: %f\n",a->trab);      // -> é o *
    printf("Número de faltas do aluno: %d\n",a->faltas);
}

int main(){
    Aluno a1, a2;
    a1.p1=8.5;
    a1.p2=7;
    a1.trab=8;
    a1.faltas=2;

    a2.p1=7.3;
    a2.p2=6.2;
    a2.trab=9.8;
    a2.faltas=3;

    exibeAluno(a1);
    printf("\n");
    exibeAlunoRef(&a2);
}
