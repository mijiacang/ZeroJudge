/**********************************************************************************/  
/*  Problem: a002 "簡易加法"                                                  */  
/*  Language: C                                                                   */  
/*  Result: AC (4ms, 262KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 10:39:01                                         */  
/**********************************************************************************/  
  
#include<stdio.h>  
  
int main(){  
	int a,b;  
	while(scanf("%d %d", &a, &b)==2)  
		printf("%d\n", a+b);  
	return 0;  
}