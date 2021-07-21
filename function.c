#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//1. Ham kiem tra 1 so co phai so nguyen to hay khong
int isprime(int n) { 
	int i;
	if(n < 2) return 0;
	if(n == 2) return 1;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

//2. ham tim so nguyen to ngay sau n
int nextprime(int n) {
	int i;
	for(i = n + 1; ; i++) {
		if(isprime(i)) {
			break;
		}
	}
	return i;
}

//3. Kiem tra 1 so co phai so chinh phuong khong
int isSquare(int n){
	return ((int)sqrt(n)*(int)sqrt(n)==n)?1:0;
}

//4. Kiem tra 1 so co phai so hoan hao khong
int isPerfect(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	return (s==n)?1:0;
}


//5. Tim vi tri ma tai do gia tri lon nhat
int imax(int a[], int n) {
	int imax = 0, i;
	for(i = 1; i < n; i ++) {
		if(a[i] > a[imax]) {
			imax = i;
		}
	}
	return imax;
}

//6. tim gia tri lon nhat trong mang
int max (int a[], int n){
	int indexMax = imax(a,n);
	return a[indexMax];
}


//7. tim vi tri cua v trong mang a, Neu khong thay thi tra ve -1
int indexof(int a[], int n, int v) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == v) {
			return i;
		}
	}
	return -1;
}


//8. sap xep theo kieu selection sort
void selection(int a[], int n) {
	int i, j, imin;
	for(i = 0; i < n - 1; i ++) {
		//find min in a range of [i+1,n]
		imin = i + 1;
		for(j = i + 1; j < n; j ++) {
			if(a[j] < a[imin]) {
				imin = j;
			}
		}
		if(a[i] > a[imin]) {
			int temp= a[i];
			a[i]=a[imin];
			a[imin]=temp;
		}
	}
}

//9. sap xep theo kieu interchange sort
void interChange(int a[], int n) {
	int i, j;
	//n = 4;//first 4 numbers
	//for(i = n - 4; i < n - 1; i ++) {//4 last numbers
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(a[i] > a[j]){
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

//10. sap xep theo kieu bubble sort
void bubbleSort(int a[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
//11. Hàm xóa 1 phan tu ung voi vi tri pos truyen vao
void removeAt(int a[], int *n, int pos){
	int i;
	for(i=pos;i<*n;i++){
		a[i]=a[i+1];
	}
	(*n)--;
}

int main() {
	
	
}




