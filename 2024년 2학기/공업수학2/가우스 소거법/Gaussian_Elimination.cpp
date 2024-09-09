#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

// 행렬을 출력하는 함수
// 매개변수로 2차원 벡터(행렬)를 받아, 각 원소를 출력합니다.
void printMatrix(const vector<vector<double>>& C) 
{
    for(int i = 0; i < C.size(); i++)
    {
        for(int j = 0; j < C[0].size(); j++)
        {
            // 행렬의 원소를 소수점 이하 3자리까지 출력
            printf("%6.3lf\t", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 피벗을 계산하는 함수
// 주어진 행렬에서 두 행(row1, row2)과 특정 열(column)에 대해 피벗 값을 계산합니다.
double cal_pivot(const vector<vector<double>>& C, int row1, int row2, int column)
{
    return C[row2][column] / C[row1][column];
}

// 행렬의 행 연산을 수행하는 함수
// 피벗을 이용해 행렬의 row2에서 row1의 배수를 빼는 방식으로 가우스 소거를 진행합니다.
void matrix_row_operation(vector<vector<double>>& C, int row1, int row2, double pivot)
{
    for(int k = 0; k < C[0].size(); k++)
    {
        // row2에서 row1의 pivot 배만큼을 빼는 연산을 수행
        C[row2][k] -= pivot * C[row1][k];
    }
} 

// 가우스 소거법을 통해 행렬을 상삼각 행렬로 변환하는 함수
// 가우스 소거법을 통해 행렬을 변환한 후 상삼각 행렬을 출력합니다.
void matrix_gaussian_elimination(vector<vector<double>>& C, double pivot)
{
    for(int i = 0; i < C[0].size() - 1; i++)
    {
        // i 번째 열 아래의 모든 행에 대해 피벗 계산 및 행 연산 수행
        for(int j = i + 1; j < C.size(); j++)
        {
            pivot = cal_pivot(C, i, j, i);
            matrix_row_operation(C, i, j, pivot);
        }
    }
    printMatrix(C);  // 상삼각 행렬 출력
}

// 후방 대입법으로 해를 구하는 함수
// 상삼각 행렬을 사용하여 각 변수의 값을 계산합니다.
vector<double> back_substitution(const vector<vector<double>>& C)
{
    int n = C.size();  // 행렬의 크기 (n x n)
    vector<double> x(n);  // 해를 저장할 벡터

    // 마지막 행부터 역순으로 해를 구함
    for (int i = n - 1; i >= 0; i--)
    {
        x[i] = C[i][n];  // C의 마지막 열은 상수항 (B 행렬의 값)
        for (int j = i + 1; j < n; j++)
        {
            // 상삼각 행렬을 이용해 나머지 변수들의 값을 빼줌
            x[i] -= C[i][j] * x[j];
        }
        // 현재 행의 대각선 원소로 나눠서 변수의 값을 구함
        x[i] /= C[i][i];
    }

    return x;  // 구한 해를 반환
}

int main(void)
{
    double pivot = 0.0;
    // 행렬 A 정의 (3 x 3 행렬)
    vector<vector<double>> A = {
        { 2,  1, -1},
        {-3, -1,  2},
        {-2,  1,  2}
    };
    
    // 행렬 B 정의 (3 x 1 행렬) -> 방정식의 상수항 벡터
    vector<vector<double>> B = {
        {  8},
        {-11},
        { -3}
    };
    
    // A와 B 행렬을 합쳐서 증강 행렬 C 생성 (3 x 4 행렬)
    vector<vector<double>> C = A;
    
    int m = A.size();  // A 행렬의 행 수
    int n = A[0].size();  // A 행렬의 열 수
    
    // A 행렬의 각 행 끝에 B 행렬의 상수항을 추가하여 증강 행렬 C 생성
    for(int i = 0; i < C.size(); i++)
    {
        C[i].push_back(B[i][0]);
    }

    // 가우스 소거 전 행렬 출력
    printf("========== Before Gaussian Elimination ==========\n");
    printMatrix(C);
    
    // 가우스 소거 후 행렬 출력
    printf("========== After Gaussian Elimination ==========\n");
    matrix_gaussian_elimination(C, pivot);

    // 후방 대입법으로 구한 해를 출력
    printf("=================== Solution ===================\n");
    vector<double> solution = back_substitution(C);
    for (int i = 0; i < solution.size(); i++)
    {
        printf("x%d = %6.3lf\n", i+1, solution[i]);
    }

    return 0;
}
