#include<bits/stdc++.h>
using namespace std;

class Student {
	private :
	string name ;
	int age;
	
	public : 
    void setName(string name) { // Setter
    	this->name = name;
    }
    string getName() { // Getter
    	return name; // Tra ve gia tri cua bien name
    }	
    
    void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age; // Tra ve gia tri cua bien age
	}  
};
int main() {
	Student st;
	st.setName("thanhyou00"); // Truyen truc tiep gia tri cho name
	st.setAge(21);
	cout<<"Name : "<<st.getName()<<endl;
	cout<<"Age : "<<st.getAge()<<endl;
	return 0;
}

