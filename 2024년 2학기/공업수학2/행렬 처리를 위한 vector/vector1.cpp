#include <iostream>
#include <vector>

using namespace std;

// 행렬을 출력하는 함수
void printMatrix(const vector<vector<int>>& matrix) 
{
    printf("matrix : \n");
    // 행렬의 각 행을 출력
    for (const auto& row : matrix) 
    {
        for (int elem : row) 
        {
            printf("%d\t", elem); // 각 원소를 탭으로 구분하여 출력
        }
        printf("\n"); // 한 행을 출력한 후 개행
    }
    printf("\n");
}

// 두 행렬을 더하는 함수
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (B와 동일해야 함)
    int p = B[0].size(); // B의 열 수

    // 결과 행렬 C를 0으로 초기화 (크기는 m x p)
    vector<vector<int>> C(m, vector<int>(p, 0));

    // 두 행렬의 덧셈을 수행
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            C[i][j] = A[i][j] + B[i][j]; // 각 대응 원소를 더함
        }
    }

    return C; // 결과 행렬 반환
}

// 두 행렬을 빼는 함수
vector<vector<int>> subtractMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (B와 동일해야 함)
    int p = B[0].size(); // B의 열 수

    // 결과 행렬 C를 0으로 초기화 (크기는 m x p)
    vector<vector<int>> C(m, vector<int>(p, 0));

    // 두 행렬의 뺄셈을 수행
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            C[i][j] = A[i][j] - B[i][j]; // 각 대응 원소를 뺌
        }
    }

    return C; // 결과 행렬 반환
}

// 두 행렬을 곱하는 함수
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (B의 행 수와 동일해야 함)
    int p = B[0].size(); // B의 열 수

    // 결과 행렬 C를 0으로 초기화 (크기는 m x p)
    vector<vector<int>> C(m, vector<int>(p, 0));

    // 행렬 곱셈을 수행 (A의 행과 B의 열을 곱함)
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j]; // A의 i행과 B의 j열을 곱하여 더함
            }
        }
    }

    return C; // 결과 행렬 반환
}

// 행렬을 전치(Transpose)하는 함수
vector<vector<int>> transposeMatrix(const vector<vector<int>>& A) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수

    // 결과 행렬 transpose를 n x m 크기로 초기화
    vector<vector<int>> transpose(n, vector<int>(m));

    // 행렬 A의 전치를 계산 (행과 열을 교환)
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            transpose[j][i] = A[i][j]; // A의 (i, j) 원소를 transpose의 (j, i) 위치에 저장
        }
    }

    return transpose; // 전치 행렬 반환
}

int main() 
{
    // 행렬 A 정의 (2 x 3 행렬)
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 행렬 B 정의 (3 x 2 행렬)
    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // 행렬 C 정의 (2 x 3 행렬, A와 크기 동일)
    vector<vector<int>> C = {
        {6, 5, 4},
        {3, 2, 1}
    };

    // 행렬 A의 행과 열 수를 출력
    int m = A.size();
    int n = A[0].size();

    printf("Row number of A : %3d\n", m); // A의 행 수
    printf("Column number of A : %3d\n\n", n); // A의 열 수

    // 행렬 덧셈 결과 출력
    printf("=========== 배열 덧셈 출력 ===========\n");
    vector<vector<int>> D = addMatrix(A, C); // A와 C의 덧셈
    printMatrix(D);

    // 행렬 뺄셈 결과 출력
    printf("=========== 배열 뺄셈 출력 ===========\n");
    vector<vector<int>> E = subtractMatrix(A, C); // A와 C의 뺄셈
    printMatrix(E);

    // 행렬 곱셈 결과 출력
    printf("=========== 배열 곱셈 출력 ===========\n");
    vector<vector<int>> F = multiplyMatrix(A, B); // A와 B의 곱셈
    printMatrix(F);

    // 행렬 전치 결과 출력
    printf("========= 배열 트랜스포즈 출력 =========\n");
    vector<vector<int>> G = transposeMatrix(A); // A의 전치
    printMatrix(G);

    return 0;
}
