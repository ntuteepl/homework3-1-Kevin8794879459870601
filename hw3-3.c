#include <stdio.h>
main()
{
int i,j,k,l,m,n,o,p,q,r;
scanf("%d%d", &i,&j);
k=i%10;
l=(i%100-k)/10;
m=(i%1000-i%100)/100;
n=(i-i%1000)/1000;
o=j%10;
p=(j%100-o)/10;
q=(j%1000-j%100)/100;
r=(j-j%1000)/1000;


if ((k+l+m+n)>(o+p+q+r)){
printf("%d\n",j);
}
if ((k+l+m+n)<(o+p+q+r)){
printf("%d\n",i);
}
if ((k+l+m+n)==(o+p+q+r)){
        if(i<j){
printf("%d\n",i);}
            if(i>j){
                    printf("%d\n",j);

                    }
            }
}

