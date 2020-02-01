int peakElement(int arr[], int n)
{
    if(arr[0]>arr[1])
        return 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
        {
            return i;
        }
    }
}
