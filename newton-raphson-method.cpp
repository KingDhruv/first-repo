/*WAP to find the solutions of the equation x = tanx*/

# include <iostream>
# include <math.h>

using namespace std;

// Defining function whose roots have to be found
double f(double x) {
    return tan(x) - x;
}

// Derivative of the function whose f
double _f(double x) {
    return pow(tan(x),2);
}

// Function to perform Newton Raphson Method
double newRaph(double initial_guess,double tolerance_value, double max_iterations) {
    int iteration;
    double x0 = initial_guess;
    for(iteration = 1;iteration <= max_iterations;iteration ++) {

        // Newton - Raphson Formula
        double x = x0 - f(x0)/_f(x0);

        // Convergence Check
        double e = tolerance_value;
        if(abs(x - x0) < e) {
            cout << "The root of the equation was found to be - " << x << endl << "No. of iterations passsed -" << iteration << endl;
            return x;
        }

        x0 = x;
    }
    cout << "Newton - Raphson Method did not converge after " << max_iterations << " iterations";
    return NAN;
}

int main() {
    double ig,tol,max;
    cout << "Enter initial guess :" ;
    cin >> ig;

    cout << "Enter tolerance value :";
    cin >> tol;

    cout << "Enter max_iterations :";
    cin >> max;

    double root = newRaph(ig,tol,max);
}

