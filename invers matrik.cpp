#include<iostream>
 
using namespace std;
 
int main(){
	int mat[3][3], i, j;
	float determinant = 0;
	
	cout<<"masukkan angka:\n";
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
           cin>>mat[i][j];
	
	cout<<"\nbentuk matrik:";
	for(i = 0; i < 3; i++){
		cout<<"\n";
		
		for(j = 0; j < 3; j++)
			cout<<mat[i][j]<<"\t";
	}
	
	//finding determinant
	for(i = 0; i < 3; i++)
		determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
	
	cout<<"\n\ndeterminant: "<<determinant;
	
	cout<<"\n\nhasil invers: \n";
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
		
		cout<<"\n";
	}
 
   return 0;
}
