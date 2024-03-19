#include <stdio.h>
#include <math.h>

int isPerfectSquare(int number) {
    int root = sqrt(number);
    return (root * root == number);
}

int countPerfectSquares(int n) {
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    
    printf("Cac so chinh phuong nho hon %d:\n", n);
    int count = countPerfectSquares(n);
    
    printf("\nTong cong co %d so chinh phuong nho hon %d.\n", count, n);
    
    return 0;
}