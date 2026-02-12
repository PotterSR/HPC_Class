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


    vector<double> boundary_conditions(N, 0.0);
    vector<double> rr(N, -1.0);        
    //Dar valores al vector de frontera
    boundary_conditions.at(0)   = T1;
    boundary_conditions.at(N-1) = T2;

    vector<double> aa(N, 0);
    vector<double> bb(N, 0);
    vector<double> cc(N, 0);

    for(int i = 1; i < N-1; i++){
        aa[i] =  1.0;
        bb[i] = -2.0;
        cc[i] = -1.0;
        rr[i] =  0.0;  
    }

    aa[0] = 0.0;
    bb[0] = 1.0;
    cc[0] = 1.0;
    rr[0] = cc[1];

    //Imprimir la Matrix en la terminal
    /*for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    */





    return 0;


}