#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n) 
{
	int i, res=1;
	
	for(i=1;i<=n;i++) {
		res = res * i;
	}
	return res;
}

int combination(int n, int r)
{   int n1, n2, n3;
  n1= factorial(n);
  n2 = factorial(n-r);
  n3 = factorial(r);
  
  return (n1/n2/n3);
   
}



int get_integer()
{
	int x;
	printf("input an integer: ");
	scanf("%i", &x);
	
	return x;
	}	

int main(int argc, char *argv[])
{	
	//변수 선언
	int n,r, result;
	
	//n 입력 
	n = get_integer();
	//r  입력
	r = get_integer();
	 
	//combinaion
	result = combination(n,r);
	
	printf("combination result is %i\n", result);
	 
	return 0;
}		    

