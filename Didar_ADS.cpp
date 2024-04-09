//1  linear -0(N)

/*#include <iostream>
using namespace std;
int findMinimum(int n, int arr[]) {
    int minElement = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return minElement;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int min = findMinimum(n, arr);
    cout << "Minimum element: " << min << endl;
    return 0;
}
*/

//2  linear - 0(N)


/*#include <iostream>
using namespace std;
double calc_Average(int n, int arr[]) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += arr[i];
    }
    return (double)s / n; 
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    int arr[n];
    cout << "elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    double average = calc_Average(n, arr);
    cout << "Average: " << average << endl;

    return 0;
}*/


//3 sqrt -0(sqrt(N))


/*#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
        
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is Prime." << endl;
    else
        cout << n << " is Composite." << endl;

    return 0;
}
*/


//4 linear -0(N)


/*#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 or n == 1)
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);
    cout << "Factorial " << result << endl;

    return 0;
}

*/

//5

/* exponential - 0(2^N)
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The " << n << "-th element in the Fibonacci sequence is: " << result << endl;

    return 0;
}
*/

//6 Linear -0(n)


/*
#include <iostream>
using namespace std;
int power(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1); 
}

int main() {
    int a, n;
    cout << "a: ";
    cin >> a;
    cout << "n: ";
    cin >> n;

    int result = power(a, n);
    cout << a << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}
*/

//7 Logorithmic -0(log(n))

/*
#include <iostream>
#include <algorithm>

using namespace std;

void generatePermutations(string str) {
    sort(str.begin(), str.end());

    while (next_permutation(str.begin(), str.end())) {
        cout << str << endl; 
    }
    cout << str << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    generatePermutations(str);

    return 0;
}
*/

//8 Linear -0(n)

/*
#include <iostream>
#include <string>

using namespace std;

bool allDigits(const string s) {
    for (char c : s) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (allDigits(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
*/

//9 exponetial -0(2^n)

/*
#include <iostream>
using namespace std;
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}
int main() {
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    int result = binomialCoefficient(n, k);
    cout << "C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}
*/

//10 Logarithmic -0(log(n))

/*
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b); 
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
*/
