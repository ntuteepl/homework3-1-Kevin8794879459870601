#include <stdio.h>
#include <stdlib.h>

int main()
{
int Z,C,D,E,F,G,H,I,J=0;
int i,j,k,l,m,n,o,p,q,r;
scanf("%d", &i);
Z=0;
k=i%10;
l=(i%100-k)/10;
m=(i%1000-i%100)/100;
n=(i-i%1000)/1000;
 j=1;
while(j>0){
scanf("%d",&j);
if(j==0){break;}

int A,B= 0;

o=j%10;
p=(j%100-o)/10;
q=(j%1000-j%100)/100;
r=(j-j%1000)/1000;



if( r == n){A++;}
else if(q == n || p == n || o == n){B++;}

if( q == m){A++;}
else if(r == m || p == m || o == m){B++;}

if( p == l){A++;}
else if(r == l || q == l || o == l){B++;}

if( o == k){A++;}
else if(r == k || p == k || q == k){B++;}
Z++;
if(Z==1){C=A;
D=B;}
if(Z==2){E=A;
F=B;}
if(Z==3){G=A;
H=B;}
if(Z==4){I=A;
J=B;}
A=0;
B=0;
}


printf("%dA%dB\n%dA%dB\n%dA%dB\n%dA%dB",C,D,E,F,G,H,I,J);
return 0;
}


