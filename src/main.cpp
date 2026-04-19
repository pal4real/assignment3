#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

int main(int argc, char ** argv)
{
    int n = 0;
    std::cout << "Masukkkan jumlah segitiga: ";
    std::cin >> n;
    
    std::vector<Triangle> triangles;

    /*--------------------------
    Buat loop untuk membuat menginputkan data triangle (3 buah X Y Z data) ke dalam
    variable triangles
    --------------------------*/
    // Tambahkan di sini
    for(int i = 0; i < n; i++) {
        std::cout << "Segitiga " << i + 1 << " (x y z untuk 3 titik):" << '\n';
        Triangle t;
        std::cin >> t;
        triangles.push_back(t);
    }

    /*------------------------*/


    /*--------------------------
    Implementasikan kode untuk melakukan pengecekan apakah data pada variable triangles
    adalah "sama kaki", "sama sisi", "siku-siku", atau "sembarang"
    --------------------------*/
    std::cout << '\n' << "Hasil:" << '\n';
    for(int i = 0; i < triangles.size(); i++) {
        std::cout << "Segitiga " << i + 1 << ": ";
        triangles[i].TriangleType();
    }

    /*------------------------*/
    std::cin.ignore();
    std::cin.get();
    return 0;
}