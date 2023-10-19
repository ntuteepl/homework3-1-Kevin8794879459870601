#include <stdio.h>
main()
{
int i,j;
scanf("%d", &i);
    j=i-1;
	while(j>2){
            if (i%j==0){
                printf("NO");
                break;
            }

            j=j-1;

	}
	if (i%j>0||i==2){
                printf("YES");

            }

}

