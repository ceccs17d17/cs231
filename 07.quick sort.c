/*
	7.QUICK SORT NON-RECURSIVE
	NAME :BAMISHA A
	ROLL No. :17
	*/


#include<stdio.h>
 void main()
 {
 int i,j,temp,beg,end,mid,item;
 int arr[]={34,67,23,1,89,2,36,12,20,61};
 printf("Enter value");
 for(i=0;i<=9;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<=9;i++)
 {
  for(j=i+1;j<=9;j++)
  {
   if(arr[i]>arr[j])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
 for(i=0;i<=9;i++)
 {
  printf("%d",arr[i]);
 }
 printf("Enter the number to find:");
 scanf("%d",&item);
 beg=0;
 end=9;
 mid=(int)(end+beg)/2;
 while(item!=arr[mid] && beg<=end)
 {
  if(item>arr[mid])
  {
   beg=mid+1;
  }
  else
  {
   end=mid-1;
  }
  mid=(int)(end+beg)/2;
 }
 if(beg<=end)
 {
  printf("Position is %d",mid+1);
 }
 else
  printf("Position may be become %d",mid+1);
 }

OUTPUT:
	Enter size of the array : 3
	Enter array elements
	7
	1
	4
	Sorted Array
	1
	4
	7
