#include<stdio.h>

int main(){
	int n, x;
	do {
		printf("Nhâp so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0 || n > 100);
	
	int arr[n];
	
	printf("Nhap %d phan tu cua mang: \n", n);
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i+ 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Nhap so can dem: ");
	scanf("%d", &x);
	
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			count++;
		}
	}
	printf("So lan %d xuat hien trong mang la: %d\n", x, count);
	return 0;
}

