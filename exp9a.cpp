//PRASHIK MAGHADE
/*PRN: 22070123109
Experiment No: 9(a)*/


#include <iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix A is: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*OUPUT
Enter the elements of Matrix A: 
7 4 6 3 1 0 9 8 2 
Matrix A is: 
7 4 6 
3 1 0 
9 8 2 
*/
*/
