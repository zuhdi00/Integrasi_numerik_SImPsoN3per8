INTEGRASI NUMERIK METODE SIMPSON 3/8

//PROGRAM
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    // Masukkan fungsi yang ingin diintegrasi di sini
    return 1/(x+1);
}

double simpson_3per8(double a, double b, int n) {
    int i ;
    double x;

    double h = (b - a) / n;  // Lebar subinterval
    double sum = f(a) + f(b);  // Penjumlahan nilai ujung interval

  cout << "******************************************************" << endl;
  cout << setw(2) << "NO" << setw(20) << "Xi" << setw(30) << "f(Xi)" << endl;
  cout << "******************************************************" << endl;


  for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) {  // Jika i adalah kelipatan 3
            sum += 2 * f(x);
        } else {
            sum += 3 * f(x);
        }
        cout<<"\t"<< i;
    cout << setw(20)<< x;
    cout << setw(30)<< sum;
    cout << endl;
    }


    return (3 * h / 8) * sum;
}

int main() {
    double a, b;
    int n;

    // Input batas bawah a, batas atas b, dan jumlah subinterval n
    atas :
    cout << "Masukkan batas bawah a: ";
    cin >> a;
    cout << "Masukkan batas atas b: ";
    cin >> b;
    cout << "Masukkan jumlah subinterval n (harus kelipatan 3): ";
    cin >> n;

    // Validasi jumlah subinterval
     if (n % 3 != 0) {
        cout << "Jumlah subinterval harus kelipatan 3." << endl;
        goto atas;
    }



    // Hitung integral menggunakan metode Simpson 3/8
    double integral = simpson_3per8(a, b, n);

    // Output hasil
    cout << "Hasil integral: " << integral << endl;

    return 0;
}


//PSEUCODE

Function f(x):
    // Masukkan fungsi yang ingin diintegrasi di sini
    Return 1/(x+1)

Function simpson_3per8(a, b, n):
    h = (b - a) / n  // Lebar subinterval
    sum = f(a) + f(b)  // Penjumlahan nilai ujung interval

    Print "******************************************************"
    Print "NO" + "\t" + "Xi" + "\t\t\t" + "f(Xi)"
    Print "******************************************************"

    For i = 1 to n-1:
        x = a + i * h
        If i mod 3 = 0:
            sum += 2 * f(x)
        Else:
            sum += 3 * f(x)
        Print i + "\t" + x + "\t" + sum

    Return (3 * h / 8) * sum

Main:
    Read a, b, n
    Repeat:
        Print "Masukkan batas bawah a: "
        Read a
        Print "Masukkan batas atas b: "
        Read b
        Print "Masukkan jumlah subinterval n (harus kelipatan 3): "
        Read n
    Until n mod 3 = 0

    integral = simpson_3per8(a, b, n)
    Print "Hasil integral: " + integral