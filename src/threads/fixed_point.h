#include<stdint.h>

#define f 16384// 2^14

int convert_integer_fp(int x);//convert x to fixed point number
int convert_zfp_integer(int x);//convert x to integer(rounding toward zero) 
int convert_rfp_integer(int x);//convert x to integer(rounding to nearest)
int addfp(int x,int y);//add two fixed point numbers
int subfp(int x,int y);//subtract two fixed point numbers
int addfp_int(int x, int n);//add fixed point number and integer
int subfp_int(int x, int n);//subtract fixed point number and integer
int mulfp(int x, int y);//multiply two fixed point numbers
int mulfp_int(int x, int n);//multiply fixed point number and integer
int divfp(int x, int y);//divide fixed point numbers
int divfp_int(int x, int n);//divide fixed point number by integer

int convert_integer_fp(int n)
{
	return (n*f);
}

int convert_zfp_integer(int x)
{
	return (x/f);
}

int convert_rfp_integer(int x)
{
	if(x>=0)
	{
		return (x+(f/2));
	}
	else
	{
		return (x-(f/2));
	}
}

int addfp(int x, int y)
{
	return(x+y);
}

int subfp(int x, int y)
{
	return(x-y);
}

int mulfp(int x, int y)
{
	return ((int64_t)x)*y/f;
}

int mulfp_int(int x, int n)
{
	return(x*n);
}

int divfp(int x, int y)
{
	return ((int64_t) x)*f/y ;
}

int divfp_int(int x, int n)
{
	return(x/n);
}	
 
