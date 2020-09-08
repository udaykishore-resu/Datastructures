#include<iostream>
#include<unordered_map>

using namespace std;

void printAllSubArrays(int arr[],int n){
	unordered_multimap<int, int> map;
	map.insert(pair<int, int>(0,-1));
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		auto ip=map.find(sum);
		if(ip!=map.end()){	
			while(ip!=map.end() && ip->first==sum){
				cout<<ip->second+1<<"---->"<<i<<endl;
				ip++;
			}
		}

		map.insert(pair<int, int>(sum,i));
	}

}



int main(){
	int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int n=sizeof(arr)/sizeof(arr[0]);
	printAllSubArrays(arr,n);

	return 0;
}
