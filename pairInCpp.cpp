#include<bits/stdc++.h>
using namespace std;

int main(){

	
	//declare

	// pair<d1, d2> pr ;

	//d1 - > one date type 
	//d2 -> one data type

	//d1 and d2 

	pair<string, int> p1 ;

	// technically 
	// d1 -> first d2 -> second

	
	//first declaratlion

	// p1.first = "abhi" ;
	// p1.second = 22 ;

	//second decl
	p1 = {"abhishek", 22} ;

	cout<<p1.first<<" "<<p1.second<<endl; 

	//third decl
	// make_pair

	pair<int, int> p2;
	p2 = make_pair(10000, 10);

	// fourth decl
	pair<int, int> p4(9, 10) ;

	cout<<p4.first<<" "<<p4.second<<endl; 	

	cout<<p2.first<<" "<<p2.second<<endl; 


	vector<pair<int, int>> vc ;

	pair<int, int> p3 ;
	p3 = {10, 10000};
	vc.push_back(p3) ;


	pair<int, int> p5(5,6) ;
	// p3 = {10, 10000};
	vc.push_back(p5) ;

	vc.push_back(p2);
	vc.push_back(make_pair(1, 2));
	vc.push_back({222, 333}) ;

	for(auto i : vc)
		cout<<i.first <<" "<<i.second<<endl;


	// < <= > >= == != -> op

	// p1 op p2 
	// p1.first and p2.first 

 // 10 100
 // 9 10

	cout<<(p4 == p2);


}