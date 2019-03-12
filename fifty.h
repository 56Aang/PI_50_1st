#ifndef INC_50QUESTOES_FIFTY_H
#define INC_50QUESTOES_FIFTY_H

#endif //INC_50QUESTOES_FIFTY_H
typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
} Posicao;
char *mystrcat (char s1[], char s2[]);
char *mystrcpy (char *dest, char source[]);
int mystrcmp (char s1[], char s2[]);
char *mystrstr (char s1[], char s2[]);
void strrev (char s[]);
void strnoV (char s[]);
void truncW (char t[], int n);
char charMaisfreq (char s[]) ;
int iguaisConsecutivos (char s[]) ;
int difConsecutivos (char s[]) ;
int maiorPrefixo (char s1 [], char s2 []);
int maiorSufixo (char s1 [], char s2 []);
int sufPref (char s1[], char s2[]) ;
int contaPal (char s[]);
int contaVogais (char s[]);
int contida (char a[], char b[]);
int palindorome (char s[]);
int elem (char x[], char c, int n);
int remRep (char x[]);
int limpaEspacos (char t[]);
void insere (int v[], int N, int x) ;
void merge (int r [], int a[], int b[], int na, int nb);
int retiraNeg (int v[], int N) ;
int menosFreq (int v[], int N) ;
int contaquantos (int v[], int N, int x);
int crescente (int a[], int i, int j);
int maisFreq (int v[], int N);
int maxCresc (int v[], int N);
int elimRep (int v[], int n);
int elimRepOrd (int v[], int n) ;
int comunsOrd (int a[], int na, int b[], int nb);
int comuns (int a[], int na, int b[], int nb) ;
int elemC (int a[], int h, int x);
int minInd (int v[], int n) ;
void somasAc (int v[], int Ac [], int N) ;
int triSup (int N, float m [N][N]);
void transposta (int N, float m [N][N]) ;
void addTo (int N, int M, int a [N][M], int b[N][M]);
int unionSet (int N, int v1[N], int v2[N], int r[N]) ;
int intersectSet (int N, int v1[N], int v2[N], int r[N]);
int unionMSet (int N, int v1[N], int v2[N], int r[N]);
int cardinalMSet (int N, int v[N]);
Posicao posFinal (Posicao inicial, Movimento mov[], int N);
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N);
int maisCentral (Posicao pos[], int N);
double distancia (Posicao posicao1);
int vizinhos (Posicao p, Posicao pos[], int N);