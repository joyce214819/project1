#include<iostream>
#include <fstream>
using namespace std;

int main(int argc, char * argv[]){

    int A[100][100];
    int block;
    //cout<<"asd\n";
    ofstream ans;
    ans.open ("example.txt");
    fstream myfile("1.txt", ios_base::in);

    int length , width;

    myfile>>length >>width;
    //cout << length << " " << width;

    for(int i = 0 ; i < length ; i++) {
        for(int j = 0; j < width; j++){
            myfile>>A[i][j];
        }
    }

     for(int i = 0 ; i < length ; i++) {
        cout<<'\n';
        for(int j = 0; j < width; j++){
           
            
            //cout << A[i][j] << " ";
            if(((j+1)<=length) && (A[i][j] == A[i][j+1])){
                cout<<i<<" "<<j<<"love";
                ans<<i<<" "<<j<<"qq" ;
            }


        }
    }



    
    
    ans.close();



    
    return 0;

}