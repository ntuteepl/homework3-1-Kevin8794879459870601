#include <stdio.h>
main()
{
int i, j, k,l,m,n,o;
scanf("%d%d%d%d%d%d", &i, &j, &k,&l,&m,&n);

if (k<j){
    o++;
}
if(m<l){
    o++;
}
if(m<j){
    o++;
}
printf("%d\n", o);
return 0;
}

