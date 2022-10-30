#include<stdio.h>
#include<stdlib.h>
int s=10;
struct hash
{
    int no;
}a[10]={0};

void insert()
{
    int x;
    scanf("%d",&x);
    int k=x%s;
    if(a[k].no!=0)
    {
        printf("Collission occured");
        for(int i=0;i<s;i++)
        {
            k=(x+(i*i))%s;
            if(a[k].no==0)
            {
                a[k].no=x;
                break;
            }
        }
    }
    else
    {
        a[k].no=x;
    }
}
void display()
{
    for(int i=0;i<s;i++)
    {
        if(a[i].no>0)
        {
            printf("\nhash value %d - key is %d\n",i,a[i].no);
        }
    }
}
void delete()
{
    int x;
    int count=0;
    scanf("%d",&x);
    int k=x%s;
    if(a[k].no==x)
    {
        a[k].no=0;
        count++;
    }
    else
    {
        for(int i=0;i<s;i++)
        {
            int k=(x+i*i)%s;
            if(a[k].no==x)
            {
                a[k].no=0;
                count++;
                break;
            }
        }
    }
    if(count==0)
    {
        printf("element not found");
    }
}
void search()
{
    int x,count=0,k;
    scanf("%d",&x);
    k=x%s;
    if(a[k].no==x)
    {
        printf("Element found");
        
    }
    else
    {
        for(int i =0;i<s;i++)
        {
            int k = (x+(i*i))%s;

            if(a[k].no==x)
            {
                printf("FOUND\n");
                break;
            }
            else if(i==s)
            {
                printf("NOT FOUND\n");
            }
        }

    }

    
}
int main()
{
    int x;
    do{
        printf("\nEnter\n1.Insert\n2.delete\n3.Display\n4.Search\n5.exit");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                search();
                break;
            }
            case 5:
            {
                exit(0);
            }
        }
        
    }while(1);
}