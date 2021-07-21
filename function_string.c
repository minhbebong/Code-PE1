#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//String

//1. return the last pos of character c in s
int lastindexof(char s[], char c) {
	int i, n;
	n = strlen(s);
	for(i = n - 1; i >= 0; i --) {
		if(s[i] == c) return i;
	}
	return -1;
}
//2. return the first pos of character c in s
int indexof(char s[], char c) {
	int i, n;
	n = strlen(s);
	for(i = 0; i < n; i ++) {
		if(s[i] == c) return i;
	}
	return -1;
}

//3. exchange values of 2 strings
void swap(char a[], char b[]) {
	char t[100];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}

//4. sort the list of strings ascending by their length
void bubble(char a[][100], int n) {
	int i, j;
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(strlen(a[i]) > strlen(a[j])) swap(a[i],a[j]);
		}
	}
}

//5. get a substring in s from pos k with the length is len
void substring(char s[], int k, int len, char sub[]) {
	int i, j;
	j = 0;
	for(i = k; i < len + k; i ++) {
		sub[j] = s[i];
		j++;
	}
	sub[j] = '\0';
}

//6. return the first pos of s2 in s
//int indexof(char s[], char s2[]) {
//	int i;
//	char sub[100];
//	int len1 = strlen(s), len2 = strlen(s2);
//	for(i = 0; i <= len1 - len2; i++) {
//		substring(s,i,len2,sub);
//		if(strcmp(s2,sub) == 0) return i;
//	}
//	return -1;
//}

//7. in chuoi dao nguoc
void reverse(char s[]) {
	char s1[200];
	int size=0;
	int i;
	for(i= strlen(s)-1; i>=0; i--) {
		s1[size++]=s[i];
	}
	s1[size]='\0';

	for(i=0; i<size; i++) {
		s[i]=s1[i];
	}
}
//8. return 1 if s is a palindrome otherwise return 0
int ispalindrome(char s[]) {
	int i, n;
	n = strlen(s);
	for(i = 0; i < n / 2; i ++) {
		if(s[i] != s[n - i - 1]) return 0;
	}
	return 1;
}
//9. tìm vi tri cua tu dai nhat
int imax(char a[][100], int n) {
	int imax = 0, i;
	for(i = 1; i < n; i ++) {
		if(strlen(a[i]) > strlen(a[imax])) {
			imax = i;
		}
	}
	return imax;
}

//Thay the doan ki tu dau tien tim duoc
char *replaceFirstWord(char *str,char *oldstr,char *newstr) {
	char bstr[strlen(str)];
	memset(bstr,0,sizeof(bstr));
	int i;
	int check = 0;
	for(i = 0; i < strlen(str); i++) {
		if(!strncmp(str+i,oldstr,strlen(oldstr)) && check == 0) {
			strcat(bstr,newstr);
			i += strlen(oldstr) - 1;
			check = 1;
		} else {
			strncat(bstr,str + i,1);
		}
	}

	strcpy(str,bstr);
	return str;
}

//Thay the tat ca ki tu old bang new
char *replaceAllWord(char *str,char *oldstr,char *newstr) {
	char bstr[strlen(str)];
	memset(bstr,0,sizeof(bstr));
	int i;
	for(i = 0; i < strlen(str); i++) {
		if(!strncmp(str+i,oldstr,strlen(oldstr))) {
			strcat(bstr,newstr);
			i += strlen(oldstr) - 1;
		} else {
			strncat(bstr,str + i,1);
		}
	}

	strcpy(str,bstr);
	return str;
}

//Sap xep tang dan theo alphabet
void sortByName(char a[][100], int n) {
	int i, j;
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(strcmp(a[i],a[j])>0) {
				char t[100];
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
}

//remove redundant spaces in a string s
void removeRedSpaces(char s[]) {
	int n,low, up, i, j;
	char x[100];
	n = strlen(s);
	i=0;
	j=n-1;
	while(i<n && s[i]==' ') i++;
	low = i;
	while(j>0 && s[j]==' ') j--;
	up = j;
	if(low>up) {
		strcpy(s,"");
		return;
	}
	strcpy(x,"");
	i = low;
	j=0;
	while(i<=up) {
		while(i<up && s[i]==' ') i++;
		while(i<=up && s[i]!=' ') x[j++] = s[i++];
		if(i<=up) x[j++] = ' ';
	}
	x[j] = '\0';
	strcpy(s,x);
}

//xoa tu o vi tri pos truyen vao
void removeAt(char a[][100], int *n, int pos){
	int i;
	for(i=pos;i<*n;i++){
		strcpy(a[i],a[i+1]);
	}
	(*n)--;
}

int main() {
	int n=5;
	char s[n][100];
	int i,j;
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(s[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])==0){
				removeAt(s,&n,j);
				j--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s ",s[i]);
	}

}




