#include <stdio.h>
#include <time.h>

long long factorial_liter(int n) {
    if (n <= 1) return 1;
    else return n * factorial_liter(n - 1);
}

long long factorial_rec(int n) {
    int k;
    long long v = 1;
    for (k = n; k > 0; k--)
        v = v * k;
    return v;
}

int main(int argc, char* argv[]) {
    clock_t start, end;
    start = clock();
    long long result_liter = factorial_liter(20);
    end = clock();
    printf("Factorial Iterative Result: %lld\n", result_liter);
    printf("Time: %f seconds\n", (float)(end - start) / CLOCKS_PER_SEC);

    start = clock(); // 시간 측정을 위해 start 변수
    long long result_rec = factorial_rec(20);
    end = clock();
    printf("Factorial Recursive Result: %lld\n", result_rec);
    printf("Time: %f seconds\n", (float)(end - start) / CLOCKS_PER_SEC);

    return 0; // main 함수의 반환 값 추가
}