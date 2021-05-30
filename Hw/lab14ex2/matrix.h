//
// Created by ShanK on 2021/5/20.
//

#ifndef LAB14EX2_MATRIX_H
#define LAB14EX2_MATRIX_H

#define MAXCOLS 5
#define MAXROWS 5

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Matrix{
private:
    T matrix[MAXROWS][MAXCOLS];
    int rows;
    int cols;
public:
    Matrix(){
        rows = MAXROWS;
        cols = MAXCOLS;
    }
    Matrix(int r, int c){
        rows = r;
        cols = c;
    }
    void show(){
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    void setMatrix(T array[][MAXCOLS]){
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < cols;j++)
                matrix[i][j]=array[i][j];
        }
    }
    void addMatrix(T array[][MAXCOLS]){
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < cols;j++)
                matrix[i][j]+=array[i][j];
        }
    }
};

template<typename T1>
void useMatrixTemplate(Matrix <T1> & M, T1 array1[][MAXCOLS], T1 array2[][MAXCOLS]){
    M.setMatrix(array1);
    cout<<"Matrix set first array"<<endl;
    M.show();
    M.addMatrix(array2);
    cout<<"\nMatrix incremented by second array"<<endl;
    M.show();
}

#endif //LAB14EX2_MATRIX_H