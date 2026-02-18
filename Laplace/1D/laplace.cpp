#include<iostream>
#include<cmath>
#include<vector>
#include<fstream>

using namespace std;


int main(int argc, char* argv[]){

    if(argc != 4){
        fprintf(stderr, "ERROR! Usage: % <N> <T1> <T2>");
        return 1;
    }

    int N     = stoi(argv[1]);
    double T1 = stod(argv[2]);
    double T2 = stod(argv[3]);
    //Inicializar la matriz con todos ceros
    vector<vector<double>> matrix(N, vector<double>(N, 0.0));
    vector<double>         boundary_conditions(N, 0.0);
    //Dar valores al vector de frontera
    boundary_conditions.at(0)   = T1;
    boundary_conditions.at(N-1) = T2;

    matrix[0][0] = 1;
    matrix[N-1][N-1] = 1;


    for(int i = 1; i < N-1; i++){
        matrix[i][i-1] = 1;     
        matrix[i][i]   = -2;       
        matrix[i][i+1] = 1; 
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



    return 0;


}