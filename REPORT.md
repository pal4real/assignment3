# Laporan Programming Assigment 3

## Deskripsi
Program ini dibuat untuk menentukan jenis segitiga dalam ruang 3 dimensi berdasarkan input koordinat x, y, z.

## Struktur
assignment3/
├── src/
│   ├── include/
│   │   ├── point2d.hpp     # Header class Point2D
│   │   └── triangles.hpp   # Header class Triangle
│   ├── main.cpp            # Program utama
│   ├── point2d.cpp         # Implementasi Point2D
│   └── triangles.cpp       # Implementasi Triangle
├── Makefile
└── README.md

## Penjelasan Class

### Point2D
Menyimpan koordinat sebuah titik dalam ruang 3D dengan variabel _x, _y, _z.
Dilengkapi dengan operator +, -, *.

### Triangle
Menyimpan 3 titik (_t1, _t2, _t3) bertipe Point2D yang membentuk sebuah segitiga.
Memiliki fungsi TriangleType() untuk menentukan jenis segitiga.

