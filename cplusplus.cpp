#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high) {
	int i = low - 1;
	int pivot = a[high];
	for(int j=low; j<high; j++) {
		if(a[j] <= pivot) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1], a[high]);
	return i+1;
}

void quick_sort(int a[], int low, int high) {
	if(low<high) {
		int pii = partition(a, low, high);
		
		quick_sort(a,low, pii-1);
		quick_sort(a,pii+1, high);
	}
}

int main() {
	//10
	//3 2 7 0 1 8 7 6 9 4
	//0 1 2 3 4 6 7 7 8 9
	//
	//10
	//3 2 5 0 1 8 7 6 9 4
	//0 1 2 3 4 5 6 7 8 9
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	quick_sort(a,0, n-1);
	
	for(int x : a) cout << x << " ";
	
	return 0;
}
