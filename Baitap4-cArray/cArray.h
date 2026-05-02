#ifndef CARRAY_H
#define CARRAY_H

#include <iostream>
using namespace std;

class cArray {
private:
    int* a;   
    int  n;  

public:
   
    cArray();
    cArray(int size);
    ~cArray();


    void TaoNgauNhien(int size, int minVal = 1, int maxVal = 100);
    void Xuat();

  
    int  DemGiaTri(int x);      
    bool LaTangDan();             
    int  TimPhanLeNhoNhat();     
    int  TimSoNguyenToLonNhat(); 
    void BubbleSort(bool tang = true);
    void SelectionSort(bool tang = true);
    void InsertionSort(bool tang = true);

private:
    bool LaNguyenTo(int x);
};

#endif