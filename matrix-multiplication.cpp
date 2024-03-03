/* Matrix Multiplication */

# include <iostream>

using namespace std;

int main() {
    int a1,b1;
    cout << "Enter the dimensions of matrix 1 :" << '\n';
    cout << "Rows :";
    cin >> a1;
    cout << "Columns :";
    cin >> b1;
    int a2,b2;
    cout << "Enter the dimensions of the matrix 2 :" << '\n';
    cout << "Rows :";
    cin >> a2;
    cout << "Columns :";
    cin >> b2;
    if(b1 != a2) {
        cout << "Multiplication not possible";
        return -1;
    }
    else {

        int m[a1][b1], n[a2][b2], r[a1][b2];
        cout << "Enter data for the 1st matrix " <<endl;
        for(int i = 0; i < a1; i++) {
            for(int j = 0; j < b1; j++) {
                cin >> m[i][j];
            }
        }

        cout << "Enter data for the 2nd matrix " <<endl;
        for(int i = 0; i < a2; i++) {
            for(int j = 0; j < b2; j++) {
                cin >> n[i][j];
            }
        }

        for(int i = 0; i < a1 ; i++) {
            for(int j = 0; j < b2; j++) {
                r[i][j] = 0;
                for (int k = 0; k < a2; k++)
                {
                    r[i][j] += m[i][k]*n[k][j];
                }                
            }
        }
        cout << "The resultant matrix is : " << '\n';
        for(int i = 0; i < a1 ; i++) {
            for(int j = 0; j < b2; j++) {
                cout << r[i][j] << '\t';             
            }
            cout << '\n';
        }
    }
    return 0;
}