#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int matrixA[100][100];
int matrixB[100][100];
int result[100][100];
void matrixCalculation(int Row,int Col,char options);
void CalculateAddMatrix(int Row,int Col);
void CalculateMultiMatrix(int Row,int Col);
void CalculateSubtractMatrix(int Row,int Col);
void printMatrix(int Row,int Col,int math[100][100]);
int main(){
    char menu,options;
    int m = 1;
    int l = 1;
    int i,j;
    system("color 2");
    printf(" Select a function 1.Matrix 1x1 2.Matrix 2x2 3.Matrix 3x3 4.Matrix 4x4\n");
    printf("\t\t 5.Choose the matrix itself");
    printf(" : ");
    scanf("%s",&menu);
    if(menu == '1'){
        system("cls");
        printf(" Select Options(A,B,C)\n");
        printf(" A.Plus B.Subtract C.Multiply : ");
        scanf("%s",&options);
        matrixCalculation(1,1,options);
    }
    else if(menu == '2'){
        system("cls");
        printf(" Select Options(A,B,C)\n");
        printf(" A.Plus B.Subtract C.Multiply : ");
        scanf("%s",&options);
        matrixCalculation(2,2,options);
    }
    else if(menu == '3'){
        system("cls");
        printf(" Select Options(A,B,C)\n");
        printf(" A.Plus B.Subtract C.Multiply : ");
        scanf("%s",&options);
        matrixCalculation(3,3,options);
    }
    else if(menu == '4'){
        system("cls");
        printf(" Select Options(A,B,C)\n");
        printf(" A.Plus B.Subtract C.Multiply : ");
        scanf("%s",&options);
        matrixCalculation(4,4,options);
    }
    else if(menu == '5'){
        system("cls");
        printf(" Choose Row ");
        scanf("%d",&i);
        printf(" Choose Colum ");
        scanf("%d",&j);
        printf(" Select Options(A,B,C)\n");
        printf(" A.Plus B.Subtract C.Multiply : ");
        scanf("%s",&options);
        matrixCalculation(i,j,options);
    }
}
void matrixCalculation(int Row,int Col,char options){
    int i,j,l = 1,m = 1;
    system("cls");
    printf("\tMatrix A\n");
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            printf(" %d.Enter Numbers [%d][%d] : ",l++,i,j);
            scanf("%d",&matrixA[i][j]);
        }
    }
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            printf("\t[%d]",matrixA[i][j]);
        }
    printf("\n");
    }
    printf("\n\tMatrix B\n");
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            printf(" %d.Enter numbers [%d][%d] : ",m++,i,j);
            scanf("%d",&matrixB[i][j]);
        }
    }
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            printf("\t[%d]",matrixB[i][j]);
        }
    printf("\n");
    }
    if(options == 'a'||options == 'A'){
        CalculateAddMatrix(Row,Col);
    }
    else if(options == 'b'||options == 'B'){
        CalculateSubtractMatrix(Row,Col);
    }
    else if(options == 'c'||options == 'C'){
        CalculateMultiMatrix(Row,Col);
    }
}
void CalculateAddMatrix(int Row,int Col){
    int i,j;
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printf("\n\tMatrix Plus\n");
    printMatrix(Row,Col,result);
}
void CalculateSubtractMatrix(int Row,int Col){
    int i,j;
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printf("\n\tMatrix Subtract\n");
    printMatrix(Row,Col,result);
}
void CalculateMultiMatrix(int Row,int Col){
    int i,j,k;
    int splitMatrix;
    splitMatrix = (Row > Col) ? Row : Col;
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            int sum = 0;
            for(k=0;k<splitMatrix;k++){
                result[i][j]+=(matrixA[i][k] * matrixB[k][j]);
            }
        }
    }
    printf("\n\tMatrix Multiply\n");
    printMatrix(Row,Col,result);
}
void printMatrix(int Row,int Col,int math[100][100]){
    int i,j;
    for(i=0;i<Row;i++)for(i=0;i<Row;i++){
        for(j=0;j<Col;j++)for(j=0;j<Col;j++){
            if(j>0){
                printf(" ");
            }
            printf("\t[%d]",math[i][j]);
        }
    printf("\n");
    }
}