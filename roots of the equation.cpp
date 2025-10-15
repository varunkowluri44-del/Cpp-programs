#include <iostream>
#include <cmath>    // for sqrt()
using namespace std;
int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;
    // Input coefficients
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    // Calculate discriminant
    discriminant = b*b - 4*a*c;
    // Check if roots are real, equal, or complex
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << root1 << endl;
    } else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
