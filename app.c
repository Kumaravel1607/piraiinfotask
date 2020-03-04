#include<stdio.h>
#include<string.h>
struct Application{
char App_name[50];
char Author_name[50];
float version;
int Pub_year;
float price;
}B[10];
int main()
{
int i,n,m,c=0,flag=0,cc=0,j=1,k,tem;
char sr_name[50];
float temp;
while(j==1)
{
printf("\t1.Insert\n\t2.Search author Name\n\t3.Sort price\n\t4.Author name and publishing year\n\t5.Sorting by Author name and Publishing year\n\t6.Exit\nSelect the Operation\n");
scanf("%d",&n);
switch(n)
{
    case 1:
        printf("Enter the how many Applications insert\n");
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            printf("Enter the Application name\n");
            scanf("%s",B[i].App_name);
            printf("Enter the Author name\n");
            scanf("%s",B[i].Author_name);
            printf("Enter the version of Application\n");
            scanf("%f",&B[i].version);
            printf("Enter the Publishing year\n");
            scanf("%d",&B[i].Pub_year);
            printf("Enter the price of Application\n");
            scanf("%f",&B[i].price);
        }
        c=c+m;
    break;
    case 2:
        printf("Enter the Searched author name\n");
        scanf("%s",sr_name);
        for(i=0;i<c;i++)
        {
            if(strcmp(sr_name,B[i].Author_name)==0)
            {
                printf("Data are:\n%s\n%s\n%.2f\n%d\n%.2f\n",B[i].App_name,B[i].Author_name,B[i].version,B[i].Pub_year,B[i].price);
            }
            else
            {
            cc++;
            }
        }
        if(c==cc)
        {
        printf("Data not Available\n");
        }
    break;
    case 3:
        printf("Data are sorted by price");
        for(i=0;i<c;i++)
        {
            for(k=i;k<c;k++)
            {
                if(B[i].price>B[k].price)
                {
                    temp=B[i].price;
                    B[i].price=B[k].price;
                    B[k].price=temp;
                    strcpy(sr_name,B[i].App_name);
                    strcpy(B[i].App_name,B[k].App_name);
                    strcpy(B[k].App_name,sr_name);
                    strcpy(sr_name,B[i].Author_name);
                    strcpy(B[i].Author_name,B[k].Author_name);
                    strcpy(B[k].Author_name,sr_name);
                    temp=B[i].version;
                    B[i].version=B[k].version;
                    B[k].version=temp;
                    tem=B[i].Pub_year;
                    B[i].Pub_year=B[k].Pub_year;
                    B[k].Pub_year=tem;
                }
            }
        }
        for(i=0;i<c;i++)
        {
            printf("Data are:\n%s\n%s\n%.2f\n%d\n%.2f\n",B[i].App_name,B[i].Author_name,B[i].version,B[i].Pub_year,B[i].price);
        }
    break;
    case 4:
        printf("Enter the Searched author name\n");
        scanf("%s",sr_name);
        printf("Enter the Searched publishing year\n");
        scanf("%d",&tem);
        cc=0;
        for(i=0;i<c;i++)
        {
            if(strcmp(sr_name,B[i].Author_name)==0 && B[i].Pub_year==tem)
            {
                printf("Data are:\n%s\n%s\n%.2f\n%d\n%.2f\n",B[i].App_name,B[i].Author_name,B[i].version,B[i].Pub_year,B[i].price);
            }
            else
            {
            cc++;
            }
        }
        if(c==cc)
        {
        printf("Data not Available\n");
        }
    break;
    case 5:
        printf("Data are sorted by author name and publishing year");
        for(i=0;i<c;i++)
        {
            for(k=i+1;k<c;k++)
            {
                if(strcmp(B[i].Author_name,B[k].Author_name)>0)
                {
                    temp=B[i].price;
                    B[i].price=B[k].price;
                    B[k].price=temp;
                    strcpy(sr_name,B[i].App_name);
                    strcpy(B[i].App_name,B[k].App_name);
                    strcpy(B[k].App_name,sr_name);
                    strcpy(sr_name,B[i].Author_name);
                    strcpy(B[i].Author_name,B[k].Author_name);
                    strcpy(B[k].Author_name,sr_name);
                    temp=B[i].version;
                    B[i].version=B[k].version;
                    B[k].version=temp;
                    tem=B[i].Pub_year;
                    B[i].Pub_year=B[k].Pub_year;
                    B[k].Pub_year=tem;
                }
            }
        }
        for(i=0;i<c;i++)
        {
            for(k=i;k<c;k++)
            {
                if(B[i].Pub_year>B[k].Pub_year)
                {
                    temp=B[i].price;
                    B[i].price=B[k].price;
                    B[k].price=temp;
                    strcpy(sr_name,B[i].App_name);
                    strcpy(B[i].App_name,B[k].App_name);
                    strcpy(B[k].App_name,sr_name);
                    strcpy(sr_name,B[i].Author_name);
                    strcpy(B[i].Author_name,B[k].Author_name);
                    strcpy(B[k].Author_name,sr_name);
                    temp=B[i].version;
                    B[i].version=B[k].version;
                    B[k].version=temp;
                    tem=B[i].Pub_year;
                    B[i].Pub_year=B[k].Pub_year;
                    B[k].Pub_year=tem;
                }
            }
        }
        for(i=0;i<c;i++)
        {
            printf("Data are:\n%s\n%s\n%.2f\n%d\n%.2f\n",B[i].App_name,B[i].Author_name,B[i].version,B[i].Pub_year,B[i].price);
        }
        break;
        case 6:
            exit(0);
        break;
        
}

}
return 0;
}
