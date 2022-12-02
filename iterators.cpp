#include<bits/stdc++.h>
using namespace std ;
int main(){

	// iterator - pointer point a particular position in n container

	//declare

	vector<string> student;
	student.push_back("abhi");
	student.push_back("abhi_gupta");
	student.push_back("abhishek");

	vector<string> :: iterator itr ;


	for(itr = student.begin() + 0; itr <= student.end(); itr++)
		cout<<(*itr)<<" ";

	cout<<endl;

	for(auto i = student.begin() + 1; i < student.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	student.erase(student.begin() + 1, student.begin() + 1) ;


	for(auto i = student.begin() + 1; i < student.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	// for(int i =)

	vector<pair<int, string>>st ;
	st.push_back({10, "abhi"}) ;


	vector<pair<int, string>> :: iterator it ;
	for( it = st.begin(); it != st.end(); ++it)
	{
		// cout<<<
		cout<<(*it).first<<" "<<(*it).second<<endl;

	}

	for(auto i : st){
		cout<<(i).first<<" "<<(i).second<<endl;

	}
	return 0 ;

}