# include <bits/stdc++.h>

using namespace std;

int main() {;

    int m,n;
    cin >> m >> n;
     
    int arr[m][n + 1];
    for(int i = 0; i < m ; i++) {
        for(int j = 0; j < n + 1 ; j++) {
            cin >> arr[i][j];
        }
    }

    int initGuess[m],varMatrix[m];
    for(int i = 0; i < m ; i++) {
        cin >> initGuess[i];
    }

    int maxit,i = 0;
    cout << "Enter the maximum no. of iterations : ";
    cin >> maxit;

    while(n--) {
        if(i == 0) {
            for(int k = 0; k < m ; k++) {
                varMatrix[k] = initGuess[k];
            }
        }
        else {
            for(int k = 0; k < m ; k++ ) {
                varMatrix[k] = ;
                int sum = 0;
                for(int l = 0; l < n ; l++) {
                }
            }
        }
    }
    return 0;
}