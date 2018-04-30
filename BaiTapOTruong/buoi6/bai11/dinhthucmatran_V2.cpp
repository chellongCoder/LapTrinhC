#include<stdio.h>

void nhap(int a[][10], int &n ){
	printf("\nnhap n = ");
	scanf("%d", &n);
	for(int i = 0; i< n; i++ ){
		for(int j = 0; j< n; j++ ){
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d",&a[i][j]);
		}
	}
}

int determinant(int matrix[10][10], int n ){
	int s, sum= 0;
	
	if( n == 1 ) return matrix[0][0];
	
	if( n == 2 ) return ( matrix[0][0]*matrix[1][1] 
		- matrix[0][1]*matrix[1][0]) ;
		
	for(int k = 0; k < n; k++ ){		
		int smaller[10][10];		
		for(int i = 0; i< n; i++ ){			
			for(int j = 1; j< n; j++ ){				
				if( i < k ) smaller[i][j-1] = matrix[i][j];
				else if( i > k ) smaller[i-1][j-1] = matrix[i][j];
			}
		}
		
		if(k%2 == 0 ) s = 1;
		else s = -1;
		
		sum+= matrix[k][0]*s*determinant(smaller, n-1);
	}
	return sum;
}
  
void xuat(int a[][10], int n ){
	for(int i = 0; i< n; i++ ){
		for(int j = 0; j< n; j++ ){
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int a[10][10], n;
	nhap(a,n);
	xuat(a,n);
	int k = determinant(a,n);
	printf("KQ = %d", k);
}
