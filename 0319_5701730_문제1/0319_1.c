#include <stdio.h>
#include <time.h>

long long factorial_liter(int n) {//반복문을 사용하여 팩토리얼 계산하는 함수
    if (n <= 1) return 1;
    else return n * factorial_liter(n - 1);
}

long long factorial_rec(int n) {//재귀를 사용하여 팩토리얼을 계산하는 함수
    int k;
    long long v = 1;
    for (k = n; k > 0; k--)
        v = v * k;
    return v;
}

int main(int argc, char* argv[]) {
    clock_t start, end;//시작 시간과 종료 시간을 저장할 변수
    start = clock();
    long long result_liter = factorial_liter(20);//반복문 사용한 값
    end = clock();
    printf("Factorial Iterative Result: %lld\n", result_liter);//결과값 출력
    printf("Time: %f seconds\n", (float)(end - start) / CLOCKS_PER_SEC);//소요 시간

    start = clock(); // 시간 측정을 위해 start 변수
    long long result_rec = factorial_rec(20);//재귀를 사용하여 구한 값
    end = clock();
    printf("Factorial Recursive Result: %lld\n", result_rec);
    printf("Time: %f seconds\n", (float)(end - start) / CLOCKS_PER_SEC);

    return 0; // main 함수의 반환 값 추가
}
