/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    

int m = 3;
    int n = 4;
    int a[m][n];
    double student1 = 0;
    double student2 = 0;
    double student3 = 0;
    double max = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            a[i][j] = rand()%4+1;
        }
    }
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
   
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            if(i==0){
                student1+=a[i][j];
            }
            if(i==1){
                student2+=a[i][j];
            }
            if(i==2){
                student3+=a[i][j];
            }
        }
    }
    max = fmax(fmax(student1/n, student2/n), fmax(student2/n, student3/n));
   
   
    cout<<"Максимальный средний балл: "<<max;


}
