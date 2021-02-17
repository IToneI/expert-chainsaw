#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

void stringswap_by_strncpy(char *L){
	char M[80] = { 0 };
	char *n = strstr(L, ",");
	if (n == NULL) {
		return;
	}
	
	strncpy(M,n+1, strlen(n)-1 );
	strncpy(M+strlen(n)-1, n, 1);
	strncpy(M+strlen(n),L, strlen(L) - strlen(n));
	cout << M << endl;
}

void stringswap_by_strncat(char* L) {
	char M[80] = { 0 };
	char* f = strstr(L, ",");
	if (f == NULL) {
		return;
	}
	strncat(M, f + 1, 80);
	strncat(M + strlen(f) - 1, f,1);
	strncat(M + strlen(f), L, strlen(L)-strlen(f));
	cout << M << endl;

	
}
void stringswap_by_cycle(char* L) {
	char M[80] = { 0 };
	char* f = strstr(L, ",");
	if (f == NULL) {
		return;
	}
	int k = 0;
	int n = f - L;
	for ( int i = n+1; i < strlen(L); i++) {
		 
		M[k] = L[i];
		k++;
	}
	M[k] = L[n];
	k++;
	for (int i = 0; i < n; i++) {

		M[k] = L[i];
		k++;
	}
	cout << M << endl;




}

void mirror(char* L) {
	
	
	int n = strlen(L)/2;
	char pol = 0;
	int k = strlen(L)-1;
	for (int i = 0; i < n ; i++) {
		pol = L[i];
		L[i] = L[k-i];
		L[k - i] = pol;
		
		cout << " i = " << i;
		cout << L[k-i]<<"= k-i " << endl;
		cout << " k-i = "<<" " << k - i << endl;
		cout << L << endl;
	}
	cout << L << endl;




}








void arraylab() {


	//создать строку

	char L[80] = {0};
	gets_s(L);

	// найти в ней ","

	

	//stringswap_by_strncpy(L);
	//stringswap_by_strncat(L);
	//stringswap_by_cycle(L);
	mirror(L);
	// поменять местами куски до и после запятой
	





}

