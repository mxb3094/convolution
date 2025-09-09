#include <stdio.h>
int convolution (int *x, int SizeX,int *h,int SizeH, long long *y)
{
 int SizeY=SizeX+SizeH-1;

}

int main()
{
    int SizeX=0,SizeH=0;
    //initialize test arrays
    int x[]={1,1,2,3,3,4,3,2,-1};
    int h[]={-2,-1,3,5,6,4,2};
    SizeX=(sizeof(x)/sizeof(x[0])+1);
    SizeH=(sizeof(h)/sizeof(h[0])+1);
    //change to the 0 index in both arrays
    int x_zero_inx=0;
    int h_zero_inx=0;

    return 0;
}
