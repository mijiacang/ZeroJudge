/**********************************************************************************/  
/*  Problem: b225 "D. �βy�m��" from 2008 NPSC �ꤤ�ըM��                */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 684KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-12-12 14:00:14                                         */  
/**********************************************************************************/  
  
#include<iostream>  
int main(){  
  int numCase;  
  scanf("%d", &numCase);  
  
  while(numCase--){  
    int x1,y1,x2,y2,x3,y3;  
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);  
    //�~�n���s = �T�I�@�u
    int out = (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);  
    if( out==0 ) puts("NO");  
    else puts("YES");  
  }  
  return 0;  
}  