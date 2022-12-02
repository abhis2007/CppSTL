using namespace std ;
#include<bits/stdc++.h>

int main(){
	
	//key and value -> value is associated with a unique key

	//declare
	// map<inp1, inp2> mp;

	//inp1 and inp2 -> any datatype -> d1  and d2 can or cant be same
	
	map<int , int> mp ;

	mp[1] = 1 ;
	mp[20] = 2 ;
	mp[2] = 3 ;
	mp[3] = 4 ;

	//access
	map<int , int> :: iterator itr ;
	for(itr = mp.begin(); itr != mp.end(); itr++)
		cout<<(*itr).first<<" "<<(*itr).second<<endl;

	// 1 -> 1
	// 2-> 200
	// 3-> 200

	//1, 20, 2, 3 -> op -> 1, 2, 3, 20 ---- sort by default -> key 

	cout<<"auto \n";
	pair<int, int> p ;
	for(auto val : mp){
		p = val;
		cout<<(p).first<<" "<<(p).second<<endl;
	}

	map<string, int> mp2 ;

	int stdCount;
	cin>>stdCount;

	string stdName;
	int rollNum ;

	// while(stdCount--){
	// 	cin>>stdName>>rollNum;
	// 	mp2[stdName] = rollNum;
	// }

	// cout<<endl<<endl;
	// for(auto val : mp2){
		
	// 	cout<<(val).first<<" "<<(val).second<<endl;
	// }

	// map<int, string> mp3 ;

	// while(stdCount--){
	// 	cin>>stdName>>rollNum;
	// 	mp3[rollNum] = stdName;
	// }

	// cout<<endl<<endl;
	// for(auto val : mp3){
		
	// 	cout<<(val).first<<" "<<(val).second<<endl;
	// }

	map<string, vector<int>> mp4;

	while(stdCount--){
		cin>>stdName>>rollNum;
		mp4[stdName].push_back(rollNum);
	}

	cout<<endl<<endl;
	vector<int> vec ;
	for(auto val : mp4){
		string name = val.first;
		vec = val.second ;
		cout<<name<<" -> ";
		for(auto el : vec)
			cout<<el<<" ";

		cout<<endl;
	}


}
