#include<stdio.h>
#include<conio.h>

void insert(int*arr,int*n,int k,int item);
int delete(int*arr,int*n,int k);
int search(int arr[],int n,int item);
void traverse(int arr[],int n);
int update(int*arr,int n,int k,int item);
main(){
	int arr[100],n=4,i,ch,k,item;
	printf("enter five numbers:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		printf("enter your choice:\n 1-insert\n2-delete\n3-search\n4-traverse\n5-update\n6-stop");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter the position of number between 0-%d",n);
			scanf("%d",&k);
			printf("Enter a item");
			scanf("%d", &item);
			insert(arr,&n,k,item);
		}else if(ch==2){
			printf("Which position you want to delete");
			scanf("%d", &k);
			item = delete(arr,&n,k);
			printf("Deleted value is : %d", item);
		}else if(ch==5){
			printf("enter the position of number between 0-%d",n);
			scanf("%d",&k);
			printf("Enter a item");
			scanf("%d", &item);
			item = update(arr,n,k,item);
			printf("Updated element is %d ", item);
		}else if(ch==3){
			printf("Enter a value to search");
			scanf("%d", &item);
			k = search(arr,n,item);
			printf("value at %d index", k);
		}else if(ch==4){
			traverse(arr,n);
		}else if(ch==6){
			break;
		}else{
			printf("Wrong choice");
		}
		
	}
} 
int search(int arr[],int n,int item){
	int i;
	for(i=0;i<=n;i++){
		if(arr[i] == item){
			return i;
		}
	}
	return -1;
}
void insert(int*arr,int*n,int k,int item){
	int j;
	//printf("%d %d",k,arr[k+1]);
	if(k<=*n){
		j = *n;
		while(j>=k){
			*(arr+j+1) = *(arr+j);
			//printf("%d",arr[j+1]);
			j=j-1;
		}
		*(arr+k)=item;
		*n=*n+1;
	}else{
		printf("Operation can't perform");
	}
}

int delete(int*arr,int*n,int k){
	int item = *(arr+k);
	while(k < *n){
		*(arr+k) = *(arr+k+1);
		k++;
	}
	*n = *n - 1;
	return item;
}
int update(int*arr,int n,int k,int item){
	int x ;
	x = *(arr+k);
	if(k<=n && k>=0){
		*(arr+k) = item;
	}
	return x;
}
void traverse(int arr[],int n){
	int i;
	printf("The array elements are : ");
	for(i=0;i<=n;i++){
		printf("%d\t",arr[i]);
	}
}