#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main(){
	int ngay,thang,nam;
	cout<<"Vui long nhap ngay ";
	cin>>ngay;
	cout<<"Vui long nhap thang ";
	cin>>thang;
	cout<<"Vui long nhap nam ";
	cin>>nam;
	if(ngay<32&&thang<13){
	
	if((thang!=2&&(thang%2==0&&thang<9))||thang==11){
		if(ngay==30){
			ngay=1;
			thang=thang+1;
			nam=nam;
			cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
		}else{
			ngay=ngay+1;
			thang=thang;
			nam=nam;
		cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
		}
	}else
	{if((thang%2!=0&&thang<10)||(thang==10||thang==12)){
		if(ngay=31){
			if(thang=12){
				ngay=1;
				thang=1;
				nam=nam+1;
				cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
			}else{
				ngay=1;
				thang=thang+1;
				nam=nam;
				cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
			}
		}else{
			ngay=ngay+1;
			thang=thang;
			nam=nam;
			cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
		}
	}
	}
	if(thang==2){
		if(nam%100==0){if(nam%400==0){
			if(ngay==29){
				ngay=1;
				thang=thang+1;
				nam=nam;
				cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
			}else{
				ngay=ngay+1;
				thang=thang;
				nam=nam;
				cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
			}
		}
		}else{
		if(nam%4==0){
			if(ngay==28){
				ngay=1;
				thang=thang+1;
				nam=nam;
				cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
			}else{if(ngay<28){
			ngay=ngay+1;
			thang=thang+1;
			nam=nam;
			cout<<"Ngay hom sau la ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;	
			}
			}
		}
	}
}
}
}
