#include<iostream>
using namespace std;

class student{
	
	private:
	  int roll;
	  int mark1;
	  int mark2;
	  int mark3;
	  
	   void total(){
	   	int sum= this->mark1+this->mark2+  this->mark3;
	     cout<<"total= "<<sum<<endl;
	   }
	   
	   void percentage(){
	   	   
	   	 int per=this->mark1+this->mark2+  this->mark3;
	   	     
	   	
	   }
	   
	   
   public:

     student(){
     	cout<<"parameter less!!!"<<"\n";
     	this->roll=0;
     	this->mark1=0;
     	this->mark2=0;
        this->mark3=0;
	 }
	
	student(int roll,int mark1,int mark2,int mark3){
			cout<<"parameterized!!!"<<"\n";
		 this->roll=roll; 
		 this->mark1=mark1; 
		 this->mark2=mark2; 
		 this->mark3=mark3;
	}
	

	void display(){
		void total();
	
	cout<<"roll="<<this->roll<<endl;
	cout<<"mark1="<<this->mark1<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	cout<<"mark2="<<this->mark2<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	cout<<"mark3="<<this->mark3<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	
	}
	
	
	
	
	
};



int main(){
	student s1(7,10,10,10);
	s1.display();

	
}
