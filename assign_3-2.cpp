
#include<iostream>
#include<stdio.h>


int main()
{
	int *set;
	int count=0;
	int n,k,a,b,c,d,i;
	
	printf("Enter no. of elements in the set");
	scanf("%d",&n);
	set= new int[n];
	printf("Enter elements in the set");
	for(a=0;a<n;a++)
	scanf("%d,",&set[a]);
	printf("Enter value of k ");
	scanf("%d",&k);


for(a=0;a<n;a++)
	{for(b=0;b<n;b++)
		if(a!=b)
		{for(c=0;c<n;c++)
			if(a!=c )
				if(b!=c)
				{	for(d=0;d<n;d++)
					if(a!=d )
				{
				if(b!=d)
					if(c!=d)
						if(set[a]+set[b]+set[c]*set[d]<=k)
						count++;
	}}}

	}

int subset[count][4];
count=0;
int flag=0;
for(a=0;a<n;a++)
			{for(b=0;b<n;b++)
				if(a!=b)
				{for(c=0;c<n;c++)
					if(a!=c )
							if(b!=c)
						{	for(d=0;d<n;d++)
							if(a!=d)
								if(c!=d )
									if(b!=d)
							{
								if(set[a]+set[b]+set[c]*set[d]<=k)
								{flag=0;
									for(i=0;i<count;i++)
										{
											if(subset[i][0]==set[a]&&subset[i][1]==set[b]&&subset[i][2]==set[c]&&subset[i][3]==set[d])
												{flag=1;break;}
										}
								if(!flag)
								{subset[count][0]=set[a];subset[count][1]=set[b];subset[count][2]=set[c];subset[count][3]=set[d];
								count++;
								}
								}
			}}}
			}

for(a=0;a<count;a++)
	{for(b=0;b<4;b++)
	printf("%d,",subset[a][b]);
	printf("\n");
	}


return 0;
}
