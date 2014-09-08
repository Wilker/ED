/* 
 * File:   main.c
 * Author: Wilker
 *
 * Created on 5 de Setembro de 2014, 21:43
 */

#include <stdio.h>
#include <stdlib.h>

//Exercicio 1
/*
int total_de_notas(int valor);
 
int main(int argc, char** argv) {
    printf("Insira a qnt grana...\n");
    int grana;
    scanf("%d", &grana);
    printf("Qnt nota -> %d\n", total_de_notas(grana));
}

int total_de_notas(int valor) {
    int cont = 0;
    int nota[] = {100, 50, 20, 10, 5, 2, 1};

    int i;
    for (i = 0; i < 7; i++) {
        if (valor >= nota[i]) {
            valor %= nota[i];
            cont++;
        }
    }
    return cont;
}*/


//Exercício 2
/*
double harmonico(int n);

int main(int argc, char** argv) {
    printf("Insira n");
    int n;
    scanf("%d", &n);
    double e = (double) n;
    double j = harmonico(e);
    printf("%f", j);
    system("pause");
    return (0);
}

double harmonico(int n) {
    if (n == 1) {
        return (double)1 / n;
    } else {
        return (double)1 / n + harmonico(n - 1);
    }
}

 */


//Exercicio3
/*
void imprime_binario(int n);

int main(int argc, char** argv){
    printf("Insira um inteiro");
    int n;
    scanf("%d",&n);
    imprime_binario(n);}

void imprime_binario(int n){
    if(n==1){
        printf("1");
    }
    if(n>1){
        imprime_binario(n/2);
        printf("%d!!",n%2);
    }
}*/


//Exercicio 4
/*
int mdc(int a, int b);
void troca(int *a,int *b);
 
int main(int argc, char** argv) {
    printf("Insira dois números");
    int m=0,n=0;
    scanf("%d%d",&m,&n);
    int md=0;
    md = mdc(m,n);
    printf("%d",md);
    system("pause");
    
    return (0);
}
int mdc(int a, int b){
    if(b>a){
        troca(&a,&b);
    }if(a%b==0){
        return b;
    }else{
     return(mdc(b,a%b));   
    }    
}
void troca(int *a,int *b){
    int temp = *b;
 *b=*a;
 *a= temp;
}
 */

//Exercício5
/*
//Ainda não implementado
int soma_pa(int x, int k);

int main(int argc, char** argv) {

    system("pause");
    return (0);
}
int soma_pa(int x, int k) {
    
    }*/


//Exercicio6
/*
int max_vet(int n, float *vet);

int main(int argc, char** argv) {
    float vet[]={5.3 , 999.9 , 0.1 , 99396.55 , 23.5};
    printf("%d\n",max_vet(5,vet));
    system("pause");
    return (0);
}

int max_vet(int n, float *vet) {
    if (n <= 0) return -1;
    int i, max = 0;
    float maior = 0.0;
    for (i = 0; i < n; i++) {
        if (vet[i] > maior) {
            max = i;
            maior = vet[i];
        }
    }
    return max;
}*/


//Exercício7    
/*
int teste_PA(int n, int *v);

int main(int argc, char** argv) {
    int x[] ={2,10,18,26,34};
    int t = teste_PA(5,x);
    printf("%d\n",t);
    system("pause");
    return (0);
}

int teste_PA(int n, int *v) {
    int i;
    int k;
    k = v[0] - v[1];
    for (i = 0; i < n - 1; i++) {
        if (v[i] - v[i + 1] != k)
            return 0;
    }
    return k*-1;
}*/


//Exercicio8
/*
int menor_valor_unico(float *valores, int n);
int unico(float *v, int n, float valor, int pos);

int main(int argc, char** argv) {

    float v[] = {2.3, 4.4, 9.0, 0.1, 2.5, 0.1, 1.93, 0.07, 0.7, 0.07, 2.2};
    int i;
    for (i = 0; i < 11; i++) {
        printf("%f\n", v[i]);
    }
    printf("\n**%d**\n", menor_valor_unico(v, 11));
    system("pause");
    return (0);
}

int menor_valor_unico(float *valores, int n) {
    int i = 0;
    int m = 0;
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if ((valores[i] <= valores[j]) && (valores[j] < valores[m]))
                if (unico(valores, n, valores[j],j))
                    m = j;
        }
    }
    return m;
}

int unico(float *v, int n, float valor, int pos) {
    int i;
    for (i = 0; i < n; i++) {
        if(i!=pos)
            if(v[i]==valor) 
                return 0;
    }
    return 1;
}*/


//Exercicio9
/*
int verifica(int *sub, int n, int *v, int m);
int subconjunto_ordenado(int *sub, int n, int *vet, int m);

int main(int argc, char** argv) {
    int a[] = {9, 34, 12, 7, 41, 52, 45, 27, 45, 13};
    int b[] = {34, 12, 7, 41, 52, 45};
    printf("%d\n", subconjunto_ordenado(b, 6, a, 10));
    system("pause");
    return (0);
}

int subconjunto_ordenado(int *sub, int n, int *vet, int m) {
    int i;
    for (i = 0; i < m - n; i++) {
        if (sub[0] == vet[i])
            if (verifica(sub, n, &vet[i], m - i))
                return 1;
    }
    return 0;
}

int verifica(int *sub, int n, int *v, int m) {
    int i;
    for (i = 0; i < n; i++) {
        if (sub[i] != v[i])
            return 0;
    }
    return 1;
}*/


//Exercicio10
/*
int ordenado(int *vet, int n);

int main(int argc, char** argv) {
    int v[]={1,2,3,4,5,6,7,8,9,10};
    int u[]={10,9,8,7,6,5,4,3,2,1};
    int x[]={1,2,3,4,11,6,7,8,9,10};
    printf("A ordem e -> %d\n", ordenado(v,10));
    printf("A ordem e -> %d\n", ordenado(u,10));
    printf("A ordem e -> %d\n", ordenado(x,10));
    system("pause");
    return (0);
}

int ordenado(int *vet, int n) {
    if (n <= 0)return 0;
    if (n == 1)return 1;
    else {
        int ordem = 0;
        if(vet[0]<vet[1])
            ordem = 1; // Está em Ordem Crescente
        else if (vet[0]>vet[1])
            ordem = -1; // Está em Ordem Decrescente
        int i;
        for (i = 0; i < n - 1; i++) {
            if (ordem == 1 && vet[i]<vet[i+1])
                continue;
            else if(ordem==1 && vet[i]>vet[i+1])
                return 0;
            if (ordem == -1 && vet[i]>vet[i+1])
                continue;
            else if(ordem== -1 && vet[i]<vet[i+1])
                return 0;
        }
    return ordem;
    }
}*/


//Exercicio11
/*
#include <math.h>
#define NRAIZ -99999.9
void raizes(float a, float b, float c, float * x1, float * x2);
int calcDet(int a, int b, int c);

int main(int argc, char** argv) {
    float a, b, c;
    a = 2.0;
    b = 10.0;
    c = 6.0;
    float r1,r2;
    raizes(a, b, c, &r1, &r2);
    printf("%f %f\n",r1,r2);
    system("pause");
    return (0);
}

void raizes(float a, float b, float c, float * x1, float * x2) {
    int det = calcDet(a, b, c);
    printf("det..%d\n", det);
    if (det < 0) *x1 = *x2 = NRAIZ;
    else
        if (det == 0) {
 *x1 = (float) ((b*-1) / (2 * a));
    } else {
 *x1 = (float) ((b*-1)-(sqrt(det))) / (2 * a);
 *x2 = (float) ((b*-1)+(sqrt(det))) / (2 * a);
    }
}

int calcDet(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}*/


//Exercicio12
/*
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
float med(float p1, float p2, float p3);

int main(int argc, char** argv) {
float a1, a2, a3;
    int aul,fal;
    float media = 0 ;
    printf("Insira a nota da p1: \n");
    scanf("%f", &a1);
    printf("Insira a nota da p2: \n");
    scanf("%f", &a2);
    printf("Insira a nota da p3: \n");
    scanf("%f", &a3);
    printf("Insira qnt de aulas \n");
    scanf("%d", &aul);
    printf("Insira a qnt de faltas\n");
    scanf("%d", &fal);
    char c = situacao(a1,a2,a3,fal,aul,&media);
    printf("A situacao deste aluno e -> %c e a media dele e  -> %f",c,media);
    system("pause");
    return (0);
}


char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media) {
    float m = med(p1, p2, p3);
 *media = m;
    int presencaPercent = ((aulas - faltas) * 100) / aulas;
    if (presencaPercent >= 75 && m >= (float)6.0) return 'A';
    else
        if (presencaPercent >= 75 && m < (float)6.0) return 'R';
    else
        if (presencaPercent < 75) return 'F';
}

float med(float p1, float p2, float p3) {
    return (p1 + p2 + p3) / 3;
}*/

//Exercicio13
/*
#define VBAN1 2.5
#define VBAN2 3.00
#define BAN 4.95
void calcula_corrida(float dist, float *b1, float *b2);

int main(int argc, char** argv) {
    float dist, v1, v2; 
    printf("Insira a distancia percorrida \n");
    scanf("%f",&dist);
    printf("A distancia e...%f \n",dist);
    calcula_corrida(dist, &v1, &v2);
    printf("O Valor a ser pago e %f na bandera 1 e %f na bandeira 2 \n",v1,v2);
    system("pause");
    return (0);
}

void calcula_corrida(float dist, float *b1, float *b2){
    float i = (float)dist*VBAN1+BAN;
    float j = (float)dist*VBAN2+BAN;
 *b1 = i;
 *b2 = j;
}*/

/* 
//Exercicio 14
// Falta testar...!!
int main(int argc, char** argv) {

   system("pause");
   return (0);
}

void movimento(float *s, float *v, float a, float t) {
 *s = (*s)+(*v)*t+((a*(t*t))/2);
 *v = (*v)+a*t;
}*/

/*
//Exercicio15
//Falta implementar a média desarmonica e testar!
float aritimetica(int n, float *v);
float harmonica(int n, float *v);
float desamonica(int n, float *v);

int main(int argc, char** argv) {

    system("pause");
    return (0);
}

void medias(int n, float* v, float* pA, float* pH, float* pD) {
 *pA = aritimetica(n, v);
 *pH = harmonica(n, v);
 *pD = desamonica(n, v);
}

float aritimetica(int n, float *v) {
    int i;
    float soma = 0;
    for (i = 0; i < n; i++) {
        soma += (float)v[i];
    }
    return (float) soma / n;
}

float harmonica(int n, float*v) {
    int i;
    float h = 0;
    for (i = 0; i < n; i++) {
        h = (float) h + (1 / v[i]);
    }
    return h;

}
float desamonica(int n, float *v){
    
}*/



//Exercicio16

// OBS: A Série de taylor para o seno está errada! Faltam o símbolo de + e
// no divisor o correto é (2n+1)! 
/*
#include <math.h>
float fat(float n);
float* taylor_sen(int n, float x);

int main(int argc, char** argv) {
    float *v = taylor_sen(4, 0.5236);
    int i;
    for (i = 0; i < 4; i++) {
        printf("%f\n", v[i]);
    }
    system("pause");
    return (0);
}

float* taylor_sen(int n, float x) {
    float *v = (float*) malloc(sizeof (float) *n);
    int i;
    for (i = 0; i < n; i++) {
        v[i] = (float)(pow(-1.0, i) / fat(2 * i + 1)) * pow(x, (2 * i + 1));
    }
    return v;
}

float fat(float n) {
    if ((n == 0) || (n == 1))return 1.0;
    else return (float)n * fat(n - 1);
}*/
 

//Exercicio17
/*
int* aprovados(int n, int *mat, float *notas, int *tam);

int main(int argc, char** argv) {
    int mat[] = {    100, 110, 209, 125, 359, 4165, 001, 78456, 123};
    float notas[] = {1.5, 5.0, 5.3, 4.9, 8.8, 9.9,  4.0, 1.99,  6.5};
    int tam = 9;
    int novo = 0;
    int *p = aprovados(9, mat, notas, &novo);
    int i;
    for (i = 0; i < novo; i++) {
        printf("%d \n", p[i]);
    }
    system("pause");
    return (0);
}

int* aprovados(int n, int *mat, float *notas, int *tam) {
    int i;
    int qnts = 0;
    for (i = 0; i < n; i++)
        if (notas[i] >= 5.0) qnts++;
    printf("Qnt aprovs. %d\n", qnts);
    int *ap = (int*) malloc(qnts * sizeof (int));
    int j = 0;
    for (i = 0; i < n; i++)
        if (notas[i] >= 5.0) ap[j++] = mat[i];
    *tam = qnts;
    return ap;
}*/


/*
//Exercicio18
float aritimetica(int n, float *v);
float* acima_da_media(int n, float *vet, int *tam);
 
int main(int argc, char** argv) {
    float v[] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int m = 9;
    int tam = 0;
    float *u= acima_da_media(m,v,&tam);

    int i;
    for (i = 0; i < tam; i++) {
        printf("%f\n",u[i]);
    }

    system("pause");
    return (0);
}

float* acima_da_media(int n, float *vet, int *tam) {
    int qnts = 0;
    float m = aritimetica(n, vet);
    printf("A MEDIA E...%f\n",m);
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i] > m)qnts++;
    }
    printf("Temos %d acima da media\n",qnts);
    float *v = (float*)malloc(n * sizeof(float));
    if (!v)return NULL;
    int j = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] > m) {
            v[j] = vet[i];
            j++;
            
        }
    }
 *tam=qnts;
    return v;
}

float aritimetica(int n, float *v) {
    int i;
    float soma = 0.0;
    for (i = 0; i < n; i++) {
        soma += (float)v[i];
    }
    return (float) soma / n;
}*/

/*
//Exercicio19
float* vet2(int n, float *vet1);

int main(int argc, char** argv) {
    float v1[] = {1.2, 1.2, 0.9, 1.5, 1.4, 1.5};
    float *v2 = vet2(6, v1);

    int i;
    for (i = 0; i < 4; i++) {
        printf("%f\n", v2[i]);
    }

    system("pause");
    return (0);
}

float* vet2(int n, float *vet1) {
    float *v = (float*) malloc((n - 2) * sizeof (float));
    int maior, menor;
    maior = 0;
    menor = 0;
    int i;
    for (i = 0; i < n; i++) {
        printf("=>%f laco %d \n",vet1[i],i);
        if (vet1[i] < vet1[menor]) {
            menor = i;
            printf("Agora o menor e %f na posicao %d \n", vet1[menor],i);
        }
        if (vet1[i] > vet1[maior]) {
            maior = i;
            printf("Agora o maior e %f na posicao %d \n", vet1[maior],i);
        }
    }
    int j = 0;
    for (i = 0; i < n; i++) {
        if (i != maior && i != menor)
            v[j++] = vet1[i];
    }
    return v;
}
 */


/*
//Exercicio20
//Falta testar
int *premiados(int n, int *inscr, float *t1, int p1,
        float *t2, int p2, int *tam);
float ponderada(float t1, int p1, float t2, int p2);

int main(int argc, char** argv) {

    system("pause");
    return (0);
}

int *premiados(int n, int *inscr, float *t1, int p1,
        float *t2, int p2, int *tam) {
    int qntMaiores = 0;
    float maiorMedia = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if (p > maiorMedia)
            maiorMedia = p;
    }
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if (p >= maiorMedia)
            qntMaiores++;
    }
    int *insc = (int*) malloc(qntMaiores * (sizeof (int)));
    int j = 0;
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if (p >= maiorMedia);
        insc[j++] = inscr[i];
    }
 *tam = qntMaiores;
    return insc;
}

float ponderada(float t1, int p1, float t2, int p2) {
    return (float) (t1 + t2) / (p1 + p2);
}*/