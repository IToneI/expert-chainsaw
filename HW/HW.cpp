#include <iostream>
#include<math.h>
#define PI 3.14
using namespace std;

struct matrix {
    int n;
	int m;
    double** data;
};

void funinit(matrix &a, int n, int m ) {
    a.m = m;
    a.n = n;
    a.data = new double* [a.n];
    for (int i = 0; i < a.n; i++) {

        a.data[i] = new double[a.m];
    }
}

void fundel( matrix &a) {
    for (int i = 0; i < a.n; i++) {
        delete[] a.data[i];
    }
    delete[] a.data;
}

void funfill(matrix &a, double f ) {

    for (int i = 0; i < a.n; i++) {
        for (int j = 0; j < a.m; j++) {

            a.data[i][j] = f;
        }
    }
}

void funprint(matrix& a) {
    cout << a.n <<"  " <<  a.m<< endl;
    for (int i = 0; i < a.n; i++) {
        for (int j = 0; j < a.m; j++) {

            cout << a.data[i][j]<<" ";
        }
        cout << endl;
    }

}

matrix timesmatrix(matrix a, matrix b){
    matrix c;

    c.m = 0;
    c.n = 0;
    if (a.m != b.n) {
        return c;
    }
    
  
    funinit(c, a.n, b.m);
    for (int i = 0; i < a.n; i++) {
        for (int j = 0; j < b.m; j++) {
            c.data[i][j] = 0;
            for (int k = 0; k < a.n; k++) {
                c.data[i][j] += a.data[i][k] * b.data[k][j];
            }
        }
    }
    return c;



}

double funlength(matrix a) {
    //check if it's vector
    double sum = 0;
    for (int i = 0; i < a.n; i++) {
  
        sum += a.data[i][0] * a.data[i][0];
    }
    
    return sqrt(sum);
}


int main()
{   
    

    //TODO: create structure matrix {m, n, pointer to array of doubles}

    //TODO: create a 10x10 matrix, fill with 1's

    matrix a;
    

    int n = 10;
    int m = 10;
    double f = 1;
    funinit(a, n, m);
    funfill(a, f);
    funprint(a);
   

   
    

    //TODO: create 10x1 matrix named 'vector', initialize with pi / 2 values
    matrix vector;
    funinit(vector, 10, 1);
    funfill(vector, PI / 2);
    funprint(vector);



    //TODO: multiply matrix to vector 
    // and calculate its length
    matrix c = timesmatrix(a, vector);


    //TODO: print answer
    cout << funlength(c) << endl;
    funprint(c);





    fundel(a);
    fundel(c);
    fundel(vector);

}
