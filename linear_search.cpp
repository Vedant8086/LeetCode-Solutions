#include<iostream>
#include<string>
#include<array>
#include<vector>
using namespace std;

class linear_search {
	public :
	linear_search() {
		cout << "Linear Search Algorithm Started.." <<endl;
	}
	void searching() {
		int target,size;
		cout << "Enter Array Size : ";
		cin >> size;
		vector<int> v1;
		for(int i = 1;i <= size;i++) {
			int element;
			cin >> element;
			v1.push_back(element);
		}
		cout << "Enter the target element : ";
		cin >> target;
		for(int i = 0;i < v1.size();i++) {
			if(target == v1[i]) {
				cout << "Target is at position : " << i+1 << endl;
			}
		}
	}	
	~linear_search() {
			cout << "Linear Search is Over." << endl;
	}
};
int main() {
	linear_search l1;
	l1.searching();
	//this is code for linear search in cpp.
	return 0;
	
}