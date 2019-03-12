#include <zconf.h>
#include "fifty.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "ctype.h"
#include "stdio.h"
// 7
char *mystrcat (char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0'){
        i++;
    }
    int k = 0;
    while (s2[k] != '\0'){
        s1[i] = s2[k];
        k++;
        i++;
    }
    s1[i] = '\0';
    return s1;
}
// 8
char *mystrcpy (char *dest, char source[]){
    int i = 0 ;
    while (source[i] != '\0'){
        *(dest+i)= source[i];
        i++;
    }
    *(dest+i) = '\0';
    return dest;
}
// 9
int mystrcmp (char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0'){
        if (s1[i]>s2[i])
            return 1;
        else if (s1[i]<s2[i])
            return -1;
        else
            i++;
    }
    return 0;
}
// 10
char *mystrstr (char s1[], char s2[]) {
    int i = 0;
    int k = 0;
    int t = 0;
    int flag = 0;
    while (s1[i] != '\0' && flag == 0) {
        if (s2[k] == s1[i]) {
            t = i;

            while (s2[k] != '\0') {
                if (s2[k] == s1[i]) {
                    i++;
                    k++;
                } else {
                    k = 0;
                    break;
                }
            }
            if ((s2[k] == '\0') || (s2[k] == '\0' && s1[i] == '\0')) {
                flag = 1;
            }
        }
        else {
            i++;
            k=0;
        }

    }
    if ((flag == 0 && s1[i] == '\0' && s2[k] == '\0') || flag == 1) return &s1[t];
    else return NULL;

}
// 11
void strrev (char s[]){
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    i--;
    int k = 0;
    char t[i];
    while (i >= 0){
        t[k] = s[i];
        i--;
        k++;
    }
    i = 0;
    while (i<k){
        s[i] = t[i];
        i++;
    }
}

//12
void strnoV (char s[]){
    int i = 0;
    while (s[i]!='\0') i++;
    printf("%d\n",i);
    char p [10];
    i=0;
    int k = 0;
    while (s[i] != '\0'){
        if (toupper(s[i]) != 'A' && toupper(s[i]) != 'E' && toupper(s[i]) != 'I' && toupper(s[i]) != 'O' && toupper(s[i]) != 'U') {
            p[k] = s[i];
            i++;
            k++;
        }
        else {
            i++;
        }
    }
    i=0;
    p[k] = '\0';
 //   for (i=0;i<k;i++)
       //s[i] = p[i];
    printf("%s\n",p);
    printf("%ld\n",strlen(p));
    s = p;
    //s[0] = 'l';
    printf("%s",s);
}
//13
/*
void truncW(char t[], int n) {
    int i, j = 0, repetir = n,p;
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] == ' ') {
            repetir = n;
            t[j] = ' ';
            j++;
        }
        else {
            p = i;
            while (repetir > 0 && t[p] != ' ') {
                t[j] = t[p];
                p++;
                j++;
                if (t[p] != ' ') i++;
                repetir -= 1;
            }
        }
    }
    t[j] = '\0';
}
*/
//14
char charMaisfreq (char s[]) {
    int i,j,rep = 0,rep1 = 0;
    char c;
    for (i = 0; s[i] != '\0';i++) {
        rep1 = 0;
        for (j = 0; s[j] != '\0';j++)
            if (s[j] == s[i]) rep1++;

        if (rep1>rep) {
            rep = rep1;
            c = s[i];
        }
    }
    return c;
}
//15
int iguaisConsecutivos (char s[]) {
    int i = 0;
    int k = 0;
    int max = 0;
    char r;
    r = s[0];
    while (s[i] != '\0'){
        r = s[i];
        k=0;
        while (s[i] == r){
            k++;
            i++;
        }
        if (k>max) max = k;
    }
    return k;
}
//16
int diff (char s[],int i,int j){ //0 caso nao exista rep; 1 caso exista; verifica se existem letras iguas ao indice j para traz na lista
    int r =0;					 //Esta funçao vai ter como input um tipo de intervalo para testar se ha valores iguas nesse intervalo;
    for (; i<j && r == 0;i++)
        if (s[j] == s[i]) r = 1; //0 caso exista repetidos
    return r;  //1 caso n exista rep
}

int difConsecutivos (char s[]) { // Quando aparece uma letra igual, para de contar
    int i,j,r = 0,tmp = 0;
    for (i = 0;s[i] != '\0';i++) {
        tmp = 0;
        for (j = i;s[j] != '\0' && diff (s,i,j) == 0;j++) tmp++; // vai testar em varios intervalos i-j qual é o que tem maior numero de diferentes seguidos;
        if (tmp>r) r = tmp;
    }
    return r;
}

//17
int maiorPrefixo (char s1 [], char s2 []){
    int i=0,k=0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]){
        i++;
        k++;
    }
    return k;
}

//18
int maiorSufixo (char s1 [], char s2 []){
    int k = strlen(s1)-1;
    int i = strlen(s2)-1;
    int r = 0;
    for (;k >=0 && i>=0 && s1[k] == s2[i];k--){
        r++;
        i--;
    }
    return r;
}
//19
int sufPref (char s1[], char s2[]) {
    int i = 0;
    int k = 0;
    int r = 0;

    while (s1[i] != '\0' && s2[k] != '\0') {
        if (s1[i] == s2[k]) {
            i++;
            k++;
            r++;
        } else {
            k = 0;
            r = 0;
            i++;
        }
    }
    if (s2[k] == '\0' && s1[i] != '\0') r = 0;
    return r;
}
//20
int contaPal (char s[]) {
    int i = 0;
    int r = 0 ;
    while (s[i] != '\0'){
        if (s[i] != ' ' && s[i] != '\n'){
            r++;
            while (s[i] != ' ' && s[i] != '\0'){
                i++;
            }

        }
        else i++;
    }
    return r;
}
//21
int contaVogais (char s[]){
    int i = 0;
    int r = 0;
    while (s[i] != '\0'){
        if (toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U'){
            r++;
        }
        i++;
    }
    return r;
}
//22
int contida (char a[], char b[]) {
    int i = 0;
    int k = 0;
    while (a[i] != '\0') {
        if (b[k] == '\0') return  0;
        if (a[i] == b[k]) {
            i++;
            k = 0;
        } else k++;
    }

    return 1;
}
//23
int palindorome (char s[]){
    int i = 0;
    int flag = 1;
    int k = strlen(s)-1;
    while (s[i] != '\0' && flag == 1){
        if (s[i] == s[k]){
            i++;
            k--;
        }
        else flag = 0;
    }
    return flag;
}
//24
/*
int remRep (char x[]) {
    int i = 1;
    int l = 1;
    int k = 1;
    char c;
    if (x[0] != '\0') {
        c = x[0];
        while (x[i] != '\0') {
            if (x[i] != c) {
                c = x[i];
                x[l] = c;
                i++;
                l++;
                k++;
            }
            else i++;
        }
    } else k = 0;
    x[l] = '\0';
    printf("%s\n",x);
    return k;
}
int elem (char x[], char c, int n){
    int i = 0;
    int flag = 0;
    while (x[i] != '\0' && flag == 0){
        if (x[i] == c && i != n) flag = 1;
        else i++;
    }
    return flag;
}
 */
//3 7 10
//25
/*
int limpaEspacos (char s[]) {
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' && s[i + 1] == ' '); //Se tiver 2 espaços vazios seguidos, vai avancar na lista.
        else {
            s[j] = s[i];                // Caso contrario vai "recuar" a lista, ou seja, vai apagar os espaços até o haver 1, com recurso à var j.
            j++;
        }
    s[j] = '\0';
    return j;
}
 */
//26
/*
void insere (int v[], int N, int x) {
    int i ;
    int flag = 0;
    int k;
    for (i=0;i<N && flag == 0;i++){
        if (x > v[i]);
        else {
            for (k=N;k>i;k--){
                v[k] = v[k-1];
            }
            v[i] = x;
            flag = 1;
        }
    }
}
 */
//27
void merge (int r [], int a[], int b[], int na, int nb){
    int i = 0, k = 0 , h = 0;
    while (i<na || k < nb){
        if (a[i] <= b[k]) {
            r[h] = a[i];
            i++;
            h++;
        }
        else {
            r[h] = b[k];
            k++;
            h++;
        }
    }
    for (i=0;i<(na+nb);i++)
        printf("%d\n",r[i]);

}
int crescente (int a[], int i, int j){
    int k;
    int h = a[i];
    int r = 1;
    for (k = i;k<=j;k++){
        if (h > a[k]) r = 0;
        else h = a[k];
    }
    return r;
}
//29
int retiraNeg (int v[], int N) {
    int i;
    int h = 0;
    for (i=0;h<N;i++){
        if (v[i] < 0) {
            N--;
        } else {
            v[h] = v[i];
            h++;
        }
    }
    for (i=0;i<N;i++)
        printf("%d\n",v[i]);
    return N;
}
//30
int contaquantos (int v[], int N, int x){
    int i = 0;
    int contagem = 0;
    for (i=0;i<N;i++){
        if (v[i] == x) contagem++;
    }
    return contagem;
}
int menosFreq (int v[], int N) {
    int i;
    int k = 0;
    int mincontagem = contaquantos(v,N,v[0]);
    for (i = 1; i < N; i++) {
        if (mincontagem <= contaquantos(v,N,v[i]));
        else {
            mincontagem = contaquantos(v,N,v[i]);
            k = i;
        }
    }

    return v[k];
}
//31
int maisFreq (int v[], int N){
    int i;
    int k = 0;
    int maxcontagem = contaquantos(v,N,v[0]);
    for (i = 1; i < N; i++) {
        if (maxcontagem >= contaquantos(v,N,v[i]));
        else {
            maxcontagem = contaquantos(v,N,v[i]);
            k = i;
        }
    }

    return v[k];
}
//32
int maxCresc (int v[], int N) {
    int i;
    int k = 1;
    int h = 1;
    int comp = v[0];
    for (i=1;i<N;i++){
        if (comp <= v[i]){
            k++;
            comp = v[i];
            if (k>h) h=k;
        }
        else {
            comp = v[i];
            k = 1;
        }
    }
    return h;
}
//33
int elimRep (int v[], int n){
    int i;
    int j;
    int h=1;
    int flag = 0;
    for (i=1;i<n;i++){
        flag = 0;
        for (j=0;j<i && flag == 0;j++){
            if (v[i] == v[j]){
                flag = 1;
            }
        }
        if (flag == 0){
            v[h] = v[i];
            h++;
        }
    }
    return (h);
}
//34
int elimRepOrd (int v[], int n) {
    int i;
    int h = 1;
    int quantos = n;
    int comp = v[0];
    for (i=1;i<n;i++) {
        if (v[i] == comp) quantos--;
        else {
            v[h] = v[i];
            comp = v[i];
            h++;
        }
    }
    return quantos;
}
//35
int comunsOrd (int a[], int na, int b[], int nb){
    int i=0,k =0;
    int h = 0;
    while (i<na && k<nb){
        if (a[i] == b[k]){
            k++;
            h++;
            i++;
        }
        else if (a[i] > b[k]){
            k++;
        }
        else i++;
    }
    return h;
}
//36
int comuns (int a[], int na, int b[], int nb) {
    int i,k,h=0,flag = 0;
    int aux[na];
    for (i=0;i<na;i++){
        for (k=0;k<nb && flag == 0;k++){
            if (a[i] == b [k]){
                aux[h] = a[i];
                h++;
                flag=1;
            }
        }
        flag = 0;
    }
    return (h);
}

int elemC (int a[], int h, int x){
    int i = 0;
    for (i=0;i<=h;i++){
        if (a[i] == x) return 1;
    }
    return 0;
}
//37
int minInd (int v[], int n) {
    int i;
    int h = 0;
    int min = v[0];
    for (i=1;i<n;i++){
        if (v[i] < min){
            min = v[i];
            h = i;
        }
    }
    return h;
}
//38
void somasAc (int v[], int Ac [], int N) {
    int i =0;
    int soma = 0;
    for (i=0;i<N;i++){
        soma += v[i];
        Ac [i] = soma;
    }
}
//39
int triSup (int N, float m [N][N]){
    int i,k;
    int flag = 1;
    for (i=0;i<N && flag == 1;i++){
        for (k=0;k<N && k<i && flag == 1;k++){
            if (m[i][k] != 0) flag = 0;
        }
    }
    return flag;
}
//40
void transposta (int N, float m [N][N]) {
    int i,k;
    float aux[N][N];
    for (i=0;i<N;i++){
        for (k=0;k<N;k++){
            aux[k][i] = m[i][k];
        }
    }
    for (i=0;i<N;i++){
        for (k=0;k<N;k++){
            m[i][k] = aux[i][k];
        }
    }
}
//41
void addTo (int N, int M, int a [N][M], int b[N][M]){
    int i,k;
    for (i=0; i<N; i++){
        for (k=0; k<M;k++)
            a[i][k] += b[i][k];
    }
}
//42
int unionSet (int N, int v1[N], int v2[N], int r[N]) {
    int i;
    for (i=0;i<N;i++){
        if (v1[i] == 1 || v2[i] == 1) r[i] = 1;
        else r[i] = 0;
    }
    return 0;
}
//43
int intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i=0;i<N;i++){
        if (v1[i] == 1 && v2[i] == 1) r[i] = 1;
        else r[i] = 0;
    }
    return 0;
}
//44
int intersectMSet (int N, int v1[N], int v2[N], int r[N]) {
    int i;
    for (i=0;i<N;i++){
        if (v1[i] <= v2[i]) r[i] = v1[i];
        else r[i] = v2[i];
    }
    return 0;
}
//45
int unionMSet (int N, int v1[N], int v2[N], int r[N]) {
    int i;
    for (i=0;i<N;i++){
        if (v1[i] >= v2[i]) r[i] = v1[i];
        else r[i] = v2[i];
    }
    return 0;
}
//46
int cardinalMSet (int N, int v[N]) {
    int i,soma = 0;
    for (i=0;i<N;i++)
        soma+= v[i];
    return soma;
}
//47
Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    int i;
    for (i = 0;i<N;i++)
        switch (mov[i]) {
            case Norte:
                inicial.y += 1;
                break;
            case Sul:
                inicial.y -= 1;
                break;
            case Este:
                inicial.x += 1;
                break;
            case Oeste:
                inicial.x -=1;
                break;
        }
    return inicial;
}
//48
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i,r=0;
    int flag = -1;
    for (i=0;i<=N && flag == -1 ;i++){
        if (inicial.x > final.x){
            mov[i] = Oeste;
            inicial.x -= 1;
            r++;
        }
        else if (inicial.x < final.x){
            mov[i] = Este;
            inicial.x += 1;
            r++;
        }
        else if (inicial.y > final.y){
            mov[i] = Sul;
            inicial.y -= 1;
            r++;
        }
        else if (inicial.y < final.y){
            mov[i] = Norte ;
            inicial.y += 1;
            r++;
        } else flag = 1;
    }
    if (flag != 1 ) r = -1;
    return r;
}
//49
double distancia (Posicao posicao1) {
    double dist = sqrt(posicao1.x * posicao1.x + posicao1.y * posicao1.y);
    return dist;
}
int maisCentral (Posicao pos[], int N){
    int i;
    int index = 0;
    double dist = distancia(pos[0]);
    for (i=1;i<N;i++)
        if (distancia(pos[i]) < dist) {
            dist = distancia(pos[i]);
            index = i;
        }
    return index;
}
//50
int vizinhos (Posicao p, Posicao pos[], int N) {
    int i,k=0;
    for (i=0;i<N;i++) {
        if ((abs(p.x - pos[i].x) == 1 && p.y == pos[i].y) || (abs(p.y - pos[i].y) == 1 && p.x == pos[i].x)) k++;
    }
    return k;
}