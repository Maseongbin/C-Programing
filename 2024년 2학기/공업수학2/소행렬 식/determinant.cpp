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

double determinant_3X3(const vector<vector<int>>& A) 
{
    double deter;

    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수

    // 결과 행렬 transpose를 n x m 크기로 초기화
    vector<vector<int>> transpose(n, vector<int>(m));

    if ((m != 3) || (n != 3))
    {
        printf("3X3 행렬이 아닙니다.\n");
        return 0; // 오류 시 0 반환
    }
    else
    {
        // 3x3 행렬의 행렬식 계산 (Sarrus 법칙 사용)
        deter = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
              - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
              + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    }

    return deter;
}

int main() 
{
    // 행렬 A 정의 (3 x 3 행렬)
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {11, 1, 3}
    };

    // 행렬 A의 행과 열 수를 출력
    int m = A.size();
    int n = A[0].size();

    printf("Row number of A : %3d\n", m); // A의 행 수
    printf("Column number of A : %3d\n\n", n); // A의 열 수

    // 행렬 A 출력
    printf("=========== 행렬 A 출력 ===========\n");
    printMatrix(A);

    // 행렬 디터미넌트 결과 출력
    printf("=========== 행렬 A의 디터미넌트 출력 ===========\n");
    double D = determinant_3X3(A); // A의 디터미넌트 계산
    printf("Determinant of A: %.2lf\n", D); // 디터미넌트 출력

    return 0;
}
