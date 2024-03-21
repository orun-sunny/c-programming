void bubbleSortAlgo(int arr[],int size)
{
    for(int i=0;i<size;i++)
{
    for(int j=0;j<size-i-1;j++)
    {
        if(arr[j+1]<arr[j])
        {
            swap(arr[j+1],arr[j])
        }
    }
}
}
