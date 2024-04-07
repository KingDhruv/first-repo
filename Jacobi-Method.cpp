# include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cout << "Enter the no. of rows: " <<endl;
    cin >> n;
    double x[n],x_new[n];
    double a[n][n];
    cout << "Enter the coefficient matrix: " <<endl;
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ; j++) {
            cin >> a[i][j];
        }
    }

    double b[n];
    cout << "Enter the constant matrix:" <<endl;
    for(int i = 0; i < n ; i++) {
        cin >> b[i];
    }
    
    cout << "Enter your Initial Guess: " << endl;
    for(int i = 0; i < n ; i++) {
        cin >> x[i];
    }

    int max_itr;
    cout << "Enter the maximum no. of iterations: ";
    cin >> max_itr;

    for(int itr = 1; itr <= max_itr ; ++itr) {
        for(int i = 0; i < n; i++) {
            double sum = 0.0;
            for(int j = 0; j < n ; j++) {
                if(j != i) {
                    sum += a[i][j] * x[j];
                }
            }
            x_new[i] = (b[i] - sum) / a[i][i];
        }
        cout << "The solutions after " << itr << " iterations are:\n";
        for(int i = 0; i < n ; i++) {
            x[i] = x_new[i];
            cout << "x" << i + 1 << " = " << x_new[i] << '\t';
        }
        cout << endl;
    }
    return 0; 
}