/*
    Pran Somboonprasit
*/
#include<iostream>
int matrixA[100][100];
int matrixB[100][100];
int result[100][100];
int i,j,k,l,m = 1;
void matrixCalculation(int Row,int Col,char options);
void CalculateAddMatrix(int Row,int Col);
void CalculateMultiMatrix(int Row,int Col);
void CalculateSubtractMatrix(int Row,int Col);
void printMatrix(int Row,int Col,int math[100][100]);
using namespace std;
int main(){
    char menu,options;
    system("color A");
    cout << "Select a function 1.Matrix 1x1 2.Matrix 2x2 3.Matrix 3x3 4.Matrix 4x4\n";
    cout << "\t\t  5.Choose the matrix itself";
    cout << " : ";
    cin >> menu;
    if(menu == '1'){
        system("cls");
        cout << " Select Options(A,B,C)\n";
        cout << " A.Plus B.Subtract C.Multiply : ";
        cin >> options;
        matrixCalculation(1,1,options);
    }
    else if(menu == '2'){
        system("cls");
        cout << " Select Options(A,B,C)\n";
        cout << " A.Plus B.Subtract C.Multiply : ";
        cin >> options;
        matrixCalculation(2,2,options);
    }
    else if(menu == '3'){
        system("cls");
        cout << " Select Options(A,B,C)\n";
        cout << " A.Plus B.Subtract C.Multiply : ";
        cin >> options;
        matrixCalculation(3,3,options);
    }
    else if(menu == '4'){
        system("cls");
        cout << " Select Options(A,B,C)\n";
        cout << " A.Plus B.Subtract C.Multiply : ";
        cin >> options;
        matrixCalculation(4,4,options);
    }
    else if(menu == '5'){
        system("cls");
        cout << " Choose Row ";
        cin >> i;
        cout << " Choose Colum ";
        cin >> j;
        cout << " Select Options(A,B,C)\n";
        cout << " A.Plus B.Subtract C.Multiply : ";
        cin >> options;
        matrixCalculation(i,j,options);
    }
    return 0;
}
void matrixCalculation(int Row,int Col,char options){
    system("cls");
    cout << "\tMatrix A\n";
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            cout << " " << l++ << ".Enter Numbers [" << i << "][" << j << "] : ";
            cin >> matrixA[i][j];
        }
    }
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            cout << "\t[" << matrixA[i][j] << "]";
        }
        cout << "\n";
    }
    cout << "\n\tMatrix B\n";
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            cout << " " << m++ << ".Enter numbers [" << i << "][" << j << "] : ";
            cin >> matrixB[i][j];
        }
    }
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            cout << "\t[" << matrixB[i][j] << "]";
        }
        cout << "\n";
    }
    if(options == 'a' || options == 'A'){
        CalculateAddMatrix(Row,Col);
    }
    else if(options == 'b' || options == 'B'){
        CalculateSubtractMatrix(Row,Col);
    }
    else if(options == 'c' || options == 'C'){
        CalculateMultiMatrix(Row,Col);
    }
}
void CalculateAddMatrix(int Row,int Col){
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    cout << "\n\tMatrix Plus\n";
    printMatrix(Row,Col,result);
}
void CalculateSubtractMatrix(int Row,int Col) {
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    cout << "\n\tMatrix Subtract\n";
    printMatrix(Row,Col,result);
}
void CalculateMultiMatrix(int Row,int Col){
    int splitMatrix;
    splitMatrix = (Row > Col) ? Row : Col;
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            int sum = 0;
            for(k=0;k<splitMatrix;k++){
                result[i][j] += (matrixA[i][k] * matrixB[k][j]);
            }
        }
    }
    cout << "\n\tMatrix Multiply\n";
    printMatrix(Row,Col,result);
}
void printMatrix(int Row,int Col,int math[100][100]) {
    for(i=0;i<Row;i++){
        for(i=0;i<Row;i++){
            for(j=0;j<Col;j++){
                for(j=0;j<Col;j++){
                    if(j>0){
                        cout << " ";
                    }
                    cout << "\t[" << math[i][j] << "]";
                }
                cout << "\n";
            }
        }
    }
    main();
}
