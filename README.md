# Integrasi_numerik_SImPsoN3per8
Dengan menggunakan metode numerik, solusi exact dari persoalan yang dihadapi 
tidak akan diperoleh. Metode numerik hanya bisa memberikan solusi yang mendekati 
atau menghampiri solusi sejati sehingga solusi numerik dinamakan juga solusi hampiran 
(approximation solution). Pendekatan solusi ini tentu saja tidak tepat sama dengan solusi 
sejati, sehingga ada selisih antara keduanya. Solusi tersebut disebut solusi galat (error). 
Semakin kecil galat yang diperoleh berarti semakin dekat solusi hampiran yang diperoleh 
dengan solusi sejatinya

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

# Bahasa yang digunakan bahasa pemprograman C++
