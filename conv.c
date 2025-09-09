#include <stdio.h>
int convolution (int *x, int SizeX,int *h,int SizeH, int *y)
{
    //setting size of y
    int SizeY=SizeX+SizeH-1;
 //impementing the convlolution with 2 nested for loops
    for(int n=0;n<SizeY;n++)
    {
        y[n]=0;
        int StartK=0;
        //check that both arrays are within bounds
        if(n-(SizeH-1)>0)
        {
            StartK=n-(SizeH-1);
        }
        int EndK=n;
        if(n>SizeX-1)
        {
            EndK=SizeX-1;
        }
        for(int k=StartK;k<= EndK;k++)
        {
            y[n]=y[n]+x[k]*h[n-k];
        }
    }

}

int main()
{
    int SizeX=0,SizeH=0;
    //int SizeY=SizeX+SizeH-1;

    //initialize test arrays
    int x[]={1,1,2,3,3,4,3,2,-1};
    int h[]={-2,-1,3,5,6,4,2};
    /*
    
    
    
    room for code in case incomplete arrays
    MALLOC x,h,y array
    
    
    
    
    
    */
    SizeX=(sizeof(x)/sizeof(x[0]));
    SizeH=(sizeof(h)/sizeof(h[0]));
    int SizeY=SizeX+SizeH-1;
    int y[SizeY];
    //change to the 0 index in both arrays
    int x_zero_inx=2;
    int h_zero_inx=3;
    //setting the y 0 index
    int y_zero_inx= x_zero_inx + h_zero_inx;
    convolution(x,SizeX,h,SizeH,y);
    printf("y length: %d\n", SizeY);
    printf("y: ");
    for (int n = 0; n < SizeY; n++)
    {
        printf("%d", y[n]);
        if (n < SizeY - 1) printf(" ");
    }
    printf("\n");

    printf("x_zero_index: %d\n", x_zero_inx);
    printf("h_zero_index: %d\n", h_zero_inx);
    printf("y_zero_index: %d\n", y_zero_inx);



    return 0;
}
