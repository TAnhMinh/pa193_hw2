#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Static[5];
int sf(int* as, int* ah, char* s1, char* s2){
    Static[5] = 42;
    int stack[5];
    for (int i = 0; i <= 5; i++) stack [i] = 0;
    as[100] = 0;
    ah[100] = 0;
    char s[8];
    sprintf(s, "%s, %s", s1, s2);
    printf("Tu som\n");
    return 1;
}
int main(int argc, char * argv[]) {
    char pswd[] = "1997";
    printf(argv[1]);
    printf("\n");
    int as[5];
    int* ah = malloc(5*sizeof(int));
    char b1[20];
    char ur = 'n';
    gets(b1);
    if(!strcmp(pswd, b1)) {ur = 'a';}
    if(ur == 'a'){printf("Welcome!\n");}
    else{printf("Noob\n");}
    char buf[16];
    strcpy(buf, argv[1]);
    printf("%s\n",buf);
    for (unsigned char i = 5; i >= 0; i--) {printf("i is %d\n", i);
        if(i == 250){
            printf("TO!\n");
            break;
        }
    }
    FILE * f;
    f = fopen(argv, "w");
    system(argv[1]);
    sf(as, ah, b1, argv[1]);
    return 0;
}
