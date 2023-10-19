#include <stdio.h>
main()
{
int i, j, k,l,m,n,o;
scanf("%d%d%d%d%d%d", &i, &j, &k,&l,&m,&n);
o=3;
if (k<=j||k<=n){
    o--;
}
if(m<=l||m<=j){
    o--;
}
if(i<=l||i<=n){
    o--;
}


printf("%d\n", o);
return 0;
}
