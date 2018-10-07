#include <iostream>
using namespace
std; int counter=1;
void Merge(int *arr,int start,int mid,int
End); void merge_sort(int *arr,int start,int
End); int main()
{
int n;
cout<<"Enter the size of the
array:"; cin>>n;
int arr[n];
for(int i=0;i<n;++i)
cin>>arr[i];
merge_sort(arr,0,n-1);
cout<<endl<<"Sorted
Array:"; for(int i=0;i<n;++i)
int i;
cout<<"(";
for(int i=start;i<=mid;++i)
{
cout<<arr[i]<<", ";
}
cout<<"\t";
for(i=mid+1;i<End;++i)
{
cout<<arr[i]<<", ";
}
if(i==End)
cout<<arr[End];
cout<<")";
cout<<endl;
if(start<End)
{
merge_sort(arr,start,mid);
merge_sort(arr,mid+1,End);
Merge(arr,start,End,mid);
for(int i=start;i<=End;++i)
{
cout<<arr[i]<<"\t";
}
cout<<" - Merged "<<endl;
}
}
void Merge(int *A, int low, int high, int mid)
{
int i, j, k,
c[50]; i = low;
k = low;
j = mid + 1;
while (i <= mid && j <= high)
{
if (A[i] < A[j])
{
c[k] = A[i];
k++;
i++;
}
else
{
c[k] = A[j];
k++;
j++;
}
}
while (i <= mid)
{
c[k] = A[i];
k++;
i++;
}
while (j <= high)
{
c[k] = A[j];
k++;
j++;
}
for (i = low; i < k; i++)
{
A[i] = c[i];
}
}
