#include<stdio.h>
#include<queue>
using namespace std;
#include<stack>
bool check(std::queue<int>&or){
	std::stack<int> s;
	int n=or.size();
	for(int i=1;i<=n;i++){
			s.push(i);
		while(!s.empty()&&or.front()==s.top()){
			s.pop();
			or.pop();
		}
	}
	if(!s.empty()){
		return false;
	}
	return true;
		

}

void main()
{
	std::queue<int> order;
	order.push(3);
	order.push(1);
	order.push(2);
	order.push(4);
	order.push(5);
	if(check(order)){
		printf("Yes\n");
	}
	else
		printf("No\n");


}
