#include <stdio.h>
#include "fifty.h"
#include <math.h>

int main() {
    mystrstr("Ola mundo cruel!","mundo");
    strnoV("aaaaaaaaaaaaaaa");
//    truncW("a   bb    ccc  ddddd",0);
    putchar('\n');
    printf("%c\n",charMaisfreq("bladawjodjwaod wadjow ajd"));
    printf("%d\n",iguaisConsecutivos("Ollllaaaaaaa"));
    printf("%d\n",difConsecutivos("programacao immmmperativa"));
    printf("%d\n",contaPal("programacao immmmperativa"));
    printf("%d\n",contaVogais("aaaaaabbbbbcccdwe"));
    printf("----------------------------------------------------\n");
 //   printf("%d\n",remRep("aaaaaaaaaa"));
 //   limpaEspacos("     lol   ");
    int teste[10] = {0,1,5,9,10,5,6,9,8};
   // insere(teste,5,8);
    int t[20];
    int a[10] = {12,13,14,15,116,117,118,119,120,1};
    int b[10] = {1,1,1,1,1,1,1,1,1,1};
   // merge(t,a,b,10,10);
    int vetor[20] = {-1,12 ,-13, 14 ,-15, -16, -17, -18, -19, 110, 111, 112, 113, 114, 115 ,116 ,117 ,118 ,119, 12};
    retiraNeg(vetor,20);
    printf("----------------------------------------------------\n");
    int cresc[3] = {1,2,1};
    printf("%d\n",crescente(cresc,0,2));
    int teste2[20] = {1 ,12 ,13 ,14, 15 ,16 ,17, 18 ,19, 110  ,1  ,1 ,113 ,114 ,115  ,1 ,117 ,118 ,119, 1};
    printf("%d\n",elimRep(teste2,20));

    return 0;
}
//mundo cruel!!!
//programacao immmmperativa