# include <bits/stdc++.h>

using namespace std;

int main() {

    // Input of rows
    int n;
    cout << "Enter the no. of rows: " <<endl;
    cin >> n;

    // Input of coefficient matrix
    double a[n][n];
    cout << "Enter the coefficient matrix: " <<endl;
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ; j++) {
            cin >> a[i][j];
        }
    }

    //  Input of constant matrix
    double b[n];
    cout << "Enter the constant matrix:" <<endl;
    for(int i = 0; i < n ; i++) {
        cin >> b[i];
    }

    //  Input of initial guess
    int init_guess[n];
    cout << "Enter your Initial Guess: " << endl;
    for(int i = 0; i < n ; i++) {
        cin >> init_guess[i];
    }

    // Input of maximmum iterations
    int max_itr;    
    cout << "Enter the maximum no. of iterations: ";
    cin >> max_itr;

    // Gauss - Seidel Method
    double x[n];
    for(int i = 0; i < n ; i++) {
        x[i] = init_guess[i];
    }
    for(int itr = 1; itr <= max_itr ; ++itr) {
        for(int i = 0; i < n; i++) {
            double sum = 0.0;
            for(int j = 0; j < n ; j++) {
                if(i != j) {
                    sum += a[i][j] * x[j];
                }
            }
            x[i] = (b[i] - sum) / a[i][i];
        }
        cout << "The solutions after " << itr << " iterations are:\n";
        for(int i = 0; i < n ; i++) {
            cout << "x" << i + 1 << " = " << x[i] << '\t';
        }
        cout << endl;
    }
    return 0; 
}