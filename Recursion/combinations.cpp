#include<iostream>
#include<vector>
using namespace std;

void powerSet(string &s){
	int n = s.size();
	int noOfSubsets = (1<<n);
	
	for(int i=0 ; i<noOfSubsets ; ++i){
		string currSubSet = "";
		for(int j=0 ; j<n ; ++j){
			if((i>>j)&1){
				currSubSet.push_back(s[j]);
			}
		}
		cout << currSubSet << endl;
	}
}

vector<string> bringAnswer(string &s,int idx){
	if(idx == s.size())return {""};
	vector<string> smallAns = bringAnswer(s,idx+1);
	int n = smallAns.size();
	
	for(int i=0 ; i<n ; ++i){
		smallAns.push_back(s[idx] + smallAns[i]);
	}

	return smallAns;
}

void formAnswer(string &s,int idx,string &currPath){
	
	if(idx == s.size()){
		cout << currPath << endl;
		return;
	}
	formAnswer(s,idx+1,currPath);
	
	currPath.push_back(s[idx]);
	formAnswer(s,idx+1,currPath);
	currPath.pop_back();
}

void NC0(string &s,int idx,string &currPath){
	cout << currPath << endl;
	if(idx == s.length()){
		return;
	}
	int n = s.size();
	for(int i=idx ; i<n ; ++i){
		currPath.push_back(s[i]);
		NC0(s,i+1,currPath);
		currPath.pop_back();
	}
}

int main()
{
	string s = "abc";
	string currPath = "";
	NC0(s,0,currPath);
	return 0;
}
