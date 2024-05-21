#include <stdio.h>


void fibunacci(){
    int n = 10;
    int prev = 0, next = 1, current=1;
    printf("Fibonacci-Folge bis zum %d. Schritt:\n", n);
    printf("%d, %d, ", prev, current);
    for (int i = 3; i <= n; i++) {
        next = prev + current;
        printf("%d, ", next);
        prev = current;
        current = next;
    }


}
int fibunacciRek(int n, int prev, int next, int current){
        next = prev + current;
        printf("%d, ", next);
        prev = current;
        current = next;
        n--;
        if(n==0)return 0;
        fibunacciRek(n, prev, next, current);

}

int main() {
    fibunacci();
    int n = 10;
    int prev = 0, next = 1, current=1;
    printf("\nFibonacci-Folge bis zum %d. Schritt:\n", n);
    printf("%d, %d, ", prev, current);
    fibunacciRek(n, prev, next, current);
    return 0;
}
