#include <stdio.h>

int main(void) {
	int a,b,add,sub,mul,div,c;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the number\n");
	scanf("%d",&b);
	printf("1.add\n2.sub\n3.mul\n4.div\n");
	printf("enter your choice\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	add=a+b;
	printf("addition is %d",add);
	break;
	case 2:
	sub=a-b;
	printf("subtraction is %d",sub);
	break;
	case 3:
	mul=a*b;
	printf("multiplication is %d",mul);
	break;
	case 4:
    if(b==0)
	printf("infinity");
	else
	{
	div=a/b;
	printf("division is %d",div);
	break;
	default:
	break;
	}
	}
	return 0;
}
