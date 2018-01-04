#include<stdio.h>

int main(){
	int n,t,temp,sum=0;
	int i=0,j=0,k=0;
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++){
		if(i==n-1){scanf("%d",&temp);}
		else{
		scanf("%d ",&temp);		  
		    }
		sum+=temp;
		if(sum>t){printf("NO");}else if(sum==t){printf("YES");return 0;}
	
			}
	if(sum<t)printf("NO");
return 0;
}
