#include <stdio.h>

void aufUndAb(int c){
    int i = c;
    for (i; i > 0; i--){
        printf("%d ", i);
    }
    for (i; i <= c; i++){
        printf("%d ", i);
    }
    printf("\n");
}

void rekAufUndAb(int c){
    if(c==0){
        printf("%d ", c);
        return;
    }
    printf("%d ", c);
    rekAufUndAb(c - 1);
    printf("%d ", c);
}


int main() {
    aufUndAb(3);
    rekAufUndAb(3);
    return 0;
}
