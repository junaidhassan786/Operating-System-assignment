#include <stdio.h>
#include <unistd.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++){
		a[i]=i+1;
	}
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
	int cpid1=fork();
	int cpid2=fork();
	int cpid3=fork();	
	if(cpid1>0){
		for(int i=0;i<16;i++){
			sum1+=a[i];
		}
		printf("sum1 :  %d",sum1);
		printf("\n");
	}
	if(cpid1==0){
		for(int i=16;i<32;i++){
			sum2+=a[i];
		}
		printf("sum2 :  %d",sum2);
		printf("\n");
	}
	if(cpid2>0){
		for(int i=32;i<48;i++){
			sum3+=a[i];
		}
		printf("sum3 :  %d",sum3);
		printf("\n");	
	}
	if(cpid2==0){
		for(int i=48;i<64;i++){
			sum4+=a[i];
		}
		printf("sum4 :  %d",sum4);
		printf("\n");
	}
	if(cpid3>0){
		for(int i=64;i<80;i++){
			sum5+=a[i];
		}
		printf("sum3 :  %d",sum3);
		printf("\n");	
	}
	if(cpid3==0){
		for(int i=80;i<100;i++){
			sum6+=a[i];
		}
		printf("sum4 :  %d",sum4);
		printf("\n");
	}
	if(sum1 != 0 && sum2 != 0 && sum3 != 0 && sum4 != 0 && sum5 != 0 && sum6 != 0)
	{
		int sum=sum1+sum2+sum3+sum4+sum5+sum6;
		printf("Sum of first 100 numbers is : %d",sum);	
		printf("\n");	
	}
	return 0;
}
