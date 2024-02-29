#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
	int numberOfStudents;
	string subjects[4]= {" Math"," Khmer"," English"," law" };
	cout<<" Number of Student :";cin>>numberOfStudents;
	cin.ignore();
	string nameScores[numberOfStudents][5];
	float average[numberOfStudents],totalScores[numberOfStudents];
	unsigned int scores[numberOfStudents][4];
	for(int i=0; i<numberOfStudents; i++){
		for(int j=0; j<5; j++){
			if( j==0 ){
				cout<<" Name :";getline(cin,nameScores[i][0]);
			}else{
				cout<<subjects[j-1]<<" :";getline(cin,nameScores[i][j]);	
			}
			    if(j!=0){
			    	scores[i][j] = stoi(nameScores[i][j]);	
			    	totalScores[i] += scores[i][j];
				} 	  	 
		}
		cout<<" Total Scores :"<<totalScores[i]<<endl;	
		average[i]=totalScores[i]/4;
		cout<<" Average :"<<average[i]<<endl;
		if( average[i] > 50 ){
			cout<<" Passed ! ";
			if(average[i] >= 50 && average[i] <60 )cout<<"Grade E";
			else if(average[i] >= 60 && average[i] <70 )cout<<"Grade D";
			else if(average[i] >= 70 && average[i] <80 )cout<<"Grade C";
			else if(average[i] >= 80 && average[i] <90 )cout<<"Grade B";
			else if(average[i] >= 90 && average[i] <=100 )cout<<"Grade A";
			else cout<<"Check Score again "<<endl;	
			cout<<"\n\n";	
		}else cout<<" Failed !\n"<<endl;
			totalScores[i]=0;
	}
	return 0;	
}
