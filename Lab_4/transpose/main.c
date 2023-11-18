#include <stdio.h>
#include <stdlib.h>
#define max_tm 50
typedef struct
{
    int row;
    int col;
    int val;
}term;
term s[max_tm];
term t[max_tm];
void init()
{
    int row,col;
    printf("Enter the number of rows and columns:-\n");
    scanf("%d%d",&row,&col);
    int i,j,CI=1;
    term t;
    printf("Enter the elements:-\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            int e;
            scanf("%d",&e);
            if(e!=0)
            {
                t.row=i;
                t.col=j;
                t.val=e;
                s[CI++]=t;
            }
        }
    }
    t.row=row;
    t.col=col;
    t.val=CI-1;
    s[0]=t;
}
void display(term l[])
{
    int i,j,k=1;
    for(i=0;i<l[0].row;i++)
    {
        for(j=0;j<l[0].col;j++)
        {
            if(l[k].row==i && l[k].col==j)
            {


                printf("%d ",l[k].val);
                k++;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void transpose(term s[],term t[])
{
    int i,j,k=1,col,nzt;
    col=s[0].col;
    nzt=s[0].val;
    for(i=0;i<col;i++)
    {
        for(j=0;j<=nzt;j++)
        {
            if(s[j].col==i)
            {
                t[k].row=i;
                t[k].col=s[j].row;
                t[k++].val=s[j].val;
            }
        }
    }
    t[0].row=col;
    t[0].col=s[0].row;
    t[0].val=nzt;
    display(t);
}

int main()
{
    init();
    printf("The entered matrix is:\n");
    display(s);
    printf("The transpose of the entered matrix is:\n");
    transpose(s,t);



}
