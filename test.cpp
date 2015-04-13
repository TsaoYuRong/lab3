#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#include"test.h"
using namespace std;
void farmer::inPut(){
	int originData;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cout<<"File could not be opened"<<endl;	
		exit(1);
}
	inFile>>farmer::tem;
	farmer::data.resize(farmer::tem);
	for(int i=0;i<farmer::tem;i++){
		inFile>>farmer::data[i];
}
	inFile.close();
}
void farmer::sorting(vector<int> &number){
	number.resize(farmer::tem);
	int total=0;
	sort(number.begin(),number.end());
	reverse(number.begin(),number.end());
	for(int i=0;i<5;i++){
                total+=number.at(i);
}
	cout<<total<<endl;
}


