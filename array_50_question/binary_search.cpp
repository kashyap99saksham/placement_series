//Binary Search
int bin_search(int A[], int left, int right, int k)
{
    int mid = (left+right)/2;
    if(left>right)
        return -1;
    if(k==A[mid])
        return mid;
    if(k<A[mid])
        return bin_search(A,left,mid-1,k);
    else
        return bin_search(A,mid+1,right,k);
}
