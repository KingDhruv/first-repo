#include <iostream>
#include <cmath>

using namespace std;

// Function to define f(x)
double func(double x) {
    return tan(x) - x;
}

// Derivative of f(x)
double derivFunc(double x) {
    return 1.0 / (cos(x) * cos(x)) - 1;
}

// Function to perform Newton-Raphson iteration
double newtonRaphson(double x0, double epsilon, int maxIterations) {
    double x = x0;
    int iteration = 0;

    while (iteration < maxIterations) {
        double fx = func(x);
        double dfx = derivFunc(x);

        // Newton-Raphson formula
        double x1 = x - fx / dfx;

        // Check for convergence
        if (abs(x1 - x) < epsilon) {
            cout << "Root found at x = " << x1 << " after " << iteration + 1 << " iterations." << endl;
            return x1;
        }

        x = x1;
        iteration++;
    }

    cout << "Newton-Raphson method did not converge after " << maxIterations << " iterations." << endl;
    return NAN; // Return NaN to indicate failure to converge
}

int main() {
    double initialGuess = 1.0;   // Initial guess for the root
    double epsilon = 1e-6;       // Tolerance for convergence
    int maxIterations = 1000;    // Maximum number of iterations

    // Call the Newton-Raphson method
    double root = newtonRaphson(initialGuess, epsilon, maxIterations);

    return 0;
}
