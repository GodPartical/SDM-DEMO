#include<iostream>
using namespace std;

class student{
	
	private:
	  int id;
	  int roll;
	  int mark;
	  
	  
   public:

     student(){
     	cout<<"parameter less!!!"<<"\n";
     	this->id=0;
     	this->roll=0;
     	this->mark=0;
	 }
	
	student(int id,int roll,int mark){
			cout<<"parameterized!!!"<<"\n";
		 this->id=id;
		 this->roll=roll; 
		 this->mark=mark; 
	}
	

	void display(){
		
	cout<<"id="<<this->id<<endl;
	cout<<"roll="<<this->roll<<endl;
	cout<<"mark="<<this->mark<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	
	}
	
	
	
	
	
};



int main(){
	
//	student s1;
//	 s1.display();
    
//      student s;
//      s.display();
//      
//	 
 student s2(7,07,77); 
     s2.display();	
//	
	
	
	
}
