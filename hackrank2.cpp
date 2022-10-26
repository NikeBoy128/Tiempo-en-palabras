#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
# include <cmath>
using namespace std;
string convertir(int n){
	int unidades=n%10;
	int decenas=trunc(((n%1000)%100)/10);
	string s="";
	string ss="";
	switch(unidades){
		case 1:
			s="one";
			
			break;
		case 2:
			s="two";
		
			break;
		case 3:
			s="three";
			
			break;
		case 4:
			s="four";
			
			break;
		case 5:
			s="five";
			
			break;
		case 6:
			s="six";
			
			break;
		case 7:
			s="seven";
			
			break;
		case 8:
			s="eight";
			
			break;
		case 9:
			s="nine";
			
			break;
		
		
	}
	switch(decenas){
		case 1:
			ss="ten";
			switch (unidades){
				case 0:
					ss="ten";
				
					break;
				case 1:
					ss="eleven";
					
					break;
				case 2:
					ss="twelve";
					break;
				case 3:
					ss="thirteen";
					break;
				case 4:
					ss="fourteen";
					break;
				case 5:
					ss="fifteen";
					break;
				case 6:
					ss="sixteen";
					break;
				case 7:
					ss="seventeen";
					break;
				case 8:
					ss="eighteen";
					break;
				case 9:
					ss="nineteen";
					break;
				
				
			}
		
			break;
		case 2:
			ss="twenty "	;		
			break;
		case 3:
			ss="thirty ";
			
			break;
		case 4:
			ss="fourty ";
			
			break;
		case 5:
			ss="fifty ";
			
			break;
		case 6:
			ss="sixty ";
		
			break;
		case 7:
			s="seventy";
			
			break;
		case 8:
			ss="eighty ";
			
			
			break;
		case 9:
			ss="ninety ";
			
			break;
		
		
	}
	
	string final="";
	if(n==10){
		final=ss;
		
	}
	else if(n>10 && n<=19){
		final=ss;
	}
	else if(n<10){
		final=s;
	}else if(n>=20){
		final=ss+s;
	}else{
		final=s+ss;
	}


	
	return final;
		
			
	
}
int main(){
	int h;
	int m;
	cin>>h;
	cin>>m;
	string resulh="";
	string resulm="";
	resulh=convertir(h);
	resulm=convertir(m);
	int minutes=60;

	
	/*switch (m){
		case 0:
			
			cout<<resulh+""+"o o'"+"clock";
			break;
		case 15:
			cout<<"Quarter past "+resulh;
			break;
		case 30:
			cout<<"half past +"+resulh;
		case 45:
			int aux=0;
			aux=h+1;
			string resulaux="";
			resulaux=convertir(aux);
			cout<<"quarter to "+resulaux;
			break;
		
		
	}*/
	if(m==0){
			cout<<resulh+""+" o'"+" clock";	
		
	}
	else if(m>0 and m<=29 and m!=15 and m!=1){
	
		cout<<resulm+" minutes past "+resulh;
	}
	else if(m==1){
			cout<<resulm+" minute past "+resulh;
		}
	
	else if(m==30){
		cout<<"half past "+resulh;
		
	}
	else if(m==45){
		int aux=0;
			aux=h+1;
			string resulaux="";
			resulaux=convertir(aux);
			cout<<"quarter to "+resulaux;
		
	}
	else if(m==15){
		cout<<"quarter past "+resulh;
		
		
	}else{
		int aux3=0;
		aux3=minutes-m;
		string resulaux3="";
		resulaux3=convertir(aux3);
		int aux4;
		aux4=h+1;
		string resulaux4="";
		resulaux4=convertir(aux4);
		cout<<resulaux3+" minutes to "+resulaux4;
		
		
	}
	
	

	
	
	
	
	
}
