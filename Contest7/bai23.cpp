#include<bits/stdc++.h>
using namespace std;
string decode(string str);
main(){
	int test;
	cin >> test;
	while(test--){
		string code;
		cin >> code;
		cout << decode(code) << endl;
	}
}
string decode(string str){
	stack <char> stkC;
	stack <int> stkNum;
	string temp = "", result = "";
	for(int i = 0; i < str.length(); i++){
		int count = 0;
		if(str[i] >= '0' && str[i] <= '9'){
			while(str[i] >= '0' && str[i] <= '9'){
				count = count *10 + str[i] -'0';
				i++;
			}
			i--;
			stkNum.push(count);
		}
		else if(str[i] == ']'){
			temp = ""; result = "";
			count = 0;
			if(!stkNum.empty()){
				count = stkNum.top();
				stkNum.pop();
			}
			while(!stkC.empty() && stkC.top() != '['){
				temp = stkC.top() + temp;
				stkC.pop();
			}
			if(!stkC.empty() && stkC.top() == '['){
				stkC.pop();
			}
			//stkC.pop();
			for(int j = 0; j < count; j++){
				result = result + temp;
			}
			for(int j = 0; j < result.length(); j++) 
                stkC.push(result[j]);
            
		}
		else if(str[i] == '['){
			if(str[i-1] >= '0' && str[i-1] <= '9')
				stkC.push(str[i]);
			else{
				stkC.push(str[i]);
				stkNum.push(1);
			}
		}
		else stkC.push(str[i]);
		result = "";
		while(!stkC.empty()){
			result = stkC.top() + result;
			stkC.pop();
		}
	}
	return result;
}
