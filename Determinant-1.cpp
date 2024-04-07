/*
    Author - Dhruv Varshney
    Topic - Solving a determinant
*/

# include <bits/stdc++.h>

using namespace std;

int solve_det(int** a,int m,int n);
int main()
{
    // Input of determinant
    int m,n;
    cout << "Enter the aspects of the determinant: ";
    cin >> m >> n;
    int** det;
    det = (int**) malloc(m*sizeof(int*));
    cout << "Enter the determinant(row wise):" << endl;
    for(int i = 0; i < m ; i++) {
        det[i] = (int*) malloc(n*sizeof(int));
        for(int j = 0; j < n ; j++) {
            cin >> det[i][j];
        }
    }

    // Solving the determinant
    if(m != n) {
        cout << "Matrix is not square" << endl;
        return -1;
    }
    cout << "The determinant is: " << solve_det(det, m, n) << endl;
    for(int i = 0; i < m; i++) {
        free(det[i]);
    }
    free(det);
    return 0;
}

int solve_det(int** a,int m,int n) {
    if(m == 1) {
        return a[0][0];
    }
    int det = 0;
    for(int i = 0; i < m ; i++) {
        int cofactor = (i % 2 == 0) ? 1 : -1;
        det += cofactor * a[i][0] * solve_det(a, m-1, n);
    }
    return det;
}