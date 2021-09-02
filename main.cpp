#include <iostream>

using namespace std;


void mostrarvec(int vec[], int dim, int rev)
{       
        if(dim==5 && rev==0){
                cout<<"El vector de 5 elementos es:"<<endl;
        } else if (dim==10 && rev==0){
                cout<<"El vector de 10 elementos es:"<<endl;
        } else if (dim==5 && rev==1){
                cout<<"El vector Revertido de 5 elementos es:"<<endl;
        } else if (dim==10 && rev==1) {
                cout<<"El vector Revertido de 10 elementos es:"<<endl;
        }

	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil, int mat)
{       
        if (mat == 0){
                cout<<"La Matriz es:"<<endl;     
        } else if (mat == 1) {
                cout<<"La Matriz Transpuesta es:"<<endl;
        }

        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void revertir(int vec[], int dim) {
        int aux;
        for (int i = 0; i < dim/2; i++) {
                aux = vec[i];
                vec[i] = vec[dim-1-i];
                vec[dim-1-i] = aux;
        }
        cout << endl;
}

void transpuesta(int matriz[5][5]) {
    int matrizTranspuesta[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = matrizTranspuesta[i][j];
        }
    }
}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    
    int rev = 0, mat=0;
        mostrarvec(vec5, dim5, rev);
        cout<<endl;
        mostrarvec(vec10, dim10, rev);
        cout<<endl;
        mostrarmat(matriz, dim5, mat);
        cout<<endl;
        revertir(vec5, dim5);   
        cout<<endl;
        revertir(vec10, dim10);
        cout<<endl;
        transpuesta(matriz);
        cout<<endl;
     rev = 1, mat = 1;
        mostrarvec(vec5, dim5, rev);
        cout<<endl;
        mostrarvec(vec10, dim10, rev);
        cout<<endl;
        mostrarmat(matriz, dim5, mat);
        cout<<endl;   

    return 0;
}