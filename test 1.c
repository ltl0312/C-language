#include <stdio.h>

int main()

{

 int  m,n;

/**********Program**********/
	int i,a,b,c;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(i==a+b*b+c*c*c)
		{
			printf("%d",i);
		}
		
	}

 	return 0;

 

 

/**********  End  **********/

}
