#include<iostream>
using namespace std;
class opr {
    public:
    void Add_Matrix(int mat1[][3], int mat2[][3]){
    int tot[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            tot[i][j] = mat1[i][j] + mat2[i][j];
 
    cout<<"\n Addition of 2 Matrices:- \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
    void Sub_Matrix(int mat1[][3], int mat2[][3]){
    int tot[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            tot[i][j] = mat1[i][j] - mat2[i][j];
 
    cout<<"\n Subtraction of 2 Matrices:- \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
    void Mult_Matrix(int mat1[][3], int mat2[][3]){
    int tot[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            tot[i][j]=0;
            for(int k=0; k<3; k++)
                tot[i][j] = tot[i][j] + (mat1[i][k]*mat2[k][j]);
            }
    cout<<"\n Multiplication of 2 Matrices:- \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<tot[i][j];
        cout<<endl;
        }
    }
    void Disp_Matrix(int mat1[][3], int mat2[][3]){
    cout<<"\n First matrix is:- \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<mat1[i][j];
        cout<<endl;
        }
 
    cout<<"\n Second matrix is:- \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<" "<<mat2[i][j];
        cout<<endl;
        }
    }
    void Init_Matrix(int mat1[][3], int mat2[][3]){
        int i,j;
    cout<<"\n Enter the Elments of First Matrix: "<<endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
             
            cin>>mat1[i][j];
    cout<<"\n Enter the Elments of second Matrix: "<<endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            
            cin>>mat2[i][j];
    }
    void trap1(int mat1 [][3]){
        int tp[3][3];
        for(int i=0;i<3;i++)
           for(int j=0;j<3;j++){
               tp[j][i]= mat1[i][j];
        }
        cout<<"\nTranspose of the matrix:\n";
  for (int i = 0; i < 3; ++i)
       for (int j = 0; j < 3; ++j) {
         cout<<" "<< tp[i][j];
         if (j == 2)
         cout<<endl;
        }
    }
     void trap2(int mat2[][3]){
        int tp[3][3];
        for(int i=0;i<3;i++)
           for(int j=0;j<3;j++){
               tp[j][i]= mat2[i][j];
        }
        cout<<"\nTranspose of the matrix:\n";
  for (int i = 0; i < 3; ++i)
       for (int j = 0; j < 3; ++j) {
         cout<<" "<< tp[i][j];
         if (j == 2)
         cout<<endl;
        }
    }


};
int main(){
    int mat1[3][3], mat2[3][3];
    int ch;
    opr ob;
    
    cout<<"\n Matrix Operation of Order (3*3):- \n";
    ob.Init_Matrix(mat1, mat2);
    ob.Disp_Matrix(mat1, mat2);
    while(1){
        cout<<"\n Matrix Operation of Order (3*3):- \n";
        cout<<"\n 1 -> Change Elements of Matrices.";
        cout<<"\n 2 -> Add Matrices.";
        cout<<"\n 3 -> Subtract Matrices.";
        cout<<"\n 4 -> Multiply Matrices.";
        cout<<"\n 5 -> transpose 1st Matrix.";
        cout<<"\n 6 -> transpose 2nd Matrix.";
        cout<<"\n 7 -> Exit.";
        cout<<"\n Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                ob.Init_Matrix(mat1, mat2);
                break;
            case 2:
                ob.Add_Matrix(mat1, mat2);
                break;
            case 3:
                ob.Sub_Matrix(mat1, mat2);
                break;
            case 4:
                ob.Mult_Matrix(mat1, mat2);
                break;
            case 5:
                ob.trap1(mat1);
                break;
            case 6:
                ob.trap2(mat2);
                break;        
            case 7:
                exit(1);
            default:
                cout<<"\n Enter Correct Choice.";
            };
    };
    return 0;
};