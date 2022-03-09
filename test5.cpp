#include <bits/stdc++.h>
using namespace std;

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
int array_is_unique(const int* array, size_t size){
	int flag = 0;
	for(size_t i=0; i <= size ; i++){
		for(size_t j = i+1; j<=size; j++){
			if(array[i]==array[j]){
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
int main(){
	size_t size;
	cin>>size;
	int array[size ];
	for(int i=0; i<size; i++){
		cin>>array[size];
	}
	int check = array_is_unique(array,SIZE_OF_ARRAY(array));
    if (check == 1) cout << "ton tai phan tu trung nhau";
    else cout << "khong ton tai phan tu trung nhau";
    cout << endl;}

