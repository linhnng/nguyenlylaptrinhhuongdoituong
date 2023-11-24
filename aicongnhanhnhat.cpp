#include<iostream>
using namespace std;
class tinh{
	private: 
	int a,b;
	public:
		tinh(int c, int d): a(c), b(d){
		}
		int cong(){
			return a+b;
		}
		
};
int main(){
	int a,b;
	cin>>a>>b;
	tinh tinh(a,b);
	cout<<tinh.cong();
}
