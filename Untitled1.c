#include<stdio.h>
int EnterShop(int x)
{
	x=1;
	return x;
}
int LeaveShop(int x)
{
	x=0;
	return x;
}
int main()
{
int left,right;
int ShopForAWhile;
left=right=0;
if(left!=1&&right!=1)
{
	left=EnterShop(left);
	right=EnterShop(right);
	do
	{
		left=1;
		right=1;
	}
	while(ShopForAWhile()!=1);

		left=LeaveShop(left);
		right=LeaveShop(right);

	}
	return 0;
}
